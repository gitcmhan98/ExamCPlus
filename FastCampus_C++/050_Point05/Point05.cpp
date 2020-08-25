/*-----------------------------------------------------------------------------
 * Name: 050_Point05
 * DESC: 이중 포인터: 포인터의 메모리 주소를 저장하는 포인터의 포인터
 * 문법: 자료형** 포인터 이름(식별자); ex:int** pptrNum;
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

void SetData(int**);

int main()
{
	cout << "이중 포인터" << endl;

	int num = 100;
	int* ptrNum = &num; //num의 주소 저장
	int** ptrptrNum = &ptrNum; //ptrNum의 주소 저장 

	cout << "num:  " << num << endl;
	cout << "*ptrNum:  " << *ptrNum << endl;
	cout << "**ptrptrNum:  " << **ptrptrNum << endl;

	//PointWarning: 포인터를 함수에서 초기화 하는 경우 실제 포인터의 값이 사라질 수 있으므로 주의한다.
	{
		int num = 0;
		int* pNum = &num;

		SetData(&pNum);

		cout << *pNum << endl;
	}

	cout << "050_Point05 End" << endl;
}

//PointWarning: 포인터를 함수에서 초기화 하는 경우 실제 포인터의 값이 사라질 수 있으므로 주의한다.
void SetData(int** pNum)
{
	int data = 1000;
	int* temp;

	for (int i = 0; i < 9999999; i++)
	{
		temp = new int;
		*temp = i;
	}

	*pNum = &data; //주의하자!!
}

/*  Result
num:  100
*ptrNum:  100
**ptrptrNum:  100
*/