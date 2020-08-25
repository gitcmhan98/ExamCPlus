/*-----------------------------------------------------------------------------
 * Name: ����ü(struct)
 * DESC: struct & �Լ� & ������ & �迭 & �����Ҵ�
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
    cout << "struct & �Լ� & ������ & �迭 & �����Ҵ�" << endl;

    //���ÿ���(���������� ���� ������ ��밡��, ���α׷��� �����߿� ������ ���)
    //������(���α׷��߿� �ǽð����� ���� �Ҹ��� �̷����, �ӽ� ����)
    //MyAA arrayBigAA[99999999]; //����..

    const int ROW = 2; //��
    const int COL = 3; //��

    MyAA** pptrMyAA; //[2][3] = [6]���� ����..

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