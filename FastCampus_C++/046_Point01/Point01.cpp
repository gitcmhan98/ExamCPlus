/*-----------------------------------------------------------------------------
 * Name: 046_Point01
 * DESC: 포인터 기본 예제
 * 포인트: 주소를 저장하는 변수
 * 포인터: 특정 메모리 영역에 접근할 수 있는 접근자
 * 문법: 자료형* 포인터 이름(식별자); ex:int* ptrNum;
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	cout << "포인터 기초" << endl;

	int num = 100;
	int* pNum = &num;

	cout << "num: " << num << "  &num: " << &num << endl;
	cout << "pNum: " << pNum << "  *pNum: " << *pNum << "  &pNum: " << &pNum << endl;
}

/*  Result
포인터 기초
num: 100  &num: 0086FC94
pNum: 0086FC94  *pNum: 100  &pNum: 0086FC88
*/

/*
- 포인트: 주소를 저장하는 변수
*/