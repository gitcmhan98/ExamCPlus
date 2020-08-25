/*-----------------------------------------------------------------------------
 * Name: 053_String01
 * DESC: 문자열 예제
-----------------------------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS //#pragma warning(disable : 4996)

#include <iostream>

using namespace std;

int main()
{
	cout << "C 스타일에 문자열 처리" << endl;
	char str1[] = "Hello World";
	char copyStr[12];
	char copyStr2[12];

	char* ptrString;

	cout << str1 << endl;
	cout << str1[0] << str1[1] << str1[2] << str1[3] << str1[4] << endl;
	cout << str1[6] << str1[7] << str1[8] << str1[9] << str1[10] << endl;

	strcpy(copyStr, str1);
	strncpy(copyStr2, str1, sizeof(str1));

	cout << copyStr << endl;
	cout << copyStr2 << endl;

	ptrString = str1;
	cout << ptrString << endl;
	cout << ptrString[0] << ptrString[1] << ptrString[2] << ptrString[3] << ptrString[4] << endl;
	cout << *(ptrString + 6) << *(ptrString + 7) << *(ptrString + 8) << *(ptrString + 9) << *(ptrString + 10) << endl;
}

/*  Result
C 스타일에 문자열 처리
Hello World
Hello
World
Hello World
Hello World
Hello World
Hello
World
*/
