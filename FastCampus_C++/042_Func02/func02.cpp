/*-----------------------------------------------------------------------------
 * Name: 042_Func02
 * DESC: �Լ��� ������ ��������
 * ���ϰ� �ִ� ���, ���� ���
 * �Ķ���� �ִ� ���, ���� ���
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

//���ϰ� ���� ���, �Ķ���� ���� ���
void Title();

//���ϰ� �ִ� ���, �Ķ���� ���� ���
int Add();

//���ϰ� ���� ���, �Ķ���� �ִ� ���
void Print(int);

//���ϰ� �ִ� ���, �Ķ���� �ִ� ���
int Sum(int, int);

bool Check(int, int, int);

int main()
{
	int result = 0;

	Title();

	result = Add();
	cout << "result:  " << result << endl;

	Print(2000);

	for(int i = 0; i < 10; i++)
	{
		result += Sum(i, i + 1);
	}
	cout << "result:  " << result << endl;

	bool isCheck = Check(10, 10, 10);
	cout << "isCheck: " << isCheck << endl;

	return 0;
}

//���ϰ� ���� ���, �Ķ���� ���� ���
void Title()
{
	cout << "�Լ��� ������ ��������" << endl;
	cout << "���ϰ� ���� ���, �Ķ���� ���� ���" << endl;
}

//���ϰ� �ִ� ���, �Ķ���� ���� ���
int Add()
{
	cout << "���ϰ� �ִ� ���, �Ķ���� ���� ���" << endl;
	return 0;
}

//���ϰ� ���� ���, �Ķ���� �ִ� ���
void Print(int a)
{
	cout << "���ϰ� ���� ���, �Ķ���� �ִ� ���" << endl;
	cout << "�Է� ���� �Ķ���ʹ�: " << a << endl;
}

//���ϰ� �ִ� ���, �Ķ���� �ִ� ���
int Sum(int a, int b)
{
	cout << "���ϰ� �ִ� ���, �Ķ���� �ִ� ���" << endl;

	return a + b;
}

bool Check(int a , int b, int c)
{
	cout << "���ϰ� �ִ� ���, �Ķ���� �ִ� ���" << endl;

	if(a == b && b == c) return true;
	else return false;
}
