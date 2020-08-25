/*-----------------------------------------------------------------------------
 * Name: 038_Array04
 * DESC: ������ �迭(2���� �̻�..)
 *
 * 1. ������ �迭 ���� �� �ʱ�ȭ�� ��������
 * 2. ���Ŀ� Ȯ���� �迭 & ������, �迭 & �Լ�, �����Ҵ�
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int main()
{
    //1. ������ �迭 ���� �� �ʱ�ȭ�� ��������
    int arrayNums1[2][4];
    int arrayNums2[][3] = { {0, 11, 22}, {33, 44, 55}, {66, 77, 88} }; //[3][3]
    //int arrayNums3[][] = { {0, 11, 22}, {33, 44, 55}, {66, 77, 88} };

    {
        int size_col = sizeof(arrayNums1[0]) / sizeof(arrayNums1[0][0]); // 16/4 = 4
        int size_row = (sizeof(arrayNums1) / size_col) / sizeof(arrayNums1[0][0]);   // (32/4) = 8 / 4 = 2
      
        cout << "sizeof(arrayNums1[0][0]): " << sizeof(arrayNums1[0][0]) << endl;
        cout << "(sizeof(arrayNums1) / size_col): " << (sizeof(arrayNums1) / size_col) << endl;

        int value = 0;

        cout << "size_row: " << size_row << "size_col: " << size_col << endl;

        for (int i = 0; i < size_row; i++)
        {
            for (int j = 0; j < size_col; j++)
            {
                arrayNums1[i][j] = value++;
            }
        }

        for (int i = 0; i < size_row; i++)
        {
            for (int j = 0; j < size_col; j++)
            {
                cout << "arrayNums1 [" << i << "][" << j << "]: " << arrayNums1[i][j] << endl;
            }
            cout << endl;
        }
    }

    {
        int size_col = sizeof(arrayNums2[0]) / sizeof(arrayNums2[0][0]);
        int size_row = (sizeof(arrayNums2) / size_col) / sizeof(arrayNums2[0][0]);

        cout << "size_row: " << size_row << "size_col: " << size_col << endl;

        for (int i = 0; i < size_row; i++)
        {
            for (int j = 0; j < size_col; j++)
            {
                cout << "arrayNums1 [" << i << "][" << j << "]: " << arrayNums2[i][j] << endl;
            }
            cout << endl;
        }
    }

    return 0;
}


/*  Result
----------------//1. �ݺ���(�迭 ������ ����)----------------
arrayOri [0]: 0 ==> arrayDest [0]: 0
arrayOri [1]: 11 ==> arrayDest [1]: 11
arrayOri [2]: 22 ==> arrayDest [2]: 22
arrayOri [3]: 33 ==> arrayDest [3]: 33
arrayOri [4]: 44 ==> arrayDest [4]: 44
----------------//2. memcpy(�迭 ������ ����)----------------
arrayOri [0]: 0 ==> arrayDest [0]: 0
arrayOri [1]: 11 ==> arrayDest [1]: 11
arrayOri [2]: 22 ==> arrayDest [2]: 22
arrayOri [3]: 33 ==> arrayDest [3]: 33
arrayOri [4]: 44 ==> arrayDest [4]: 44
---------------- //3. copy(�迭 ������ ����)----------------
arrayOri [0]: 0 ==> arrayDest [0]: 0
arrayOri [1]: 11 ==> arrayDest [1]: 11
arrayOri [2]: 22 ==> arrayDest [2]: 22
arrayOri [3]: 33 ==> arrayDest [3]: 33
arrayOri [4]: 44 ==> arrayDest [4]: 44
*/

/*
����: ������ Ÿ��  ���迭�̸���[��(row)�� ����][��(column)�� ����](ex : int arrNum[3][5])

          ������ �迭[3][5]        //���� �޸𸮿� ����Ǵ� ���´� �ƴϸ� �����ϱ� ���ؼ� ��ü������ ǥ��

     [0]   [1]   [2]   [3]   [4]    
   ��������������������������������������������������������������
[0]��  5  ��  4  ��  3  ��  2  ��  1  �� 
   ��������������������������������������������������������������
   ��������������������������������������������������������������
[1]��  6  ��  2  ��  3  ��  4  ��  5  ��
   ��������������������������������������������������������������
   ��������������������������������������������������������������
[2]��  5  ��  6  ��  7  ��  8  ��  9  ��
   ��������������������������������������������������������������



                              int arrNum[3][5]

                                 Address��   �޸�
                                ����������������������������������������������������������
 arrNum[0] ��� arrNum[0][0] ����    0x00  ��
                                  0x01  ��
                                  0x02  ��      5
                                  0x03  ��
                                ����������������������������������������������������������
              arrNum[0][1] ����    0x04  ��
                                  0x05  ��
                                  0x06  ��      4
                                  0x07  ��
                                ����������������������������������������������������������
              arrNum[0][2] ����    0x08  ��
                                  0x09  ��
                                  0x0A  ��      3
                                  0x0B  ��
                                ����������������������������������������������������������
              arrNum[0][3] ����    0x0C  ��
                                  0x0D  ��
                                  0x0E  ��      2
                                  0x0F  ��
                                ����������������������������������������������������������
              arrNum[0][4] ����    0x10  ��
                                  0x11  ��
                                  0x12  ��      1
                                  0x13  ��
                                ����������������������������������������������������������
 arrNum[1] ��� arrNum[1][0] ����    0x14  ��
                                  0x15  ��
                                  0x16  ��      6
                                  0x17  ��
                                ����������������������������������������������������������
*/
