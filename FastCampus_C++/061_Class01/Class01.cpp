/*-----------------------------------------------------------------------------
 * Name: 구조체(struct)
 * DESC: struct 기초 & typedef
-----------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

//typedef struct
//{
//    int num1;
//    int num2;
//    float fNum;
//} MyAA;

struct MyAA 
{
   int num1;
   int num2;
   float fNum;
};

int main()
{
    cout << "struct 기초 & typedef" << endl;

    MyAA aa;
    //MyAA aa = {10, 20, 0.01f}; //초기화 방법..
    aa.num1 = 10;
    aa.num2 = 20;
    aa.fNum = 0.01f;

    cout << "&aa: " << &aa << "  sizeof(aa): " << sizeof(aa) << endl << endl;
    cout << aa.num1 << " &(aa.num1): " << &(aa.num1) << endl;
    cout << aa.num2 << " &(aa.num2): " << &(aa.num2) << endl;
    cout << aa.fNum << " &(aa.fNum): " << &(aa.fNum) << endl;

    return 0;
}

/*
//===============================================
//   구조체 참고하기
//===============================================
   struct MyAA {...};  //int num;

         num1  num2   fNum
        ┌─────┬─────┬──────┐
   MyAA │  5  │  6  │ 0.01f│
        └─────┴─────┴──────┘
         0x00   0x04  0x08  => 전체 공간은(12Byte)

    총 4바이트 3개의 공간이 메모리에 생성되며 순차적으로
    연결된 메모리 공간을 가지게 된다.

//===============================================
//   '->' 연산자 사용
//===============================================
    int num = 100;
    int* pNum = &num;
    *pNum = 0; //역참조

    MyAA aa;
    MyAA* pAA = &aa;
    *pAA.num1 => 이런 방식은 불가 => *(pAA.num1) 이렇게 인식되므로 => (*pAA).num1이런식으로 접근해야 한다.
    => 이런 방식을 '->'연산자를 통해서 쉽게 접근하도록 수정 => pAA->num1

    문법: (*pAA).num1 == pAA->num1 동일..
*/