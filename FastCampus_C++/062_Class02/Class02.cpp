/*-----------------------------------------------------------------------------
 * Name: 구조체(struct)
 * DESC: struct & 함수 & 포인터 & 배열
-----------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

struct MyAA 
{
    int num1;
    int num2;
    float fNum;
};

void Print(MyAA);
void PrintArray(MyAA[]);
void PrintRef(MyAA*); //int* pNum;

int main()
{
    cout << "struct & 함수 & 포인터 & 배열" << endl;

    //MyAA aa[2];  //int num[2];
  
    MyAA arrayAA[2] = { {1, 1, 0.01f}, {2, 2, 0.02f} };  //MyAA arrayAA[2] = { 1, 1, 0.01f, 2, 2, 0.02f };

    cout << arrayAA[0].num1 << " " << arrayAA[0].num2 << " " << arrayAA[0].fNum << endl;

    MyAA temp = arrayAA[1];
    cout << temp.num1 << " " << temp.num2 << " " << temp.fNum << endl;

    Print(arrayAA[0]); //MyAA _arrayAA = arrayAA[0];
    cout << "After " << arrayAA[0].num1 << " " << arrayAA[0].num2 << " " << arrayAA[0].fNum << endl;

    PrintArray(arrayAA);
    cout << "After " << arrayAA[0].num1 << " " << arrayAA[0].num2 << " " << arrayAA[0].fNum << endl;

    PrintRef(arrayAA);  //PrintRef(&arrayAA[0]);
    cout << "After " << arrayAA[0].num1 << " " << arrayAA[0].num2 << " " << arrayAA[0].fNum << endl;

    return 0;
}

//Call By Value
void Print(MyAA _arrayAA)
{
    cout << "\t Print(MyAA _arrayAA) sizeof(_arrayAA): " << sizeof(_arrayAA) << endl;
    _arrayAA.num1 = 100;
}

//Call By Refrence
void PrintArray(MyAA _arrayAA[]) //MyAA _arrayAA[2]
{
    cout << "\t PrintArray(MyAA _arrayAA[]) sizeof(_arrayAA): " << sizeof(_arrayAA) << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << _arrayAA[i].num1 << " " << _arrayAA[i].num2 << " " << _arrayAA[i].fNum << endl;
    }

    _arrayAA[0].num1 = 100;
}

//Call By Refrence
void PrintRef(MyAA* _refAA)
{
    cout << "\t  PrintRef(MyAA* _refAA) sizeof(_refAA): " << sizeof(_refAA) << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << (*(_refAA + i)).num1 << " " <<
            (_refAA + i)->num2 << " " <<
            _refAA[i].fNum << endl;
    }

    (*(_refAA + 0)).num1 = 100000000; //_refAA[0].num1 = 100000000
}