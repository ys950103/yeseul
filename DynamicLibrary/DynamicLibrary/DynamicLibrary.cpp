// DynamicLibrary.cpp : DLL 응용 프로그램을 위해 내보낸 함수를 정의합니다.
//

#include "stdafx.h"
#include "DynamicLibrary.h"
#include "stdio.h"

__declspec(dllexport) void FunctionInDll()
{
	printf("Hello. I'm from DynamicLibrary.dll.\n");
}


