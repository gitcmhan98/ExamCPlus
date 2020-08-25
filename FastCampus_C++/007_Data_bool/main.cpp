#include <iostream>

/*-----------------------------------------------------------------------------
 * Name: Data_bool
 * DESC: Boolean 데이터 타입
 * Boolean 데이터 타입은 참/거짓을 표현하는데 사용되는 데이터 타입
 * 0, 1만 저장할 수 있는 데이터 타입(데이터 그릇)
-----------------------------------------------------------------------------*/

int main()
{
	bool isTemp01 = true;
	bool isTemp02 = false;
	bool isTemp03 = 0;
	bool isTemp04 = 1;
	bool isTemp05 = 123456; //(0을 제외한 모든 수는 참)

	char tab = '\t';

	std::cout << "sizeof(bool): " << sizeof(bool) << std::endl;
	std::cout << isTemp01 << tab << isTemp02 << tab << isTemp03 << tab << isTemp04 << tab << isTemp05 << std::endl;

	return 0;
}

/*
//결과
sizeof(bool): 1
1       0       0       1       1
*/

/*
C++에서는 어떤 값도 bool형으로 묵시적 타입 변환이 가능합니다.
bool isTemp05 = 123456; //(0을 제외한 모든 수는 참)
이때 0인 값은 거짓(false)으로, 0이 아닌 값은 참(true)으로 자동 변환됩니다.
*/