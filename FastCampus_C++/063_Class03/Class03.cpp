/*-----------------------------------------------------------------------------
 * Name: 구조체(struct)
 * DESC: struct & 함수 & 포인터 & 배열 & 동적할당
-----------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

struct MyAA
{
    int num1;
    int num2;
    float fNum;
};

void InitData(MyAA**, int, int);
void SetData(MyAA*[], int, int);
void PrintData(MyAA**, int, int);

int main()
{
    cout << "struct & 함수 & 포인터 & 배열 & 동적할당" << endl;

    //스택영역(제한적으로 작은 공간을 사용가능, 프로그래밍 실행중에 지속적 사용)
    //힙영역(프로그램중에 실시간으로 생성 소멸이 이루어짐, 임시 저장)
    //MyAA arrayBigAA[99999999]; //에러..

    const int ROW = 2; //행
    const int COL = 3; //열

    MyAA** pptrMyAA; //[2][3] = [6]개와 동일..

    pptrMyAA = new MyAA* [2];

    for (int i = 0; i < ROW; i++)
    {
        pptrMyAA[i] = new MyAA[COL];
    }

    for (int i = 0; i < ROW; i++) //0, 1
    {
        for (int j = 0; j < COL; j++) //0, 1, 2
        {
            pptrMyAA[i][j].num1 = (i * COL) + j; //0, 1, 2, 3, 4, 5
        }
    }

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << pptrMyAA[i][j].num1 << "  ";
        }
        cout << endl;
    }

    InitData(pptrMyAA, COL, ROW);
    PrintData(&pptrMyAA[0], COL, ROW);

    SetData(pptrMyAA, COL, ROW);
    PrintData(pptrMyAA, COL, ROW);

    for (int i = 0; i < ROW; i++)
    {
        delete[] pptrMyAA[i]; // pptrMyAA[i] = new MyAA[COL];
    }

    delete[] pptrMyAA; // pptrMyAA = new MyAA*[2];

    return 0;
}

void InitData(MyAA** _pptrMyAA, int _col, int _row)
{
    cout << "InitData(MyAA** _pptrMyAA, int _col, int _row)" << endl;

    for (int i = 0; i < _row; i++)
    {
        for (int j = 0; j < _col; j++)
        {
            _pptrMyAA[i][j].num1 = 0;
            //(*(_pptrMyAA + i))[j].num1 = 0;
            //(*(*(_pptrMyAA + i) + j)).num1 = 0;
            //(*(_pptrMyAA + i) + j)->num1 = 0;
        }
    }
}

void SetData(MyAA* _pptrMyAA[], int _col, int _row)
{
    cout << "SetData(MyAA* _pptrMyAA[], int _col, int _row)" << endl;

    for (int i = 0; i < _row; i++)
    {
        for (int j = 0; j < _col; j++)
        {
            _pptrMyAA[i][j].num1 = (i * _col) + j; //0, 1, 2, 3, 4, 5
        }
    }
}

void PrintData(MyAA** _pptrMyAA, int _col, int _row)
{
    cout << "PrintData(MyAA** _pptrMyAA, int _col, int _row)" << endl;

    for (int i = 0; i < _row; i++)
    {
        for (int j = 0; j < _col; j++)
        {
            //cout << _pptrMyAA[i][j].num1 << "  ";
            //cout << (*(_pptrMyAA + i))[j].num1 << "  ";
            //cout << (*(*(_pptrMyAA + i)+j)).num1 << "  ";
            cout << (*(_pptrMyAA + i) + j)->num1 << "  ";
        }
        cout << endl;
    }
}

//void SetData(MyAA* (_pptrMyAA)[], int _col, int _row)
//{
//    for (int i = 0; i < _row; i++)
//    {
//        for (int j = 0; j < _col; j++)
//        {
//            _pptrMyAA[i][j].num1 = (i * _col) + j; //0, 1, 2, 3, 4, 5
//        }
//    }
//}