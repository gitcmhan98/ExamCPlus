/*-----------------------------------------------------------------------------
 * Name: Operators9
 * DESC: �����ڸ� �̿��ϴ� ������ ���α׷��� �ۼ�(��, ����ó���� ����)
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	int inputNum1 = 0;
	int inputNum2 = 0;
	int total = 0;

	cout << "������ �Է��ϼ���? ";
	cin >> inputNum1;

	cout << "������ �Է��ϼ���? ";
	cin >> inputNum2;

	total = inputNum1 + inputNum2;
	cout << "total: " << total << endl;

	cout << "(total - inputNum2): " << (total - inputNum2) << endl;
	cout << "(total * inputNum2): " << (total * inputNum2) << endl;
	cout << "(total / (float)inputNum2): " << (total / (float)inputNum2) << endl;
	cout << "(total % inputNum2): " << (total % inputNum2) << endl;

	return 0;
}