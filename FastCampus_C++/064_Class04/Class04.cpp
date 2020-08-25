/*-----------------------------------------------------------------------------
 * Name: ����ü(struct)
 * DESC: struct & �Լ� & ������ & 2�����迭�� => 1���� �迭�� ���� & �����Ҵ�
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
    const int ROW = 2; //�� 
    const int COL = 3; //��

    cout << "struct & �Լ� & ������ & 2�����迭�� 1���� �迭�� ���� & �����Ҵ�" << endl;

    //MyAA** pptrMyAA; //[2][3] = [6]���� ����..
    MyAA* ptrMyAA = new MyAA[ROW * COL]; //ptrMyAA[6]2���� �迭�� ������ ������ 1�������� ǥ������!!

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

//   int index = (i * _col) + j; �̷� ǥ���� ����!!
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