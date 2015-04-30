// MySimpleDLL.cpp : Defines the exported functions for the DLL application.
//

//#include "stdafx.h"

#include <stdio.h>

__declspec(dllexport) void say_hello() {
	puts("Hello World");
}