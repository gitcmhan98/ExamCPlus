
/*-----------------------------------------------------------------------------
 * Name: cout01
 * DESC: ���� �⺻���� ��� ���
 * fixed, precision, scientific, defaultfloat, <<
-----------------------------------------------------------------------------*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float fNum01(98.7654f);
	float fNum02 = 0.123456f;

	//�⺻ ǥ��
	cout << "�⺻ ��� fNum01: " << fNum01 << endl;
	cout << "�⺻ ��� fNum02: " << fNum02 << endl;

	//���� �Ҽ��� ǥ��
	cout << fixed;
	cout.precision(4);
	cout << "�Ҽ��� ǥ�� 4�ڸ� fNum01: " << fNum01 << endl;
	cout << "�Ҽ��� ǥ�� 4�ڸ� fNum02: " << fNum02 << endl;

	//���� ǥ��
	cout << scientific;
	cout.precision(8);
	cout << "���� ǥ�� fNum01: " << fNum01 << endl;
	cout << "���� ǥ�� fNum02: " << fNum02 << endl;

	//�⺻ ǥ��
	cout << defaultfloat;
	cout.precision(5);
	cout << "�⺻ ��� fNum01: " << fNum01 << endl;
	cout << "�⺻ ��� fNum02: " << fNum02 << endl;

	return 0;
}

