/*-----------------------------------------------------------------------------
 * Name: 057_String05
 * DESC: ���� �Ҵ� ���ڿ�
-----------------------------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS //#pragma warning(disable : 4996)
#include <iostream>

using namespace std;

int main()
{
	cout << "���� �Ҵ� ���ڿ�" << endl;

	char* ptrName;
	ptrName = new char[12]; //char arrStr[12];

	strcpy(ptrName, "Hello World");

	cout << ptrName << endl;

	delete[] ptrName;
}

/*  Result
���� �Ҵ� ���ڿ�
Hello World
*/
