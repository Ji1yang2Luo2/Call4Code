/*
 * CDbSpaceUsage.cpp
 *
 *  Created on: May 25, 2022
 *      Author: jiyang.luo
 */

#include "CDbSpaceUsage.h"
using namespace std;
namespace MyCppApp {

CDbSpaceUsage::CDbSpaceUsage() {
	wlcm = new CHello();
	wlcm->Display(wlcm->Greeting);
	cout<<'\n';
	wlcm->DisplayWords();
	time(&(wlcm->now));
	cout << ctime(&(wlcm->now)) << endl;

		  entry.size = 14.28*1024;//1
		  entry.notes="h1";
		  Items.push_back(entry);

		  entry.size = (8224346.38-3352206.82)/1024;//2
		  entry.notes="D2";
		  Items.push_back(entry);

		  entry.size = (8552139.19-4236142.445)/1024;//3
		  entry.notes="D3";
		  Items.push_back(entry);

		  entry.size = 1.9439*1024;//4
		  entry.notes="LogShrunk DC3";
		  Items.push_back(entry);

		  entry.size = 0.40944*1024;//5
		  entry.notes="LogShrunk DC01";
		  Items.push_back(entry);

		  entry.size = 17.0033382*1024;//6
		  entry.notes="CS DC01";
		  Items.push_back(entry);

		  entry.size = 8069.66925;//7
		  entry.notes="Q, DC01";
		  Items.push_back(entry);

		  entry.size = 0.98763*1024;//8
		  entry.notes="eP DC3";
		  Items.push_back(entry);

		  entry.size = 815.862854;//9
		  entry.notes="H2 on and after 26May2022";
		  Items.push_back(entry);

		  entry.size = 1700.321;//1582.727;//10
		  entry.notes="DC3 after May26, 2022";
		  Items.push_back(entry);

}
void CDbSpaceUsage::fileReadLine()
//int main(int argc, char *argv)
{
	FILE *fp= fopen("../MyFile.txt","r");
	if (fp==NULL)
		exit(EXIT_FAILURE);
	char* line=NULL;
	size_t len=0;
	getline(&line, &len, fp);
	printf("%s", line);
	fclose(fp);
}

void CDbSpaceUsage::FileOp()
{
	//RandomAccessIterator etr;
	ofstream outfile("../MyFile.txt");
	//int cnt=Items.begin()-Items.end();
	//entry=*(Items.begin());
	auto ent=Items.begin();
	while (ent!=Items.end())
	{
		outfile << "Size: "<< ent->size << " Notes: "<< ent->notes << endl;
		cout << "Size: "<< ent->size << " Notes: "<< ent->notes << endl;
		ent++;
	}
//	for (auto Element : Items)
//		outfile << Element.size <<Element.notes << endl;
	//cerr << "Size: "<< (--(Items.end()))->size << " Notes: "<< (--(Items.end()))->notes << endl;
/*
	for (int etr=0; etr<cnt; etr++)
	{
		entry=*(Items.begin()+etr);
		outfile << "Size: "<< (entry.size) << " Notes: "<< entry.notes << endl;
	}
	outfile << "My File says Hi to the reader,"<<'\n'<<" and another line of words.";// << endl;
	cout <<"Let's read MyFile."<<endl;*/
	outfile.close();
	fileReadLine();
}
void CDbSpaceUsage::FileRead()
{
	ifstream infile2("../MyFile.txt");
	if (infile2.fail())
		cerr<<"Read file open failed\n";
	std::string wordline;
	infile2>>wordline;
	cout<<wordline;
	while (!infile2.eof())
	{
		infile2>>wordline;
//		if (!infile2.eof())
			cout<<" "<<wordline;
	}
	cout<<endl;
	infile2.close();
}
void CDbSpaceUsage::GetUnit()
{
	int pages, 	megaBytes;
	cout<<"Now enter the number of pages, and then another size in MB:"<<endl;
	cin>>pages>>megaBytes;
	cout<<pages<<" pages is equivalent to size in MB:"<<pages/128.0	<<endl;
	cout<<	megaBytes<<"MB is equivalent to "<<megaBytes*128.0	<<" pages of 8KB"<<endl;
	srand(wlcm->now);
	for (auto i=0; i<5; i++)
		cout << rand() <<endl;
}

int CDbSpaceUsage::IndexInput()
{
	int index;
	//db entry;
	cout<<"Now enter the db index number:"<<endl;
	cin >> index;
	if (index<0)
		return index;
	ItemIndex=index;
	entry=Items[index];
	cout<<index<<" notes: "<< entry.notes <<endl;
	cout<<	"Current size= "<< entry.size	<<" MB"<<endl;
//	Items[index].size = newsize;
	return index;
}
int CDbSpaceUsage::dbInput()
{
	float newsize;
	string newNotes;
//	db entry;
//	cout<<"Now enter the db index number, and then the new size in GB:"<<endl;
	cin>>newsize;
//	entry=Items[index];
	cout<<ItemIndex<<" notes: "<< entry.notes <<endl;
	cout<<	"Current size= "<< entry.size	<<" MB"<<"New size in MB:"<<newsize<<endl;
	Items[ItemIndex].size = newsize;
	cin>>newNotes;
	//scanf("%s", &newNotes);
	if (newNotes!="")
		cout<<	"New notes: "<<newNotes << endl;
	Items[ItemIndex].size = newsize;
	Items[ItemIndex].notes = newNotes;

	return this->ItemIndex;
}

CDbSpaceUsage::~CDbSpaceUsage() {
	// TODO Auto-generated destructor stub
}

} /* namespace MyCppApp */
