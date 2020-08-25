/*-----------------------------------------------------------------------------
 * Name: 055_String03
 * DESC: 문자열 & 포인터 & 함수
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

void PrintString(const char* ptrString)
{
	cout << ptrString << endl;
}

void PrintArrString(const char** ptrString)
{
	cout << "PrintArrString" << endl;
	cout << (ptrString[0]) << endl; //ptrArrStr2[0]
	cout << (ptrString[1]) << endl; //ptrArrStr2[1]
	cout << (ptrString[2]) << endl; //ptrArrStr2[2]

	cout << *(ptrString + 0) << endl;
	cout << *(ptrString + 1) << endl;
	cout << *(ptrString + 2) << endl;
}

int main()
{
	cout << "문자열 & 포인터 & 함수" << endl;
	char arrStr1[][5] = { "aa", "bbb", "cccc" };
	const char* ptrArrStr2[] = { "aa", "bbb", "cccc" };

	//const char** ppa = ptrArrStr2;

	cout << arrStr1[0] << ", " << arrStr1[1] << ", " << arrStr1[2] << endl;
	cout << "sizeof(arrStr1[0]): " << sizeof(arrStr1[0]) << endl;
	cout << "sizeof(arrStr1[1]): " << sizeof(arrStr1[1]) << endl;
	cout << "sizeof(arrStr1[2]): " << sizeof(arrStr1[2]) << endl;

	cout << ptrArrStr2[0] << ", " << ptrArrStr2[1] << ", " << ptrArrStr2[2] << endl;

	cout << "sizeof(ptrArrStr2[0]): " << sizeof("aa") << endl;
	cout << "sizeof(ptrArrStr2[1]): " << sizeof("bbb") << endl;
	cout << "sizeof(ptrArrStr2[2]): " << sizeof("cccc") << endl;

	PrintString(ptrArrStr2[0]);
	PrintString(ptrArrStr2[1]);
	PrintString(ptrArrStr2[2]);

	PrintArrString(ptrArrStr2);
}

/*  Result

*/


/*
문자열 & 포인터 & 함수
					┌─────┬─────┬─────┬─────┬─────┐
arrStr1[0] ==>      │  a  │  a  │  \0 │     │     │
					└─────┴─────┴─────┴─────┴─────┘
					┌─────┬─────┬─────┬─────┬─────┐
arrStr1[1] ==>      │  b  │  b  │  b  │ \0  │     │
					└─────┴─────┴─────┴─────┴─────┘
					┌─────┬─────┬─────┬─────┬─────┐
arrStr1[2] ==>      │  c  │  c  │  c  │  c  │  \0 │
					└─────┴─────┴─────┴─────┴─────┘

//=====================================================
ptrArrStr2
						┌─────┬─────┬─────┐
ptrArrStr2[0] ==>       │  a  │  a  │  \0 │
						└─────┴─────┴─────┘
						┌─────┬─────┬─────┬─────┐
ptrArrStr2[1] ==>       │  b  │  b  │  b  │ \0  │
						└─────┴─────┴─────┴─────┘
						┌─────┬─────┬─────┬─────┬─────┐
ptrArrStr2[2] ==>       │  c  │  c  │  c  │  c  │  \0 │
						└─────┴─────┴─────┴─────┴─────┘

*/