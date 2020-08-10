#pragma once
#include "cpplibrary_global.h"

#define FILEWRITER_LIBRARY_MACRO_HERE          CPPLIBRARY_EXPORT

#ifndef _FILEWRITER_H_
#define _FILEWRITER_H_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus
void  FILEWRITER_LIBRARY_MACRO_HERE FileWrite(const char status[], int i = 0000);
#ifdef __cplusplus
}
#endif

#endif // !_FILEWRITER_H_