/*-----------------------------------------------------------------------------
 * Name: 구조체(struct)
 * DESC: struct & 함수 & 포인터 & 2차원배열을 => 1차원 배열로 구현 & 동적할당
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

struct MyAA
{
    int num1;
    int num2;
    float fNum;
};

void PrintData(MyAA*, int, int);

int main()
{
    const int ROW = 2; //행 
    const int COL = 3; //열

    cout << "struct & 함수 & 포인터 & 2차원배열을 1차원 배열로 구현 & 동적할당" << endl;

    //MyAA** pptrMyAA; //[2][3] = [6]개와 동일..
    MyAA* ptrMyAA = new MyAA[ROW * COL]; //ptrMyAA[6]2차원 배열의 복잡한 구조를 1차원으로 표현가능!!

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            ptrMyAA[(i * COL) + j].num1 = (i * COL) + j; //0, 1, 2, 3, 4, 5
        }
    }

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            int index = (i * COL) + j;
            cout << ptrMyAA[index].num1 << "  ";
        }
        cout << endl;
    }

    PrintData(ptrMyAA, COL, ROW);

    delete[] ptrMyAA;

    return 0;
}

//   int index = (i * _col) + j; 이런 표현에 집중!!
void PrintData(MyAA* _ptrMyAA, int _col, int _row)
{
    cout << "PrintData(MyAA* _ptrMyAA, int _col, int _row)" << endl;

    for (int i = 0; i < _row; i++)
    {
        for (int j = 0; j < _col; j++)
        {
            int index = (i * _col) + j;

            _ptrMyAA[index].num1 = 0;

            cout << _ptrMyAA[index].num1 << "  ";
            //cout << (*(_ptrMyAA + index)).num1 << "  ";
            //cout << (_ptrMyAA + index)->num1 << "  ";
        }
        cout << endl;
    }
}