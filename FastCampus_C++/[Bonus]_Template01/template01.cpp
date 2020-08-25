/*-----------------------------------------------------------------------------
 * Name: [Bonus]_Template01 - Template ����
 * DESC: template(��, Ʋ)
 * �Ϲ�ȭ ���α׷� - ���뼺�� ���Ǽ�
 * C++�� STL�� �����ϴ� ��ǥ�� ���� ���
 * �Լ� ���ø�, Ŭ���� ���ø�
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

enum DATA
{
	TYPE_INT,
	TYPE_FLOAT,
};

void Swap(int* a, int* b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}

void Swap(float* fA, float* fB)
{
	float temp = *fB;
	*fB = *fA;
	*fA = temp;
}

//void*�� �Ű������� ����Ͽ� �Ϲ�ȭ �Լ� ����(��, ���� ���ο��� ĳ���� ������ �ؾ���)
void SwapVoid(void* vA, void* vB, DATA dataType)
{
	switch (dataType)
	{
		case TYPE_INT:
		{
			int temp = *(static_cast<int*>(vB));
			*(static_cast<int*>(vB)) = *(static_cast<int*>(vA));
			*(static_cast<int*>(vA)) = temp;
			break;
		}

		case TYPE_FLOAT:
		{
			float fTemp = *(float*)vB;
			*(float*)vB = *(float*)vA;
			*(float*)vA = fTemp;
			break;
		}
	}
}

template<typename T> //template<class T>
void SwapTemplate(T* a, T* b)
{
	T temp = *b;
	*b = *a;
	*a = temp;
}

template<typename T1, class T2>
void Print(T1 a, T2 b)
{
	cout << "type: " << typeid(T1).name() << " a: " << a << endl;
	cout << "type: " << typeid(T2).name() << " b: " << b << endl;
}

int main()
{
	int aa = 10;
	int bb = 90;
	float fAA = 10.0f;
	float fBB = 90.0f;

	cout << "Before " << "aa: " << aa << " bb:" << bb << endl;
	Swap(&aa, &bb);
	cout << "After " << "aa: " << aa << " bb:" << bb << endl;

	cout << fixed;
	cout << "Before " << "fAA: " << fAA << " fBB:" << fBB << endl;
	Swap(&fAA, &fBB);
	cout << "After " << "fAA: " << fAA << " fBB:" << fBB << endl;

	cout << defaultfloat;
	cout << "Before " << "aa: " << aa << " bb:" << bb << endl;
	SwapVoid(&aa, &bb, DATA::TYPE_INT);
	cout << "After " << "aa: " << aa << " bb:" << bb << endl;

	cout << fixed;
	cout << "Before " << "fAA: " << fAA << " fBB:" << fBB << endl;
	SwapVoid(&fAA, &fBB, TYPE_FLOAT);
	cout << "After " << "fAA: " << fAA << " fBB:" << fBB << endl;

	cout << "========== Template ==========" << endl;

	cout << defaultfloat;
	cout << "Before " << "aa: " << aa << " bb:" << bb << endl;
	SwapTemplate(&aa, &bb);  //SwapTemplate<int>(&aa, &bb);

	cout << "After " << "aa: " << aa << " bb:" << bb << endl;

	cout << fixed;
	cout << "Before " << "fAA: " << fAA << " fBB:" << fBB << endl;
	SwapTemplate(&fAA, &fBB);
	cout << "After " << "fAA: " << fAA << " fBB:" << fBB << endl;

	Print(10, 20.9f);
	Print(10, 20.90000);

	return 0;
}

/*  Result
Before aa: 10 bb:90
After aa: 90 bb:10
Before fAA: 10.000000 fBB:90.000000
After fAA: 90.000000 fBB:10.000000
Before aa: 90 bb:10
After aa: 10 bb:90
Before fAA: 90.000000 fBB:10.000000
After fAA: 10.000000 fBB:90.000000
========== Template ==========
Before aa: 10 bb:90
After aa: 90 bb:10
Before fAA: 10.000000 fBB:90.000000
After fAA: 90.000000 fBB:10.000000
type: int a: 10
type: float b: 20.900000
type: int a: 10
type: double b: 20.900000
*/