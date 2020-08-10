#include "FilWriter.h"
#include <stdio.h>
#define LEN 256
void  FileWrite(const char status[],int i)
{
	FILE *fp = NULL;
	/* open the file for writing*/
	fp = fopen("C:/fileWrite_debug/text.txt", "a");
	if (fp == NULL) {
		return;
	}
	fprintf(fp, "new line:  %s  %d\n", status, i);

	/* close the file*/
	fclose(fp);
	return;
}