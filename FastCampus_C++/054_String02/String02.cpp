/*-----------------------------------------------------------------------------
 * Name: 054_String02
 * DESC: ���ڿ� & ������
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	cout << "���ڿ� & ������" << endl;
	const char* arrs[] = { "apple", "banana", "cherry", "pomegrante", "pepper", "onion" };
	int i;
	const char* p = arrs[0];

	for (i = 0; i < 14; i++) {
		if (*p != '\0') {
			printf("%c", *p);
		}
		else {
			printf("\n");
		}
		p++;
	}
}

/*  Result
���ڿ� & ������
apple


banana

cherry

pomegrante





pepper

onion
*/

/*
arrs[0] = "apple";
arrs[1] = "banana";
....
*/
