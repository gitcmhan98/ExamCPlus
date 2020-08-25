/*-----------------------------------------------------------------------------
 * Name: 036_Array02
 * DESC: 1���� �迭�� �پ��� �ʱ�ȭ ���
 * 1. �迭 ������ ��������
 * 2. �迭�� ����
 *      int length1 = sizeof(arrayNums1) / sizeof(int);
 *      int size1 = std::size(arrayNums1);
 *      int length2 = sizeof(arrayNums2) / sizeof(arrayNums2[0]); //sizeof(int)
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int main()
{
    //1. �迭 ������ ��������
    int arrayNums1[5];
    int arrayNums2[4] = { 0, 1, 2, 3 };
    int arrayNums3[10] = { 100, }; //0������ 100���� �ʱ�ȭ, �������� 0����..
    int arrayNums4[20] = { }; //��δ� 0���� �ʱ�ȭ..
    int arrayNums5[] = {0, 1, 2, 3, 4 }; //arrayNums5[5]

    //2. �迭�� ����
    {
        int length1 = sizeof(arrayNums1) / sizeof(int); //sizeof(arrayNums2[0])
        cout << "length1:  " << length1 << endl;

        for (int i = 0; i < length1; i++)
        {
            arrayNums1[i] = i;
        }

        int size1 = std::size(arrayNums1);
        cout << "size1:  " << size1 << endl;
        for (int i = 0; i < size1; i++)
        {
            cout << "arrayNums1 [" << i << "]: " << arrayNums1[i] << endl;
        }

        cout << "-----------------------------------------------------------" << endl;

        int length2 = sizeof(arrayNums2) / sizeof(arrayNums2[0]); //sizeof(int)
        for (int i = 0; i < length2; i++)
        {
            cout << "arrayNums2 [" << i << "]: " << arrayNums2[i] << endl;
        }

        cout << "-----------------------------------------------------------" << endl;

        int size2 = std::size(arrayNums3);
        for (int i = 0; i < size2; i++)
        {
            cout << "arrayNums3 [" << i << "]: " << arrayNums3[i] << endl;
        }
    }

    return 0;
}


/*  Result
length1:  5
size1:  5
arrayNums1 [0]: 0
arrayNums1 [1]: 1
arrayNums1 [2]: 2
arrayNums1 [3]: 3
arrayNums1 [4]: 4
-----------------------------------------------------------
arrayNums2 [0]: 0
arrayNums2 [1]: 1
arrayNums2 [2]: 2
arrayNums2 [3]: 3
-----------------------------------------------------------
arrayNums3 [0]: 100
arrayNums3 [1]: 0
arrayNums3 [2]: 0
arrayNums3 [3]: 0
arrayNums3 [4]: 0
arrayNums3 [5]: 0
arrayNums3 [6]: 0
arrayNums3 [7]: 0
arrayNums3 [8]: 0
arrayNums3 [9]: 0
*/


/*
�迭�� ����
- �迭�� ���� = sizeof(�迭 �̸�) / sizeof(�迭 �̸�[0])
- �迭�� ���� = sizeof(�迭 �̸�) / sizeof(�ڷ���)
- �迭�� ���� = std::size(�迭 �̸�)
*/