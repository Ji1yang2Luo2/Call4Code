/*
 * CCI.cpp
 *
 *  Created on: May 25, 2022
 *      Author: jiyang.luo
 */

#include "CHello.h"
#include "CDbSpaceUsage.h"
#include <iostream>
//#include <fstream>
#include "stdio.h"
#include "time.h"
#include <stdlib.h>
#include <io.h>
#include <unordered_map>

//#include <vector>
//#include <algorithm>

using namespace std;
//namespace MyCppApp {


using namespace MyCppApp;

template <typename T>
class SwProperty {
protected:
  T x;
public:
  T& get();
  void set(T);
};

template <typename T>
T &SwProperty <T>::get() {
  return x;
}

template <typename T>
void SwProperty<T>::set(T newx) {
  x = newx;
}
class Employee {
public:
  string Name;
  string FireDate;
  int GoofoffDays;
  Employee(){};
  Employee(string aname, string afiredate,
    int agoofdays) : Name(aname), FireDate(afiredate),
    GoofoffDays(agoofdays) {}
};


int main() {
  // A vector that holds Employee instances
  vector<Employee> GreatWorkers;
  GreatWorkers.push_back(Employee("George","123100", 50));
  GreatWorkers.push_back(Employee("Tom","052002", 40));
  for (auto entry : GreatWorkers)
    cout << entry.Name << endl;

  SwProperty<int> separate;
  separate.set(10);
  cout << separate.get() << endl;

  SwProperty<Employee> hallmark;
  hallmark.set(*++GreatWorkers.rbegin());
  cout << hallmark.get().Name << endl;
//int main()
//		{

	vector<float> Numbers;
	  CDbSpaceUsage *work = new CDbSpaceUsage();
	  Numbers.push_back(14.28*1024);

	  Numbers.push_back((8224346.38-3352206.82)/1024);
	  Numbers.push_back((8552139.19-4236142.445)/1024);

	  Numbers.push_back(1.9439*1024);

	  Numbers.push_back(0.40944*1024);

	  Numbers.push_back(17.0033382*1024);

	  Numbers.push_back(8069.66925);

	  Numbers.push_back(0.98763*1024);

	  // Sum the individual members.
	  float Sum;
	  Sum = AddSize(work->Items.begin(), work->Items.end());
	  cout << Sum << "GB" <<endl;
	  //Sum = AddIt(Numbers.end(), Numbers.begin());
	  cout << Sum/1024 <<"TB" << endl;
	  /*****************************************************************************
	  Sum = AddIt(Numbers.begin(), Numbers.end());
	  cout << Sum << "GB" <<endl;
	  //Sum = AddIt(Numbers.end(), Numbers.begin());
	  cout << Sum/1024 <<"TB" << endl;

	  // Sum a range.
	  vector<float>::iterator Iter = Numbers.begin();
	  Iter += 3;
	  Sum = AddIt(Iter, Numbers.end());
	  cout << Sum << endl;
	  unordered_map<const char*, int,
	    hash<const char*>, eqstr> Colors;
	  Colors["Blue"] = 1;
	  Colors["Green"] = 2;
	  Colors["Teal"] = 3;
	  Colors["Brick"] = 4;
	  Colors["Purple"] = 5;
	  Colors["Brown"] = 6;
	  Colors["LightGray"] = 7;
	  cout << "Brown = " << Colors["Brown"] << endl;
	  cout << "Brick = " << Colors["Brick"] << endl;
	  // This key isn't in the hash map, so it returns a
	  // value of 0.
	  cout << "Red = " << Colors["Red"] << endl;
	  hash<const char*> MyHash;
	  cout << "The hash of \"Hello World\" is:" << endl;
	  cout << MyHash("Hello World") << endl;
	  cout << "while the hash of \"Goodbye Cruel World\" is:"
	    << endl;
	  cout << MyHash("Goodbye Cruel World") << endl;

	  vector<string> Words;
	  Words.push_back("Blue");
	  Words.push_back("Green");
	  Words.push_back("Teal");
	  Words.push_back("Brick");
	  Words.push_back("Purple");
	  Words.push_back("Brown");
	  Words.push_back("LightGray");

	  vector<string>::iterator Result =
	    find(Words.begin(), Words.end(), "LightGray");
	  if (Result != Words.end())
	  {
	    cout << *Result << " iterator position string length:" <<Result->length() << endl;
	    cout << *Result << " iterator position:" <<Result-Words.begin() << endl;
	    cout << "The word before the matched position:" << *(--Result) << endl;

	  }
	  else
	    cout << "Value not found!" << endl;

	  Result = find(Words.begin(), Words.end(), "Black");
	  if (Result != Words.end())
	    cout << *Result << endl;
	  else
	    cout << "Value not found!" << endl;
*****************************************************************************/

	//CHello *app1 = new CHello();
	//date d;
//	tm varTime;
	//cout<<work->wlcm->now<<endl;
	work->wlcm->varTime = *localtime(&(work->wlcm->now));
	work->wlcm->varTime.tm_hour = (localtime(&(work->wlcm->now)))->tm_hour;

	//app1->SetDate()
//	app1->PrintDay();
//	app1->Display();
	//with varTime
	//{
	work->wlcm->SetDate(2022,5,19);// tm_year=2022;
	//app1->varTime.tm_mon=5;
	//app1->varTime.tm_mday=13;
	//app1->varTime.tm_wday=5;
	//app1->varTime.tm_yday=31+28+31+30+13;
	work->wlcm->varTime.tm_zone="US Pacific";
	work->wlcm->PrintDay();
	//app1->SetDate(y , m, d)
	while (work->IndexInput()>=0)
		work->dbInput();
	work->FileOp();
	return 0;
}

