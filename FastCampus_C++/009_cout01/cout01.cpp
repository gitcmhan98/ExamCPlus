
/*-----------------------------------------------------------------------------
 * Name: cout01
 * DESC: 가장 기본적인 출력 방법
 * fixed, precision, scientific, defaultfloat, <<
-----------------------------------------------------------------------------*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float fNum01(98.7654f);
	float fNum02 = 0.123456f;

	//기본 표기
	cout << "기본 출력 fNum01: " << fNum01 << endl;
	cout << "기본 출력 fNum02: " << fNum02 << endl;

	//고정 소수점 표기
	cout << fixed;
	cout.precision(4);
	cout << "소수점 표기 4자리 fNum01: " << fNum01 << endl;
	cout << "소수점 표기 4자리 fNum02: " << fNum02 << endl;

	//지수 표기
	cout << scientific;
	cout.precision(8);
	cout << "지수 표기 fNum01: " << fNum01 << endl;
	cout << "지수 표기 fNum02: " << fNum02 << endl;

	//기본 표기
	cout << defaultfloat;
	cout.precision(5);
	cout << "기본 출력 fNum01: " << fNum01 << endl;
	cout << "기본 출력 fNum02: " << fNum02 << endl;

	return 0;
}

