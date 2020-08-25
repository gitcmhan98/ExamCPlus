/*-----------------------------------------------------------------------------
 * Name: Operators9
 * DESC: 연사자를 이용하는 간단한 프로그램을 작성(단, 예외처리는 제외)
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	int inputNum1 = 0;
	int inputNum2 = 0;
	int total = 0;

	cout << "정수를 입력하세요? ";
	cin >> inputNum1;

	cout << "정수를 입력하세요? ";
	cin >> inputNum2;

	total = inputNum1 + inputNum2;
	cout << "total: " << total << endl;

	cout << "(total - inputNum2): " << (total - inputNum2) << endl;
	cout << "(total * inputNum2): " << (total * inputNum2) << endl;
	cout << "(total / (float)inputNum2): " << (total / (float)inputNum2) << endl;
	cout << "(total % inputNum2): " << (total % inputNum2) << endl;

	return 0;
}