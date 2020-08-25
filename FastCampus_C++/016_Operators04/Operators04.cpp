/*-----------------------------------------------------------------------------
 * Name: Operators04 - 비교 연산자(comparison operator)
 * DESC: 연산자(==, !=, >, >=, <. <=) - 비교문에서 사용빈도 높음
 * 연산자: 이항 연산자
 * 결합 방향(associativity): L => R
 * 연산자의 우선순위(operator precedence)
 * https://docs.microsoft.com/ko-kr/cpp/c-language/precedence-and-order-of-evaluation?view=vs-2019
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	int num1 = 10;
	int num2 = 20;

	bool output1 = num1 == num2;
	bool output2 = num1 != num2;
	bool output3 = num1 > num2;
	bool output4 = num1 >= num2;
	bool output5 = num1 < num2;
	bool output6 = num1 <= num2;

	cout << "==연산자 (num1 == num2): " << output1 << endl;
	cout << "!=연산자 (num1 != num2): " << output2 << endl;
	cout << ">연산자 (num1 > num2): " << output3 << endl;
	cout << ">=연산자 (num1 >= num2): " << output4 << endl;
	cout << "<연산자 (num1 < num2): " << output5 << endl;
	cout << "<=연산자 (num1 <= num2): " << output6 << endl;

	return 0;
}