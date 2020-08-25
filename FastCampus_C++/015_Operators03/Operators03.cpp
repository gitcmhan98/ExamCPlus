/*-----------------------------------------------------------------------------
 * Name: Operators03 - 증감 연산자(increment and decrement operator)
 * DESC: 연산자(++, --) - 전치연산, 후치연산
 * 연산자: 단항 연산자
 * 결합 방향(associativity):(자기 자신을 변경하는 것이므로 다른 피연산자와 연산하지 않음)
 * 연산자의 우선순위(operator precedence)
 * https://docs.microsoft.com/ko-kr/cpp/c-language/precedence-and-order-of-evaluation?view=vs-2019
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	int num1 = 10;
	int num2 = 10;
	int num3 = 10;
	int num4 = 10;
	int num5 = 10;
	
	int output1 = ++num1 + 10;
	int output2 = num2++ + 10; //num2 + 10 = 20
	int output3 = --num3 + 10;
	int output4 = num4-- + 10;
	int output5 = num5-- + 10 + --num5; 
	// (num5-- + 10) + --num5 = 20 + --num5 (아직 num5--연산 전)
	//⇒ 20 + --num5( 이후 num5-- 처리: num5는 9)
	//⇒⇒ (--연산이 우선 진행( --num5 처리: num5는 8)
	//⇒⇒⇒ 20 + 8 = 28

	cout << "++연산자 (++num1 + 10): " << output1 << ", num1: " << num1 << endl;
	cout << "++연산자 (num2++ + 10): " << output2 << ", num2: " << num2 << endl;
	cout << "++연산자 (--num3 + 10): " << output3 << ", num3: " << num3 << endl;
	cout << "++연산자 (num4-- + 10): " << output4 << ", num4: " << num4 << endl;
	cout << "--연산자 (num5-- + 10 + --num5): " << output5 << ", num5: " << num5 << endl;

	return 0;
}