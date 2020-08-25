/*-----------------------------------------------------------------------------
 * Name: 037_Array03
 * DESC: �迭 ������ ����
 * 
 * 1. �ݺ���(�迭 ������ ����)
 * 2. memcpy(�迭 ������ ����)
 * 3. copy(�迭 ������ ����)
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int main()
{
    int arrayOri[5] = { 0, 11, 22, 33, 44 };
    int arrayDest1[5];
    int arrayDest2[5];
    int arrayDest3[5];

    //arrayDest = arrayOri; //���� �߻� ����!!

    cout << "----------------//1. �ݺ���(�迭 ������ ����)----------------" << endl;

    //1. �ݺ���(�迭 ������ ����)
    {
        int length = sizeof(arrayOri) / sizeof(arrayOri[0]);
        for (int i = 0; i < length; i++)
        {
            arrayDest1[i] = arrayOri[i];
        }

        for (int i = 0; i < length; i++)
        {
            cout << "arrayOri [" << i << "]: " << arrayOri[i] << " ==> " << "arrayDest [" << i << "]: " << arrayDest1[i] << endl;
        }
    }

    cout << "----------------//2. memcpy(�迭 ������ ����)----------------" << endl;

    //2. memcpy(�迭 ������ ����)
    {
        int length = sizeof(arrayOri) / sizeof(arrayOri[0]);

        memcpy(arrayDest2, arrayOri, sizeof(arrayOri));
        //memcpy(arrayDest2, arrayOri, sizeof(int) * length);

        for (int i = 0; i < length; i++)
        {
            cout << "arrayOri [" << i << "]: " << arrayOri[i] << " ==> " << "arrayDest [" << i << "]: " << arrayDest2[i] << endl;
        }
    }

    cout << "---------------- //3. copy(�迭 ������ ����)----------------" << endl;

    //3. copy(�迭 ������ ����)
    //(ù��° �Ķ���ͷ� �迭�� ���ۺκ�, �ι�°�δ� �迭�� ���κ�, �������� ������ �迭�� ���ۺκ��� ���� �����ͷ� �Ѱ��ش�.)
    {
        int length = sizeof(arrayOri) / sizeof(arrayOri[0]);
        copy(arrayOri, arrayOri + length, arrayDest3);
        for (int i = 0; i < length; i++)
        {
            cout << "arrayOri [" << i << "]: " << arrayOri[i] << " ==> " << "arrayDest [" << i << "]: " << arrayDest3[i] << endl;
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