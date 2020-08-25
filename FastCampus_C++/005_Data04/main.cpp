/*
C++¿¡¼­ Á¦°øÇÏ´Â ±âº» µ¥ÀÌÅÍÇü¿¡ ´ëÇÑ ¿ä¾à
						¦£ short int : -32,768 ~ 32,767 (signed short)
			¦£ short int	¦«
			¦¢			¦¦ unsigned int: 0 ~ 65,535 (unsigned short)
int(4Byte)	¦«
			¦¢			¦£ long : -2,147,483,648 ~ 2,147,483,647(signed long, long int)
			¦¦ long int	¦«
						¦¦ unsigned long: 0 ~ 4,294,967,295(unsigned long int, unsigned int)


		¦£ float(4Byte)	: 1.17549e-38 ~ 3.40282e+38
		¦«
		¦¦ doule(8Byte)	: 2.22507e-308 ~ 1.79769e+308


			¦£ signed char	: -128 ~ 127 (char¿Í °°Àº ÀÇ¹Ì·Î »ç¿ë)
char(1Byte)	¦«
			¦¦ unsigned char	: 0 ~ 255
*/

/*-----------------------------------------------------------------------------
 * Name: 005_Data04
 * DESC: char, numeric_limits, CHAR_MAX, CHAR_MIN
 * numeric_limitsÀ» ÀÌ¿ëÇÏ¿© Ç¥Çö °¡´ÉÇÑ ¹üÀ§¸¦ È®ÀÎ °¡´É
-----------------------------------------------------------------------------*/
#include <iostream>

int main()
{
	char ch = 'A';
	std::cout << "char: " << ch << std::endl;

	{
		std::cout << "=== char¿¡ ´ëÇÑ ¼¼ºÎ Á¤º¸ º¸±â ===" << std::endl;

		std::cout << "char size: " << sizeof(char) << std::endl;

		int Max = std::numeric_limits<char>::max();
		int Min = std::numeric_limits<char>::min();
		std::cout << "char max : " << Max << "\t min : " << Min << std::endl;
		std::cout << "CHAR_MAX : " << CHAR_MAX << "\t CHAR_MIN : " << CHAR_MIN << std::endl;
		std::cout << std::endl;
	}

	{
		std::cout << "=== µ¥ÀÌÅÍÇü¿¡ ÃÖ´ë ÃÖ¼Ò°ª¿¡ µû¸¥ ¿À·ù ===" << std::endl;

		char min = CHAR_MIN - 1;
		char max = CHAR_MAX + 1;

		std::cout << "min: " << (int)min << "  max: " << (int)max << std::endl;
		std::cout << "min: " << min << "  max: " << max << std::endl;
	}

	return 0;
}

/*
char: A
=== char¿¡ ´ëÇÑ ¼¼ºÎ Á¤º¸ º¸±â ===
char size: 1
char max : 127   min : -128
CHAR_MAX : 127   CHAR_MIN : -128

=== µ¥ÀÌÅÍÇü¿¡ ÃÖ´ë ÃÖ¼Ò°ª¿¡ µû¸¥ ¿À·ù ===
min: 127  max: -128
min:   max: €
*/