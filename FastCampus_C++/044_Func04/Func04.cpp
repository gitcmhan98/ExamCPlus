/*-----------------------------------------------------------------------------
 * Name: 044_Func04
 * DESC: ����Ʈ �Ķ����(Default Parameter), �����ε�
 * �����ε�: �Լ��� �̸�(�ĺ���)�� ����������, �Ķ������ �� Ȥ�� ���������� �ٸ� �Լ�
 * ����Ʈ �Ķ����: �Լ� ���ǿ��� �̸� �Ķ������ ���� �����ϴ� ��(��, �����ε��� ȣ���� ��ȣ�Կ� ����)
 * Ȯ��:
 * 1. Call by Reference
 * 2. �Լ� ������
 * ���� �ΰ��� �Լ� Ư���� �����͸� ���� ���� Ȯ���ϱ�!!!
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int Sum(int , int);
int Sum(int, int , int);
float Sum(float, float);
float Sum(float, float, float);
double Sum(double, double);
//bool Sum(double, double); //�������� �����ε��� �������� ����..
int Sum(int, int, int, int, int = 10);

//int Sum(int, int, int, int = 10); //����: int Sum(int, int , int) �����ε� �Լ��� ȣ�⿡�� ��ȣ��
//int Sum(int, int, int, int = 10, int); //����: ����Ʈ �Ķ���ʹ� �޺κк��� �����ؾ� ��

int main()
{
	cout << "result:  " << Sum(10, 10) << endl;
	cout << "result:  " << Sum(10, 10, 10) << endl;
	cout << "result:  " << Sum(10.1f, 10.2f) << endl;
	cout << "result:  " << Sum(10.1f, 10.2f, 10.3f) << endl;
	cout << "result:  " << Sum(10.1, 10.2) << endl;

	cout << "result:  " << Sum(10, 10, 10, 10, 10000) << endl; //����Ʈ �Ķ���Ϳ� ���� �ִ� ���� ȣ��ÿ� ���ڰ� ���޵Ǹ� �� ���� ���
	cout << "result:  " << Sum(10, 10, 10, 10) << endl;

	return 0;
}

int Sum(int a, int b)
{
	return a + b;
}
int Sum(int a, int b, int c)
{
	return a + b + c;
}
float Sum(float a , float b)
{
	return a + b;
}
float Sum(float a, float b, float c)
{
	return a + b + c;
}
double Sum(double a, double b)
{
	return a + b;
}

int Sum(int a, int b, int c, int d, int e)
{
	return a + b + c + d + e;
}