#include "FilWriter.h"
#include <stdio.h>
#define LEN 256
void  FileWrite(const unsigned char status[],int i)
{
	FILE *fp = NULL;
	/* open the file for writing*/
	fp = fopen("C:/Users/Lenovo Laptop/Desktop/out.txt", "a");
	if (fp == NULL) {
		return;
	}
	fprintf(fp, "new line:  0x%02x\n", *status, i);

	/* close the file*/
	fclose(fp);
	return;
}

