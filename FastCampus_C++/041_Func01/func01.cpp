/*-----------------------------------------------------------------------------
 * Name: 041_Func01
 * DESC: 함수 기초
 * 파라미터(매개변수), 리턴값 , return
 * 리턴이 없는 경우(void)
 * 함수의 정의에 주의(함수 호출 전에 반드시 정의되어 있어야 한다)!!
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int Sum(int a, int b) //int a = 10, int b = 100
{
	return a + b; //110
}

void Print(int); // void Print(int num); //정의만..

int main()
{
	int result = 0;

	result = Sum(10, 100); //int a = 10, int b = 100

	cout << "result:  " << result << endl;

	result = Sum(1000, 2000);
	Print(result); //Print(Sum(1000, 2000));

	return 0;
}

void Print(int num)
{
	cout << "Print:  " << num << endl;
}

/*
	문법: 리턴이 없는 경우(void)
	리턴 데이터 형(int)   함수이름(Sum)   파라미터(int a, int b)
	{
		... //함수 처리 내용
	}

int Sum(int a, int b)
{
	return a + b;
}
*/