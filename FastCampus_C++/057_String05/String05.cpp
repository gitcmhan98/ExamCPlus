/*-----------------------------------------------------------------------------
 * Name: 057_String05
 * DESC: 동적 할당 문자열
-----------------------------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS //#pragma warning(disable : 4996)
#include <iostream>

using namespace std;

int main()
{
	cout << "동적 할당 문자열" << endl;

	char* ptrName;
	ptrName = new char[12]; //char arrStr[12];

	strcpy(ptrName, "Hello World");

	cout << ptrName << endl;

	delete[] ptrName;
}

/*  Result
동적 할당 문자열
Hello World
*/
