/*
 * CHello.h
 *
 *  Created on: Jul 22, 2021
 *      Author: jiyang.luo
 */

#ifndef CHELLO_H_
#define CHELLO_H_

#include <iostream>
#include <fstream>
#include <unistd.h>
#include <sys/types.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <FileSystem>
#include <io.h>
#include <vector>
#include <algorithm>

//#include <serialrandom.h>
using namespace std;
//#include "thread.h"

namespace MyCppApp {
struct db {
	float size;
	string notes;
};

struct eqstr {
  bool operator()(const char* s1, const char* s2) const
  {
    return strcmp(s1, s2) == 0;
  }
};
template <class RandomAccessIterator>
float AddSize(RandomAccessIterator begin,
            RandomAccessIterator end) {
  float Sum = 0;
  RandomAccessIterator Index;
  // Make sure that the values are in the correct order.
  if (begin > end)
  {
    RandomAccessIterator temp;
    temp = begin;
    begin = end;
    end = temp;
  }
  for (Index = begin; Index != end; Index++)
    Sum += Index->size;
  return Sum;
};
template <class RandomAccessIterator>
float AddIt(RandomAccessIterator begin,
            RandomAccessIterator end) {
  float Sum = 0;
  RandomAccessIterator Index;
  // Make sure that the values are in the correct order.
  if (begin > end)
  {
    RandomAccessIterator temp;
    temp = begin;
    begin = end;
    end = temp;
  }
  for (Index = begin; Index != end; Index++)
    Sum += *Index;
  return Sum;
};

class CHello {
public:
	CHello();
	bool Repeat;
	//char Greeting[]; //= "PID: ";
	std::string Greeting;// = "Hello World!";
	int loopCnt;
	std::string words[10];
	time_t now;
	tm varTime;
	void Display();
	int Display(std::string);
	void DisplayWords();
	void SetDate(int, int, int);
	void PrintDay();
	virtual ~CHello();
};

} /* namespace MyCppApp */

#endif /* CHELLO_H_ */
