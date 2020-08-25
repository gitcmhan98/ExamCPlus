/*-----------------------------------------------------------------------------
 * Name: 056_String04
 * DESC: 동적 할당
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	cout << "동적 할당" << endl;
	int* pNum = nullptr;

	pNum = new int[10];  //int arrNum[10];

	for (size_t i = 0; i < 10; i++)
	{
		pNum[i] = i;
		cout << "pNum[" << i << "]: " << pNum[i] << endl;
	}

	delete[] pNum; //해제..[]
	pNum = nullptr;

	if (pNum == nullptr)
	{
		cout << "pNum Clear" << endl;
	}
	else
	{
		//사용 후 삭제하지 않으면 계속 메모리에 남아 있게된다.
		cout << "pNum[" << 0 << "]: " << pNum[0] << endl;
	}
}

/*  Result

*/
