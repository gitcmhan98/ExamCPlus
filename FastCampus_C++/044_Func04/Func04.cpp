/*-----------------------------------------------------------------------------
 * Name: 044_Func04
 * DESC: 디폴트 파라미터(Default Parameter), 오버로딩
 * 오버로딩: 함수의 이름(식별자)은 동일하지만, 파라미터의 수 혹은 데이터형이 다른 함수
 * 디폴트 파라미터: 함수 정의에서 미리 파라미터의 값을 지정하는 것(단, 오버로딩과 호출의 모호함에 주의)
 * 확장:
 * 1. Call by Reference
 * 2. 함수 포인터
 * 위에 두가지 함수 특성은 포인터를 먼저 배우고 확인하기!!!
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int Sum(int , int);
int Sum(int, int , int);
float Sum(float, float);
float Sum(float, float, float);
double Sum(double, double);
//bool Sum(double, double); //리턴형은 오버로딩과 연관성이 없음..
int Sum(int, int, int, int, int = 10);

//int Sum(int, int, int, int = 10); //오류: int Sum(int, int , int) 오버로딩 함수와 호출에서 모호함
//int Sum(int, int, int, int = 10, int); //오류: 디폴트 파라미터는 뒷부분부터 시작해야 함

int main()
{
	cout << "result:  " << Sum(10, 10) << endl;
	cout << "result:  " << Sum(10, 10, 10) << endl;
	cout << "result:  " << Sum(10.1f, 10.2f) << endl;
	cout << "result:  " << Sum(10.1f, 10.2f, 10.3f) << endl;
	cout << "result:  " << Sum(10.1, 10.2) << endl;

	cout << "result:  " << Sum(10, 10, 10, 10, 10000) << endl; //디폴트 파라미터에 값이 있는 경우라도 호출시에 인자가 전달되면 그 값을 사용
	cout << "result:  " << Sum(10, 10, 10, 10) << endl;

	return 0;
}

int Sum(int a, int b)
{
	return a + b;
}
int Sum(int a, int b, int c)
{
	return a + b + c;
}
float Sum(float a , float b)
{
	return a + b;
}
float Sum(float a, float b, float c)
{
	return a + b + c;
}
double Sum(double a, double b)
{
	return a + b;
}

int Sum(int a, int b, int c, int d, int e)
{
	return a + b + c + d + e;
}