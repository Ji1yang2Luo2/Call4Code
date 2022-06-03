/*
 * fileLines.c
 *
 *  Created on: Jun 1, 2022
 *      Author: jiyang.luo
 */

#include <stdio.h>
#include <stdlib.h>

void fileReadLine()
//int main(int argc, char *argv)
{
	FILE *fp= fopen("MyFile.txt","r");
	if (fp==NULL)
		exit(EXIT_FAILURE);
	char* line=NULL;
	size_t len=0;
	getline(&line, &len, fp);
	printf("%s", line);
	fclose(fp);
}
