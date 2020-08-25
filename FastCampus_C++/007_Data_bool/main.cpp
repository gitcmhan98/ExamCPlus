#include <iostream>

/*-----------------------------------------------------------------------------
 * Name: Data_bool
 * DESC: Boolean ������ Ÿ��
 * Boolean ������ Ÿ���� ��/������ ǥ���ϴµ� ���Ǵ� ������ Ÿ��
 * 0, 1�� ������ �� �ִ� ������ Ÿ��(������ �׸�)
-----------------------------------------------------------------------------*/

int main()
{
	bool isTemp01 = true;
	bool isTemp02 = false;
	bool isTemp03 = 0;
	bool isTemp04 = 1;
	bool isTemp05 = 123456; //(0�� ������ ��� ���� ��)

	char tab = '\t';

	std::cout << "sizeof(bool): " << sizeof(bool) << std::endl;
	std::cout << isTemp01 << tab << isTemp02 << tab << isTemp03 << tab << isTemp04 << tab << isTemp05 << std::endl;

	return 0;
}

/*
//���
sizeof(bool): 1
1       0       0       1       1
*/

/*
C++������ � ���� bool������ ������ Ÿ�� ��ȯ�� �����մϴ�.
bool isTemp05 = 123456; //(0�� ������ ��� ���� ��)
�̶� 0�� ���� ����(false)����, 0�� �ƴ� ���� ��(true)���� �ڵ� ��ȯ�˴ϴ�.
*/