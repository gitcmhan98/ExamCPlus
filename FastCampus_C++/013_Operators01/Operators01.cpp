
/*-----------------------------------------------------------------------------
 * Name: Operators01
 * DESC: 연산자의 산술 연산자(+, -, *, /, %), 가장 사용빈도가 높은 연산자
 * 연산자: 이항 연산자
 * 결합 방향(associativity): L => R 
 * 연산자의 우선순위(operator precedence)
 * https://docs.microsoft.com/ko-kr/cpp/c-language/precedence-and-order-of-evaluation?view=vs-2019
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	{
		int num1 = 200;
		int num2 = 30;

		cout << "num1: " << num1 << endl;
		cout << "num2: " << num2 << endl;

		cout << "+ 연산자(num1 + num2):  " << num1 + num2 << endl;
		cout << "- 연산자(num1 - num2):  " << num1 - num2 << endl;
		cout << "* 연산자(num1 * num2):  " << num1 * num2 << endl;
		cout << "/ 연산자(num1 / num2):  " << num1 / num2 << endl;
		cout << "% 연산자(num1 % num2):  " << num1 % num2 << endl;
	}

	{
		int a = 3 + 4 / 2;          // 3+(4/2)	result: 5
		int b = (4 + 4) / 2;        // (4+4)/2	result: 4

		int c = 2 + 3 / 2 * 6;        // 2+((3/2)*6)     result: 8
		int d = 2 * (2 + 6) / 9;      // (2*(2+6))/9     result: 1

		int g = 5 - 5 % 1;          // 5 % 1 = 0  5- 0 = 5
		int h = 5 - (5 % 1);        // 5 % 1 = 0  5 - 0 = 5
		int i = 5 - 5 / 1 % 5;      // 5 / 1 = 5  5 % 5 = 0  5 - 0 = 5
		int l = 5 - (5 / 1) % 5;    // 5 / 1 = 5  5 % 5 = 0  5 - 0 = 5
		int m = 5 - (5 / (1 % 3));  // 1 % 3 = 1  5 / 1 = 5  5 - 5 = 0

		cout << "(a = 3 + 4 / 2):  " << a << endl;
		cout << "(b = (4 + 4) / 2):  " << b << endl;

		cout << "2 + 3 / 2 * 6:  " << c << endl;
		cout << "2 * (2 + 6) / 9:  " << d << endl;

		cout << "5 - 5 % 1:  " << g << endl;
		cout << "(5 % 1):  " << h << endl;
		cout << "5 / 1 % 5:  " << i << endl;
		cout << "(5 / 1) % 5:  " << l << endl;
		cout << "(5 / (1 % 3)):  " << m << endl;
	}

	return 0;
}