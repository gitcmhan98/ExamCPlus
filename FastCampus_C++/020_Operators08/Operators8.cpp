/*-----------------------------------------------------------------------------
 * Name: Operators8 - sizeof, typeid 
 * DESC:
 * sizeof: �޸��� ũ�⸦ Ȯ�� - sizeof()
 * typeid: Ÿ�������� Ȯ�� - typeid()
 * typeid�� ���Ŀ� Ŭ�������� Ŭ���� Ÿ���� üũ�Ҷ� �����ϰ� Ȱ��
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	{
		int num1 = 100;

		cout << " num1 sizeof: " << sizeof(num1) << "Byte" << endl;
		cout << " char sizeof: " << sizeof(char) << "Byte" << endl;
		cout << " int sizeof: " << sizeof(int) << "Byte" << endl;
		cout << " long sizeof: " << sizeof(long) << "Byte" << endl;
		cout << " long long sizeof: " << sizeof(long long) << "Byte" << endl;
		cout << " double sizeof: " << sizeof(double) << "Byte" << endl;
	}

	{
		int num1 = 100;

		cout << "num1 typeid name: " << typeid(num1).name() << endl;			// name() �� �Ϲ����� ����� ���� ��Ī�� char* 
		cout << "num1 typeid raw_name: " << typeid(num1).raw_name() << endl;	//raw_name() �� �����Ϸ��� ����ϴ� ID�� char*

		cout << "char typeid name: " << typeid(char).name() << endl;			// name() �� �Ϲ����� ����� ���� ��Ī�� char* 
		cout << "char typeid raw_name: " << typeid(char).raw_name() << endl;	//raw_name() �� �����Ϸ��� ����ϴ� ID�� char*
		cout << "int typeid name: " << typeid(int).name() << endl;				// name() �� �Ϲ����� ����� ���� ��Ī�� char* 
		cout << "int typeid raw_name: " << typeid(int).raw_name() << endl;		//raw_name() �� �����Ϸ��� ����ϴ� ID�� char*
		cout << "long typeid name: " << typeid(long).name() << endl;			// name() �� �Ϲ����� ����� ���� ��Ī�� char* 
		cout << "long typeid raw_name: " << typeid(long).raw_name() << endl;	//raw_name() �� �����Ϸ��� ����ϴ� ID�� char*
		cout << "long long typeid name: " << typeid(long long).name() << endl;			// name() �� �Ϲ����� ����� ���� ��Ī�� char* 
		cout << "long long typeid raw_name: " << typeid(long long).raw_name() << endl;	//raw_name() �� �����Ϸ��� ����ϴ� ID�� char*
		cout << "double typeid name: " << typeid(double).name() << endl;			// name() �� �Ϲ����� ����� ���� ��Ī�� char* 
		cout << "double typeid raw_name: " << typeid(double).raw_name() << endl;	//raw_name() �� �����Ϸ��� ����ϴ� ID�� char*
	}
}