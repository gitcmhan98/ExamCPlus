/*-----------------------------------------------------------------------------
 * Name: Operators10
 * DESC: �����ڸ� �̿��ϴ� ������ ���α׷��� �ۼ�(��, ����ó���� ����)
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	int nKor = 0;
	int nEng = 0;
	int nMat = 0;
	int nTotal = 0;
	float fAvg = 0;
	float fNum = 3.0f;

	cout << "���� ���� �Է�";
	cin >> nKor;
	cout << "���� ���� �Է�";
	cin >> nEng;
	cout << "���� ���� �Է�";
	cin >> nMat;

	nTotal = nKor + nEng + nMat;
	fAvg = nTotal / fNum;

	cout << "����: " << nTotal << endl;
	cout << "���: " << fAvg << endl;

	return 0;
}