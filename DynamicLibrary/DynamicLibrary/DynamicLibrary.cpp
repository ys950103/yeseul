// DynamicLibrary.cpp : DLL ���� ���α׷��� ���� ������ �Լ��� �����մϴ�.
//

#include "stdafx.h"
#include "DynamicLibrary.h"
#include "stdio.h"

__declspec(dllexport) void FunctionInDll()
{
	printf("Hello. I'm from DynamicLibrary.dll.\n");
}


