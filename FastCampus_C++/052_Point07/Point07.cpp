/*-----------------------------------------------------------------------------
 * Name: 052_Point07
 * DESC: nullptr사용 & void 포인터
 * 문법: NULL보다는 nullptr로 구현하기
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

void Print(int num)
{
	cout << "void Print(int num)" << num << endl;
}

void Print(int* ptrNum)
{
	if (nullptr != ptrNum)
	{
		cout << "ptrNum: " << ptrNum << "  *ptrNum: " << *ptrNum  << endl;
	}
	else
	{
		cout << "ptrNum  nullptr: " << ptrNum << endl;
	}
}

int main()
{
	cout << "nullptr사용" << endl;

	int num = 100;
	int* pNum = &num;

	Print(&num);
	Print(pNum);

	Print(NULL); //void Print(int* ptrNum)함수가 Call되는 것이 아님.

	pNum = nullptr;
	Print(pNum);

	cout << "void 포인터" << endl;
	void* ptr;
	float fNum = 0.001f;
	const double DNUM = 10000.0000;

	ptr = &num;
	
	cout << "1. 역참조시 반드시 형변환(캐스팅)후에 처리: *(int*)ptr" << endl;
	cout << "*ptr:  " << *(int*)ptr << endl;  //1. 역참조시 반드시 형변환(캐스팅)후에 처리

	ptr = &fNum;
	cout << "*ptr:  " << *static_cast<float*>(ptr) << endl; //*(float*)ptr

	//ptr++; 2. 포인터 연산 불가
	cout << "2. 포인터 연산 불가: ptr++" << endl;

	//ptr = &DNUM; //3. const는 초기화 불가
	cout << "3. const는 초기화 불가: const double DNUM = 10000.0000;  ptr = &DNUM;" << endl;
}

/*  Result
nullptr사용
ptrNum: 00E1FE38  *ptrNum: 100
ptrNum: 00E1FE38  *ptrNum: 100
void Print(int num)0
ptrNum  nullptr: 00000000
void 포인터
1. 역참조시 반드시 형변환(캐스팅)후에 처리: *(int*)ptr
*ptr:  100
*ptr:  0.001
2. 포인터 연산 불가: ptr++
3. const는 초기화 불가: const double DNUM = 10000.0000;  ptr = &DNUM;
*/

/*
NULL macro
C 언어는 값 0으로 #defined된 NULL 이라는 특수 전처리기 매크로가 있다. 
기술적으로 C++의 일부는 아니지만, 사용법은 모든 C++ 컴파일러에서 작동할 만큼 일반적이다.

void 포인터:
	타입에 제한이 없으므로 유연한 프로그래밍이 가능.
	1. 역참조시 반드시 형변환(캐스팅)후에 처리
	2. 포인터 연산 불가
	3. const는 초기화 불가
*/
