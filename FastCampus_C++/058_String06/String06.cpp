/*-----------------------------------------------------------------------------
 * Name: 057_String05
 * DESC: 이중 포인터 동적 할당
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	cout << "이중 포인터 동적 할당" << endl;

	int col, row;
	std::cin >> row >> col;
	int** mat;

	//메모리 할당..
	mat = new int* [row];

	for (int i = 0; i < row; i++)
		mat[i] = new int[col];

	//데이터 초기화..
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			mat[i][j] = i * col + j;
		}
	}

	//저장 데이터 출력..
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cout << mat[i][j] << " ";
		}
		std::cout << std::endl;
	}

	//메모리 해제..
	for (int i = 0; i < row; i++)
		delete[] mat[i];

	delete[] mat;
}

/*  Result
이중 포인터 동적 할당
5
5
0 1 2 3 4
5 6 7 8 9
10 11 12 13 14
15 16 17 18 19
20 21 22 23 24
*/
