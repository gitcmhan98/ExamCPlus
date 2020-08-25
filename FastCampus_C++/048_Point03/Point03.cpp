/*-----------------------------------------------------------------------------
 * Name: 048_Point03
 * DESC: 배열 & 포인터 & 함수
 * 함수의 파라미터 혹은 리턴값으로 포인터를 이용하는 이유
 * 1: 연속된 메모리 공간에 주소값으로 처리
 * 2: CallbyReference: 함수에서 하나 이상의 값을 리턴하거나 변경해야 하는 경우
 * 3: 동적할당 
 * 4: 메모리 공간의 효율적 사용: 거대한 사용자 자료형을 함수 파라미터로 주소값만 넘기면 되므로(메모리에 복사를 줄임)
 => 데이터가 크기가 얼마이든 포인터에 해당하는 4바이트(8바이트) 아키텍쳐에 해당하는 기본 데이터로 통신가능
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

void PrintData(int*);

int main()
{
	cout << "배열 & 포인터 & 함수" << endl;

	int arrNum[5] = { 0, 1, 2, 3, 4 };

	for (int i = 0; i < 5; i++)
	{
		cout << "  arrNum[" << i << "]: " << arrNum[i] << " &arrNum[" << i << "]: " << &arrNum[i];
		cout << endl;
	}

	cout << endl;

    PrintData(arrNum);  //PrintData(&arrNum[0]);
}

void PrintData(int* pArrNum) //int* pArrNum = arrNum;
{
	for (int i = 0; i < 5; i++)
	{
		cout << " *(pArrNum + " << i << "): " << *(pArrNum + i) << " (pArrNum + " << i << "): " << (pArrNum + i) << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << " (pArrNum + " << i << "): " << pArrNum[i] << endl;
	}
}

/*  Result
배열 & 포인터 & 함수
  arrNum[0]: 0 &arrNum[0]: 0051FD18
  arrNum[1]: 1 &arrNum[1]: 0051FD1C
  arrNum[2]: 2 &arrNum[2]: 0051FD20
  arrNum[3]: 3 &arrNum[3]: 0051FD24
  arrNum[4]: 4 &arrNum[4]: 0051FD28

 *(pArrNum + 0): 0 (pArrNum + 0): 0051FD18
 *(pArrNum + 1): 1 (pArrNum + 1): 0051FD1C
 *(pArrNum + 2): 2 (pArrNum + 2): 0051FD20
 *(pArrNum + 3): 3 (pArrNum + 3): 0051FD24
 *(pArrNum + 4): 4 (pArrNum + 4): 0051FD28
 (pArrNum + 0): 0
 (pArrNum + 1): 1
 (pArrNum + 2): 2
 (pArrNum + 3): 3
 (pArrNum + 4): 4
*/

/*
         일차원 배열[5]        //실제 메모리에 저장되는 형태는 아니며 이해하기 위해서 입체적으로 표현

     [0]   [1]   [2]   [3]   [4]
   ┌─────┬─────┬─────┬─────┬─────┐
   │  0  │  1  │  2  │  3  │  4  │
   └─────┴─────┴─────┴─────┴─────┘
       int arrNum[5]

                                 Address│   메모리
 pArrNum   (pArrNum + 0)        ────────┼────────────────────
 arrNum    →→ &arrNum[0]   →→→    0x00  │
                                  0x01  │
                                  0x02  │      0
                                  0x03  │
             (pArrNum + 1)      ────────┼────────────────────
              &arrNum[1]   →→→    0x04  │
                                  0x05  │
                                  0x06  │      1
                                  0x07  │
             (pArrNum + 2)      ────────┼────────────────────
              &arrNum[2]   →→→    0x08  │
                                  0x09  │
                                  0x0A  │      2
                                  0x0B  │
             (pArrNum + 3)      ────────┼────────────────────
              &arrNum[3]   →→→    0x0C  │
                                  0x0D  │
                                  0x0E  │      3
                                  0x0F  │
            (pArrNum + 4)       ────────┼────────────────────
              &arrNum[4]   →→→    0x10  │
                                  0x11  │
                                  0x12  │      4
                                  0x13  │
                                ────────┼────────────────────
*/