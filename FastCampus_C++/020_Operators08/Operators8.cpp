/*-----------------------------------------------------------------------------
 * Name: Operators8 - sizeof, typeid 
 * DESC:
 * sizeof: 메모리의 크기를 확인 - sizeof()
 * typeid: 타입정보를 확인 - typeid()
 * typeid는 차후에 클래스에서 클래스 타입을 체크할때 유용하게 활용
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

		cout << "num1 typeid name: " << typeid(num1).name() << endl;			// name() 은 일반적인 사용을 위한 명칭을 char* 
		cout << "num1 typeid raw_name: " << typeid(num1).raw_name() << endl;	//raw_name() 은 컴파일러가 사용하는 ID를 char*

		cout << "char typeid name: " << typeid(char).name() << endl;			// name() 은 일반적인 사용을 위한 명칭을 char* 
		cout << "char typeid raw_name: " << typeid(char).raw_name() << endl;	//raw_name() 은 컴파일러가 사용하는 ID를 char*
		cout << "int typeid name: " << typeid(int).name() << endl;				// name() 은 일반적인 사용을 위한 명칭을 char* 
		cout << "int typeid raw_name: " << typeid(int).raw_name() << endl;		//raw_name() 은 컴파일러가 사용하는 ID를 char*
		cout << "long typeid name: " << typeid(long).name() << endl;			// name() 은 일반적인 사용을 위한 명칭을 char* 
		cout << "long typeid raw_name: " << typeid(long).raw_name() << endl;	//raw_name() 은 컴파일러가 사용하는 ID를 char*
		cout << "long long typeid name: " << typeid(long long).name() << endl;			// name() 은 일반적인 사용을 위한 명칭을 char* 
		cout << "long long typeid raw_name: " << typeid(long long).raw_name() << endl;	//raw_name() 은 컴파일러가 사용하는 ID를 char*
		cout << "double typeid name: " << typeid(double).name() << endl;			// name() 은 일반적인 사용을 위한 명칭을 char* 
		cout << "double typeid raw_name: " << typeid(double).raw_name() << endl;	//raw_name() 은 컴파일러가 사용하는 ID를 char*
	}
}