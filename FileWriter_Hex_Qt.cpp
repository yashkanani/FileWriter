#include	"FileWriter_Hex_Qt.h"
#include <stdio.h>
#define LEN 256


void FileWrite(QByteArray rawData) {
	unsigned char *firstPtr = (unsigned char*)rawData.data();
	unsigned char  *endPtr = (unsigned char*) rawData.data() + rawData.size();
	
	FILE *fp = NULL;
	/* open the file for writing*/
	fp = fopen("C:/Users/Lenovo Laptop/Desktop/out.txt", "a");
	if (fp == NULL) {
		return;
	}

	while (firstPtr < endPtr) {
		fprintf(fp, "0x%02x\n", *firstPtr);
		firstPtr++;
	}
	fclose(fp);
	return;
}