/*
C++에서 제공하는 기본 데이터형에 대한 요약
						┌ short int : -32,768 ~ 32,767 (signed short)
			┌ short int	┼
			│			└ unsigned int: 0 ~ 65,535 (unsigned short)
int(4Byte)	┼
			│			┌ long : -2,147,483,648 ~ 2,147,483,647(signed long, long int)
			└ long int	┼
						└ unsigned long: 0 ~ 4,294,967,295(unsigned long int, unsigned int)


		┌ float(4Byte)	: 1.17549e-38 ~ 3.40282e+38
		┼
		└ doule(8Byte)	: 2.22507e-308 ~ 1.79769e+308


			┌ signed char	: -128 ~ 127 (char와 같은 의미로 사용)
char(1Byte)	┼
			└ unsigned char	: 0 ~ 255

bool
*/

/*-----------------------------------------------------------------------------
 * Name: 003_Data02
 * DESC: int, numeric_limits, INT_MAX, INT_MIN, sizeof
 * numeric_limits을 이용하여 표현 가능한 범위를 확인 가능
-----------------------------------------------------------------------------*/
#include <iostream>

int main()
{
	int num = 0;
	num = 100;
	std::cout << "Num: " << num << std::endl;

	{
		std::cout << "=== int에 대한 세부 정보 보기 ===" << std::endl;

		std::cout << "int size: " << sizeof(int) << std::endl;

		int iMax = std::numeric_limits<int>::max();
		int iMin = std::numeric_limits<int>::min();

		std::cout << "int max : " << iMax << "\t min : " << iMin << std::endl;
		std::cout << "unsigned INT_MAX : " << INT_MAX << "\t INT_MIN : " << INT_MIN << std::endl;
		std::cout << std::endl;
	}

	{
		std::cout << "=== 데이터형에 최대 최소값에 따른 오류 ===" << std::endl;

		int min = INT_MIN - 1;
		int max = INT_MAX + 1;

		std::cout << "min: " << min << "  max: " << max << std::endl;
	}

	return 0;
}