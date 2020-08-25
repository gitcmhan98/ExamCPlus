/*-----------------------------------------------------------------------------
 * Name: 057_String05
 * DESC: ���� ������ ���� �Ҵ�
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	cout << "���� ������ ���� �Ҵ�" << endl;

	int col, row;
	std::cin >> row >> col;
	int** mat;

	//�޸� �Ҵ�..
	mat = new int* [row];

	for (int i = 0; i < row; i++)
		mat[i] = new int[col];

	//������ �ʱ�ȭ..
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			mat[i][j] = i * col + j;
		}
	}

	//���� ������ ���..
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cout << mat[i][j] << " ";
		}
		std::cout << std::endl;
	}

	//�޸� ����..
	for (int i = 0; i < row; i++)
		delete[] mat[i];

	delete[] mat;
}

/*  Result
���� ������ ���� �Ҵ�
5
5
0 1 2 3 4
5 6 7 8 9
10 11 12 13 14
15 16 17 18 19
20 21 22 23 24
*/
