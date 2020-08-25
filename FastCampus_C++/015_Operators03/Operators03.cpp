/*-----------------------------------------------------------------------------
 * Name: Operators03 - ���� ������(increment and decrement operator)
 * DESC: ������(++, --) - ��ġ����, ��ġ����
 * ������: ���� ������
 * ���� ����(associativity):(�ڱ� �ڽ��� �����ϴ� ���̹Ƿ� �ٸ� �ǿ����ڿ� �������� ����)
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
	
	int output1 = ++num1 + 10;
	int output2 = num2++ + 10; //num2 + 10 = 20
	int output3 = --num3 + 10;
	int output4 = num4-- + 10;
	int output5 = num5-- + 10 + --num5; 
	// (num5-- + 10) + --num5 = 20 + --num5 (���� num5--���� ��)
	//�� 20 + --num5( ���� num5-- ó��: num5�� 9)
	//���� (--������ �켱 ����( --num5 ó��: num5�� 8)
	//������ 20 + 8 = 28

	cout << "++������ (++num1 + 10): " << output1 << ", num1: " << num1 << endl;
	cout << "++������ (num2++ + 10): " << output2 << ", num2: " << num2 << endl;
	cout << "++������ (--num3 + 10): " << output3 << ", num3: " << num3 << endl;
	cout << "++������ (num4-- + 10): " << output4 << ", num4: " << num4 << endl;
	cout << "--������ (num5-- + 10 + --num5): " << output5 << ", num5: " << num5 << endl;

	return 0;
}