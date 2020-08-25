/*-----------------------------------------------------------------------------
 * Name: Operators7 - ���� ������(Conditional operator)
 * DESC: ������(? :) - ���ǹ��� ��ü ���
 * �ǿ����ڰ� 3���� ��� ���: ���ǹ� ? ���(��) : ���(����)
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	{
		int num1 = 10;
		int num2 = 20;
		int result = 0;

		if (num1 == 10)
			result = 10;
		else
			result = 0;
		cout << result << endl;

		result = (num1 == 10) ? 10 : 0;
		cout << result << endl;
	}

	{
		bool isStudent = true;
		bool isOldman = false;

		float discount = 0.0f;

		discount = (isStudent) ? 0.8f : 0.0f;
		cout << "value: " << 100 * discount << endl;

		isStudent = false;
		isOldman = true;
		discount = (isStudent) ? 0.8f : (isOldman) ? 0.6f : 0.0f;
		cout << "value: " << 100 * discount;
	}
}