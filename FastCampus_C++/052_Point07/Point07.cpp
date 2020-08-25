/*-----------------------------------------------------------------------------
 * Name: 052_Point07
 * DESC: nullptr��� & void ������
 * ����: NULL���ٴ� nullptr�� �����ϱ�
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

void Print(int num)
{
	cout << "void Print(int num)" << num << endl;
}

void Print(int* ptrNum)
{
	if (nullptr != ptrNum)
	{
		cout << "ptrNum: " << ptrNum << "  *ptrNum: " << *ptrNum  << endl;
	}
	else
	{
		cout << "ptrNum  nullptr: " << ptrNum << endl;
	}
}

int main()
{
	cout << "nullptr���" << endl;

	int num = 100;
	int* pNum = &num;

	Print(&num);
	Print(pNum);

	Print(NULL); //void Print(int* ptrNum)�Լ��� Call�Ǵ� ���� �ƴ�.

	pNum = nullptr;
	Print(pNum);

	cout << "void ������" << endl;
	void* ptr;
	float fNum = 0.001f;
	const double DNUM = 10000.0000;

	ptr = &num;
	
	cout << "1. �������� �ݵ�� ����ȯ(ĳ����)�Ŀ� ó��: *(int*)ptr" << endl;
	cout << "*ptr:  " << *(int*)ptr << endl;  //1. �������� �ݵ�� ����ȯ(ĳ����)�Ŀ� ó��

	ptr = &fNum;
	cout << "*ptr:  " << *static_cast<float*>(ptr) << endl; //*(float*)ptr

	//ptr++; 2. ������ ���� �Ұ�
	cout << "2. ������ ���� �Ұ�: ptr++" << endl;

	//ptr = &DNUM; //3. const�� �ʱ�ȭ �Ұ�
	cout << "3. const�� �ʱ�ȭ �Ұ�: const double DNUM = 10000.0000;  ptr = &DNUM;" << endl;
}

/*  Result
nullptr���
ptrNum: 00E1FE38  *ptrNum: 100
ptrNum: 00E1FE38  *ptrNum: 100
void Print(int num)0
ptrNum  nullptr: 00000000
void ������
1. �������� �ݵ�� ����ȯ(ĳ����)�Ŀ� ó��: *(int*)ptr
*ptr:  100
*ptr:  0.001
2. ������ ���� �Ұ�: ptr++
3. const�� �ʱ�ȭ �Ұ�: const double DNUM = 10000.0000;  ptr = &DNUM;
*/

/*
NULL macro
C ���� �� 0���� #defined�� NULL �̶�� Ư�� ��ó���� ��ũ�ΰ� �ִ�. 
��������� C++�� �Ϻδ� �ƴ�����, ������ ��� C++ �����Ϸ����� �۵��� ��ŭ �Ϲ����̴�.

void ������:
	Ÿ�Կ� ������ �����Ƿ� ������ ���α׷����� ����.
	1. �������� �ݵ�� ����ȯ(ĳ����)�Ŀ� ó��
	2. ������ ���� �Ұ�
	3. const�� �ʱ�ȭ �Ұ�
*/
