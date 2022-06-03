/*
 * CHello.cpp
 *
 *  Created on: Jul 22, 2021
 *      Author: jiyang.luo
*/
#include "CHello.h"
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
namespace MyCppApp {


CHello::CHello() {
	Greeting = "How do you do?";

	loopCnt=10;
	words[0]="How";
	words[1]="do";
	words[2]="you";
	words[3]="do";
	words[4]="?";
	words[5]="Answer";
	words[6]="How";
	words[7]="do";
	words[8]="you";
	words[9]="do?";
	//	if (mkdir("..\abc")!=0)
//		cout <<"Directory not created."<<endl;
//	else
//		cout <<"Directory created."<<endl;
}

void CHello::Display()
{
	//printf("My Greeting");
	cout << Greeting << '\n';
}

int CHello::Display(std::string gre)
{
	printf("My Greeting:%s", gre.c_str());
	//cout<<gre<<'\n';
	return 0;
//	printf(gre);
}
void CHello::DisplayWords()
{

	int i;
	for (i=0; i < loopCnt; i++)
		cout<< words[i]<<' ';
	cout << this->words[0]<<'\n';//<<loopCnt
	this->Display();
	return;
}
void CHello::SetDate(int y, int m, int d)
{
	varTime.tm_year=y;
	varTime.tm_mon=m;
	varTime.tm_mday=d;
	varTime.tm_yday=31+28+31+30+d;
	varTime.tm_wday=(varTime.tm_yday+5)%7;//1/1/2022 is Satuarday
}

void CHello::PrintDay()
{
	cout << "\nDay print\n";
	cout << "Day in week:"<<varTime.tm_wday<<" Date:"<<varTime.tm_mday<<" "<<"May"<<" "<<varTime.tm_year<<'\n';
	cout<< "Day of year: "<<varTime.tm_yday<<'\n';
	cout << "Time Zone: " << varTime.tm_zone <<'\n';
}

CHello::~CHello() {
	// TODO Auto-generated destructor stub
}
} /* namespace MyCppApp */
