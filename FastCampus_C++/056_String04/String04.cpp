/*-----------------------------------------------------------------------------
 * Name: 056_String04
 * DESC: ���� �Ҵ�
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	cout << "���� �Ҵ�" << endl;
	int* pNum = nullptr;

	pNum = new int[10];  //int arrNum[10];

	for (size_t i = 0; i < 10; i++)
	{
		pNum[i] = i;
		cout << "pNum[" << i << "]: " << pNum[i] << endl;
	}

	delete[] pNum; //����..[]
	pNum = nullptr;

	if (pNum == nullptr)
	{
		cout << "pNum Clear" << endl;
	}
	else
	{
		//��� �� �������� ������ ��� �޸𸮿� ���� �ְԵȴ�.
		cout << "pNum[" << 0 << "]: " << pNum[0] << endl;
	}
}

/*  Result

*/
