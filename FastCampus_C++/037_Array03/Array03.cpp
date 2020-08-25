/*-----------------------------------------------------------------------------
 * Name: 037_Array03
 * DESC: 배열 데이터 복사
 * 
 * 1. 반복문(배열 데이터 복사)
 * 2. memcpy(배열 데이터 복사)
 * 3. copy(배열 데이터 복사)
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int main()
{
    int arrayOri[5] = { 0, 11, 22, 33, 44 };
    int arrayDest1[5];
    int arrayDest2[5];
    int arrayDest3[5];

    //arrayDest = arrayOri; //에러 발생 주위!!

    cout << "----------------//1. 반복문(배열 데이터 복사)----------------" << endl;

    //1. 반복문(배열 데이터 복사)
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

    cout << "----------------//2. memcpy(배열 데이터 복사)----------------" << endl;

    //2. memcpy(배열 데이터 복사)
    {
        int length = sizeof(arrayOri) / sizeof(arrayOri[0]);

        memcpy(arrayDest2, arrayOri, sizeof(arrayOri));
        //memcpy(arrayDest2, arrayOri, sizeof(int) * length);

        for (int i = 0; i < length; i++)
        {
            cout << "arrayOri [" << i << "]: " << arrayOri[i] << " ==> " << "arrayDest [" << i << "]: " << arrayDest2[i] << endl;
        }
    }

    cout << "---------------- //3. copy(배열 데이터 복사)----------------" << endl;

    //3. copy(배열 데이터 복사)
    //(첫번째 파라미터로 배열의 시작부분, 두번째로는 배열의 끝부분, 마지막은 복사할 배열의 시작부분을 각각 포인터로 넘겨준다.)
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
----------------//1. 반복문(배열 데이터 복사)----------------
arrayOri [0]: 0 ==> arrayDest [0]: 0
arrayOri [1]: 11 ==> arrayDest [1]: 11
arrayOri [2]: 22 ==> arrayDest [2]: 22
arrayOri [3]: 33 ==> arrayDest [3]: 33
arrayOri [4]: 44 ==> arrayDest [4]: 44
----------------//2. memcpy(배열 데이터 복사)----------------
arrayOri [0]: 0 ==> arrayDest [0]: 0
arrayOri [1]: 11 ==> arrayDest [1]: 11
arrayOri [2]: 22 ==> arrayDest [2]: 22
arrayOri [3]: 33 ==> arrayDest [3]: 33
arrayOri [4]: 44 ==> arrayDest [4]: 44
---------------- //3. copy(배열 데이터 복사)----------------
arrayOri [0]: 0 ==> arrayDest [0]: 0
arrayOri [1]: 11 ==> arrayDest [1]: 11
arrayOri [2]: 22 ==> arrayDest [2]: 22
arrayOri [3]: 33 ==> arrayDest [3]: 33
arrayOri [4]: 44 ==> arrayDest [4]: 44
*/