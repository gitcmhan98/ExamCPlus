/*-----------------------------------------------------------------------------
 * Name: Operators02 - ���� ������(assignment operator)
 * DESC: ������(=, +=, -=, *=, /=. %=) A += B =>  A = A + B; 
 * ������: ���� ������
 * ���� ����(associativity): R => L
 * �������� �켱����(operator precedence)
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
	int num6 = 10;

	num1 = num1 + 5;
	num2 += 5; //num2 = num2 + 5;
	num3 -= 5; //num3 = num3 - 5;
	num4 *= 5; //num4 = num4 * 5;
	num5 /= 5; //num5 = num5 / 5;
	num6 %= 5; //num6 = num6 % 5;

	cout << "(num1 = num1 + 5): " << num1 << endl;
	cout << "+= ������ (num2 += 5): " << num2 << endl;
	cout << "-= ������ (num3 -= 5): " << num3 << endl;
	cout << "*= ������ (num4 *= 5): " << num4 << endl;
	cout << "/= ������ (num5 /= 5): " << num5 << endl;
	cout << "/= ������ (num6 %= 5): " << num6 << endl;

	return 0;
}