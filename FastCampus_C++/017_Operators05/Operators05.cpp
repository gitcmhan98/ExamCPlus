/*-----------------------------------------------------------------------------
 * Name: Operators5 - 논리 연산자(logical operator)
 * DESC: 연산자(&&, ||, !) - 비교 연산자와 결합해서 사용
 * 연산자: 이항 연산자
 * 결합 방향(associativity): L => R  *(단, NOT연산자(!)는 단항 연산자, 오르쪽에서 왼쪽)
 * 연산자의 우선순위(operator precedence) 
 * https://docs.microsoft.com/ko-kr/cpp/c-language/precedence-and-order-of-evaluation?view=vs-2019
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	int num1 = 10;
	int num2 = 20;

	bool output1 = (num1 == 10) && (num2 == 20);
	bool output2 = (num1 != 10) && (num2 == 20);
	bool output3 = (num1 == 10) && (num2 != 20);
	bool output4 = (num1 != 10) && (num2 != 20);

	bool output5 = (num1 == 10) || (num2 == 20);
	bool output6 = (num1 != 10) || (num2 == 20);
	bool output7 = (num1 == 10) || (num2 != 20);
	bool output8 = (num1 != 10) || (num2 != 20);

	cout << "!연산자 ((num1 == 10): " << (num1 == 10) << endl;
	cout << "!연산자 !(num1 == 10): " << !(num1 == 10) << endl;

	cout << "&&연산자 (num1 == 10) && (num2 == 20): " << output1 << endl;
	cout << "&&연산자 (num1 != 10) && (num2 == 20): " << output2 << endl;
	cout << "&&연산자 (num1 == 10) && (num2 != 20): " << output3 << endl;
	cout << "&&연산자 (num1 != 10) && (num2 != 20): " << output4 << endl;

	cout << "||연산자 (num1 == 10) || (num2 == 20): " << output5 << endl;
	cout << "||연산자 (num1 != 10) || (num2 == 20): " << output6 << endl;
	cout << "||연산자 (num1 == 10) || (num2 != 20): " << output7 << endl;
	cout << "||연산자 (num1 != 10) || (num2 != 20): " << output8 << endl;

	return 0;
}

//┌──────┬───────┬──────────┬───────────┬───────┐
//│  A   │   B   │	A && B	│	A || B	│	!A	│
//├──────┼───────┼──────────┼───────────┼───────┤
//│  1   │   1   │	  1		│	   1	│	0	│
//│  0   │   1   │	  0		│	   1	│	1	│
//│  1   │   0   │	  0		│	   1	│	0	│
//│  0   │   0   │	  0		│	   0 	│	1	│
//└──────┴───────┴──────────┴───────────┴───────┘