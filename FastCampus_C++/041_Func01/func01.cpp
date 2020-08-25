/*-----------------------------------------------------------------------------
 * Name: 041_Func01
 * DESC: �Լ� ����
 * �Ķ����(�Ű�����), ���ϰ� , return
 * ������ ���� ���(void)
 * �Լ��� ���ǿ� ����(�Լ� ȣ�� ���� �ݵ�� ���ǵǾ� �־�� �Ѵ�)!!
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int Sum(int a, int b) //int a = 10, int b = 100
{
	return a + b; //110
}

void Print(int); // void Print(int num); //���Ǹ�..

int main()
{
	int result = 0;

	result = Sum(10, 100); //int a = 10, int b = 100

	cout << "result:  " << result << endl;

	result = Sum(1000, 2000);
	Print(result); //Print(Sum(1000, 2000));

	return 0;
}

void Print(int num)
{
	cout << "Print:  " << num << endl;
}

/*
	����: ������ ���� ���(void)
	���� ������ ��(int)   �Լ��̸�(Sum)   �Ķ����(int a, int b)
	{
		... //�Լ� ó�� ����
	}

int Sum(int a, int b)
{
	return a + b;
}
*/