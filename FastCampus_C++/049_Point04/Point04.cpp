/*-----------------------------------------------------------------------------
 * Name: 049_Point04
 * DESC: SwapÇÔ¼ö, CallByRefrence Vs. CallByValue
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

void Swap(int, int);
void SwapRef(int&, int&);
void SwapPoint(int*, int*);

int main()
{
	cout << "CallByRefrence Vs. CallByValue" << endl;

    int num1 = 0;
    int num2 = 1000;

    cout << "Before Swap(int, int)"<< "num1: " << num1 << "  num2: " << num2 << endl;
    Swap(num1, num2);
    cout << "After Swap(int, int)" << "num1: " << num1 << "  num2: " << num2 << endl << endl;

    cout << "Before SwapRef(int&, int&)" << "num1: " << num1 << "  num2: " << num2 << endl;
    SwapRef(num1, num2); 
    cout << "After SwapRef(int&, int&)" << "num1: " << num1 << "  num2: " << num2 << endl << endl;;

    cout << "Before SwapPoint(int*, int*)" << "num1: " << num1 << "  num2: " << num2 << endl;
    SwapPoint(&num1, &num2); //int* ptrNum1 = &num1;
    cout << "After SwapPoint(int*, int*)" << "num1: " << num1 << "  num2: " << num2 << endl << endl;;
}

void Swap(int a, int b) 
{
    int temp = a;
    a = b;
    b = temp;
}

void SwapRef(int& a, int& b) 
{
    int temp = a;
    a = b;
    b = temp;
}

void SwapPoint(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


/*  Result
CallByRefrence Vs. CallByValue
Before Swap(int, int)num1: 0  num2: 1000
After Swap(int, int)num1: 0  num2: 1000

Before SwapRef(int&, int&)num1: 0  num2: 1000
After SwapRef(int&, int&)num1: 1000  num2: 0

Before SwapPoint(int*, int*)num1: 1000  num2: 0
After SwapPoint(int*, int*)num1: 0  num2: 1000
*/