/*
 * CDbSpaceUsage.h
 *
 *  Created on: May 25, 2022
 *      Author: jiyang.luo
 */
#ifndef CDBSPACEUSAGE_H_
#define CDBSPACEUSAGE_H_
#include "CHello.h"
#include <iostream>
//#include <fstream>
#include "stdio.h"
#include "time.h"
#include <stdlib.h>
#include <io.h>
#include <unordered_map>

namespace MyCppApp {

class CDbSpaceUsage {
public:
	CHello* wlcm;
	db entry;
	vector<db> Items;
	int ItemIndex;
	ofstream outfile;//("../MyFile.txt");
	ifstream infile2;//("../MyFile.txt");
	CDbSpaceUsage();
	void fileReadLine();
	void FileOp();
	void FileRead();
	void GetUnit();
	int IndexInput();
	int dbInput();
	virtual ~CDbSpaceUsage();
};

} /* namespace MyCppApp */

#endif /* CDBSPACEUSAGE_H_ */
