/*
C++���� �����ϴ� �⺻ ���������� ���� ���
						�� short int : -32,768 ~ 32,767 (signed short)
			�� short int	��
			��			�� unsigned int: 0 ~ 65,535 (unsigned short)
int(4Byte)	��
			��			�� long : -2,147,483,648 ~ 2,147,483,647(signed long, long int)
			�� long int	��
						�� unsigned long: 0 ~ 4,294,967,295(unsigned long int, unsigned int)


		�� float(4Byte)	: 1.17549e-38 ~ 3.40282e+38
		��
		�� doule(8Byte)	: 2.22507e-308 ~ 1.79769e+308


			�� signed char	: -128 ~ 127 (char�� ���� �ǹ̷� ���)
char(1Byte)	��
			�� unsigned char	: 0 ~ 255
*/

/*-----------------------------------------------------------------------------
 * Name: 004_Data03
 * DESC: float, double, numeric_limits, FLT_MAX, FLT_MIN
 * numeric_limits�� �̿��Ͽ� ǥ�� ������ ������ Ȯ�� ����
-----------------------------------------------------------------------------*/
#include <iostream>

int main()
{
	float fNum = 0.0f;
	fNum = 100.43f;
	std::cout << "fNum: " << fNum << std::endl;

	{
		std::cout << "=== float�� ���� ���� ���� ���� ===" << std::endl;

		std::cout << "float size: " << sizeof(float) << std::endl;

		float fMax = std::numeric_limits<float>::max();
		float fMin = std::numeric_limits<float>::min();
		std::cout << "float max : " << fMax << "\t min : " << fMin << std::endl;
		std::cout << "float FLT_MAX : " << FLT_MAX << "\t FLT_MIN : " << FLT_MIN << std::endl;
		std::cout << std::endl;
	}

	const double kdNumber = 1234.123456789;

	std::cout << kdNumber << std::endl; //����Ʈ�� 6�ڸ�

	std::cout.precision(5); // 5�ڸ��� ����
	std::cout << kdNumber << std::endl;

	std::cout << std::fixed; //�Ҽ����� ���� ����
	std::cout.precision(9); //�Ҽ��� 9�ڸ���
	std::cout << kdNumber << std::endl;

	return 0;
}