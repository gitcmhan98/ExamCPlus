/*-----------------------------------------------------------------------------
 * Name: 051_Point06
 * DESC: 포인터 & 이차원 배열
 * 문법: 자료형 (*포인터 변수명)[ROW]  ex;int (*ptrArr)[3]
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

const int COL = 8;
const int ROW = 9;

void Init(int (*ptrArr)[ROW]);
void PrintData(int (*ptrArr)[ROW]);
void SelectData(int ptrArr[][ROW]);

int main()
{
	cout << "이중 포인터 & 배열" << endl;

    int arrResult[COL][ROW]; //72개의 구구단 결과를 저장..

    cout << "arrResult[COL][ROW]: " << sizeof(arrResult) << endl;

    //1: 배열에 구구단 결과를 저장
    Init(arrResult);

    //2: 저장된 데이터를 기반으로 화면 출력
    PrintData(arrResult);

    //3: 원하는 구구단 결과만 따로 출력..
    SelectData(arrResult);
}

void Init(int(*ptrArr)[ROW])
{
    for (int i = 0; i < COL; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            ptrArr[i][j] = (i + 2) * (j + 1);
            //*(*(ptrArr + i) + j) = (i + 2) * (j + 1);
        }
    }

    cout << "sizeof(ptrArr): " << sizeof(ptrArr) << endl;
}

void PrintData(int(*ptrArr)[ROW])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << "  " << (j + 2) << " X " << (i + 1) << "= " << ptrArr[j][i];
            //cout << "  " << (j + 2) << " X " << (i + 1) << "= " << *(*(ptrArr + j) + i);
            //cout << "  " << (j + 2) << " X " << (i + 1) << "= " << (*(ptrArr + j))[i];
            //cout << "  " << (j + 2) << " X " << (i + 1) << "= " << *(ptrArr[j] + i);
        }
        cout << endl;
    }

    cout << "sizeof(ptrArr): " << sizeof(ptrArr) << endl;

    //1행의 열이 출력(이중포인터가 아닌 값참조)..
    for (int j = 0; j < COL; j++)
    {
        cout << "**ptrArr++: " << **(ptrArr++) << endl; //++는 ROW만큼 이동..
    }
}

void SelectData(int ptrArr[][ROW])
{
    int selectCol = 0;
    cout << endl << "몇 단을 보여드릴까요? ";
    cin >> selectCol;

    //배열의 인덱스는 0부터 시작됩니다. 다시 인덱스 계산
    selectCol -= 2;

    for (int i = 0; i < ROW; i++)
    {
        cout << "  " << (selectCol + 2) << " X " << (i + 1) << "= " << ptrArr[selectCol][i] << endl;
        //cout << "  " << (selectCol + 2) << " X " << (i + 1) << "= " << *(*(ptrArr + selectCol) + i) << endl;
    }

    cout << "sizeof(ptrArr): " << sizeof(ptrArr) << endl;
}

/*  Result
이중 포인터 & 배열
arrResult[COL][ROW]: 288
sizeof(ptrArr): 4
  2 X 1= 2  3 X 1= 3  4 X 1= 4  5 X 1= 5  6 X 1= 6  7 X 1= 7  8 X 1= 8  9 X 1= 9
  2 X 2= 4  3 X 2= 6  4 X 2= 8  5 X 2= 10  6 X 2= 12  7 X 2= 14  8 X 2= 16  9 X 2= 18
  2 X 3= 6  3 X 3= 9  4 X 3= 12  5 X 3= 15  6 X 3= 18  7 X 3= 21  8 X 3= 24  9 X 3= 27
  2 X 4= 8  3 X 4= 12  4 X 4= 16  5 X 4= 20  6 X 4= 24  7 X 4= 28  8 X 4= 32  9 X 4= 36
  2 X 5= 10  3 X 5= 15  4 X 5= 20  5 X 5= 25  6 X 5= 30  7 X 5= 35  8 X 5= 40  9 X 5= 45
  2 X 6= 12  3 X 6= 18  4 X 6= 24  5 X 6= 30  6 X 6= 36  7 X 6= 42  8 X 6= 48  9 X 6= 54
  2 X 7= 14  3 X 7= 21  4 X 7= 28  5 X 7= 35  6 X 7= 42  7 X 7= 49  8 X 7= 56  9 X 7= 63
  2 X 8= 16  3 X 8= 24  4 X 8= 32  5 X 8= 40  6 X 8= 48  7 X 8= 56  8 X 8= 64  9 X 8= 72
  2 X 9= 18  3 X 9= 27  4 X 9= 36  5 X 9= 45  6 X 9= 54  7 X 9= 63  8 X 9= 72  9 X 9= 81
**ptrArr++: 2
**ptrArr++: 3
**ptrArr++: 4
**ptrArr++: 5
**ptrArr++: 6
**ptrArr++: 7
**ptrArr++: 8
**ptrArr++: 9
sizeof(ptrArr): 4

몇 단을 보여드릴까요? 2
  2 X 1= 2
  2 X 2= 4
  2 X 3= 6
  2 X 4= 8
  2 X 5= 10
  2 X 6= 12
  2 X 7= 14
  2 X 8= 16
  2 X 9= 18
sizeof(ptrArr): 4
*/


/*
 이차원 배열[8][9]        //실제 메모리에 저장되는 형태는 아니며 이해하기 위해서 입체적으로 표현

     [0]   [1]   [2]   [3]   [4]   [5]   [6]   [7]   [8]
   ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
   │  2  │  4  │  6  │  8  │  10 │  12 │  14 │  16 │  18 │   (ptrArr + 0) 
   └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
   ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
   │  3  │  6  │  9  │  12 │  15 │  18 │  21 │  24 │  27 │   (ptrArr + 1) 
   └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
   ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
   │  4  │  8  │  12 │  16 │  20 │  24 │  28 │  32 │  36 │   (ptrArr + 2)
   └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘

   
                              int arrNum[8][9]

                                 Address│   메모리
 *(ptrArr + 0)                  ────────┼────────────────────
 arrNum[0] →→ arrNum[0][0] →→→    0x00  │
 &arrNum[0]  &(&arrNum[0])[0]     0x01  │
                                  0x02  │      2
                                  0x03  │
        (*(ptrArr + 0) + 1)     ────────┼────────────────────
              arrNum[0][1] →→→    0x04  │
                                  0x05  │
                                  0x06  │      4
                                  0x07  │
        (*(ptrArr + 0) + 2)     ────────┼────────────────────
              arrNum[0][2] →→→    0x08  │
                                  0x09  │
                                  0x0A  │      6
                                  0x0B  │
                                ────────┼────────────────────
              arrNum[0][3] →→→    0x0C  │
                                  0x0D  │
                                  0x0E  │      8
                                  0x0F  │
                                ────────┼────────────────────
              arrNum[0][4] →→→    0x10  │
                                  0x11  │
                                  0x12  │      10
                                  0x13  │
                                ────────┼────────────────────
              arrNum[0][5] →→→    0x14  │
                                  0x15  │
                                  0x16  │      12
                                  0x17  │
                                ────────┼────────────────────
              arrNum[0][6] →→→    0x18  │
                                  0x19  │
                                  0x2A  │      14
                                  0x2B  │
                                ────────┼────────────────────
              arrNum[0][7] →→→    0x2C  │
                                  0x2D  │
                                  0x2E  │      16
                                  0x2F  │
                                ────────┼────────────────────
              arrNum[0][8] →→→    0x30  │
                                  0x31  │
                                  0x32  │      18
                                  0x33  │
 *(ptrArr + 1)                  ────────┼────────────────────
 arrNum[1] →→ arrNum[1][0] →→→    0x34  │
                                  0x35  │
                                  0x36  │      3
                                  0x37  │
        (*(ptrArr + 1) + 1)     ────────┼────────────────────
              arrNum[1][1] →→→    0x4A  │      6
*/