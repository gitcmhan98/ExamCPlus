/*
C++에서 제공하는 기본 데이터형에 대한 요약
						┌ short int : -32,768 ~ 32,767 (signed short, __int16)
			┌ short int	┼
			│			└ unsigned int: 0 ~ 65,535 (unsigned short)
int(4Byte)	┼
			│			┌ long : -2,147,483,648 ~ 2,147,483,647(signed long, long int, __int32)
			└ long int	┼
						└ unsigned long: 0 ~ 4,294,967,295(unsigned long int, unsigned int)

			└ long long	 __int64


		┌ float(4Byte)	: 1.17549e-38 ~ 3.40282e+38
		┼
		└ doule(8Byte)	: 2.22507e-308 ~ 1.79769e+308


			┌ signed char	: -128 ~ 127 (char와 같은 의미로 사용)
char(1Byte)	┼
			└ unsigned char	: 0 ~ 255

bool
*/

/*-----------------------------------------------------------------------------
 * Name: 006_Data05
 * DESC: long long, numeric_limits, LLONG_MAX, LLONG_MIN
 * numeric_limits을 이용하여 표현 가능한 범위를 확인 가능
-----------------------------------------------------------------------------*/
#include <iostream>

int main()
{
	long long num = 0; //__int64 llNum2;
	num = 100;
	std::cout << "Num: " << num << std::endl;

	{
		std::cout << "=== long long에 대한 세부 정보 보기 ===" << std::endl;

		std::cout << "long long size: " << sizeof(long long) << std::endl;

		long long iMax = std::numeric_limits<long long>::max();
		long long iMin = std::numeric_limits<long long>::min();
		std::cout << "long long max : " << iMax << "\t min : " << iMin << std::endl;
		std::cout << "long long LLONG_MAX : " << LLONG_MAX << "\t LLONG_MIN : " << LLONG_MIN << std::endl;
		std::cout << std::endl;
	}

	{
		std::cout << "=== 데이터형에 최대 최소값에 따른 오류 ===" << std::endl;

		long long min = LLONG_MIN - 1;
		long long max = LLONG_MAX + 1;

		std::cout << "min: " << min << "  max: " << max << std::endl;
	}

	return 0;
}

/*
Num: 100
=== long long에 대한 세부 정보 보기 ===
long long size: 8
long long max : 9223372036854775807      min : -9223372036854775808
long long LLONG_MAX : 9223372036854775807        LLONG_MIN : -9223372036854775808

=== 데이터형에 최대 최소값에 따른 오류 ===
min: 9223372036854775807  max: -9223372036854775808
*/