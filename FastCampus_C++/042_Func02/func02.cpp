/*-----------------------------------------------------------------------------
 * Name: 042_Func02
 * DESC: 함수의 형태의 여러가지
 * 리턴값 있는 경우, 없는 경우
 * 파라미터 있는 경우, 없는 경우
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

//리턴값 없는 경우, 파라미터 없는 경우
void Title();

//리턴값 있는 경우, 파라미터 없는 경우
int Add();

//리턴값 없는 경우, 파라미터 있는 경우
void Print(int);

//리턴값 있는 경우, 파라미터 있는 경우
int Sum(int, int);

bool Check(int, int, int);

int main()
{
	int result = 0;

	Title();

	result = Add();
	cout << "result:  " << result << endl;

	Print(2000);

	for(int i = 0; i < 10; i++)
	{
		result += Sum(i, i + 1);
	}
	cout << "result:  " << result << endl;

	bool isCheck = Check(10, 10, 10);
	cout << "isCheck: " << isCheck << endl;

	return 0;
}

//리턴값 없는 경우, 파라미터 없는 경우
void Title()
{
	cout << "함수의 형태의 여러가지" << endl;
	cout << "리턴값 없는 경우, 파라미터 없는 경우" << endl;
}

//리턴값 있는 경우, 파라미터 없는 경우
int Add()
{
	cout << "리턴값 있는 경우, 파라미터 없는 경우" << endl;
	return 0;
}

//리턴값 없는 경우, 파라미터 있는 경우
void Print(int a)
{
	cout << "리턴값 없는 경우, 파라미터 있는 경우" << endl;
	cout << "입력 받은 파라미터는: " << a << endl;
}

//리턴값 있는 경우, 파라미터 있는 경우
int Sum(int a, int b)
{
	cout << "리턴값 있는 경우, 파라미터 있는 경우" << endl;

	return a + b;
}

bool Check(int a , int b, int c)
{
	cout << "리턴값 있는 경우, 파라미터 있는 경우" << endl;

	if(a == b && b == c) return true;
	else return false;
}
