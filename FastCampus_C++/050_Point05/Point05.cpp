/*-----------------------------------------------------------------------------
 * Name: 050_Point05
 * DESC: ���� ������: �������� �޸� �ּҸ� �����ϴ� �������� ������
 * ����: �ڷ���** ������ �̸�(�ĺ���); ex:int** pptrNum;
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

void SetData(int**);

int main()
{
	cout << "���� ������" << endl;

	int num = 100;
	int* ptrNum = &num; //num�� �ּ� ����
	int** ptrptrNum = &ptrNum; //ptrNum�� �ּ� ���� 

	cout << "num:  " << num << endl;
	cout << "*ptrNum:  " << *ptrNum << endl;
	cout << "**ptrptrNum:  " << **ptrptrNum << endl;

	//PointWarning: �����͸� �Լ����� �ʱ�ȭ �ϴ� ��� ���� �������� ���� ����� �� �����Ƿ� �����Ѵ�.
	{
		int num = 0;
		int* pNum = &num;

		SetData(&pNum);

		cout << *pNum << endl;
	}

	cout << "050_Point05 End" << endl;
}

//PointWarning: �����͸� �Լ����� �ʱ�ȭ �ϴ� ��� ���� �������� ���� ����� �� �����Ƿ� �����Ѵ�.
void SetData(int** pNum)
{
	int data = 1000;
	int* temp;

	for (int i = 0; i < 9999999; i++)
	{
		temp = new int;
		*temp = i;
	}

	*pNum = &data; //��������!!
}

/*  Result
num:  100
*ptrNum:  100
**ptrptrNum:  100
*/