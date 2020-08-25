/*-----------------------------------------------------------------------------
 * Name: ����ü(struct)
 * DESC: struct ���� & typedef
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
    cout << "struct ���� & typedef" << endl;

    MyAA aa;
    //MyAA aa = {10, 20, 0.01f}; //�ʱ�ȭ ���..
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
//   ����ü �����ϱ�
//===============================================
   struct MyAA {...};  //int num;

         num1  num2   fNum
        ����������������������������������������
   MyAA ��  5  ��  6  �� 0.01f��
        ����������������������������������������
         0x00   0x04  0x08  => ��ü ������(12Byte)

    �� 4����Ʈ 3���� ������ �޸𸮿� �����Ǹ� ����������
    ����� �޸� ������ ������ �ȴ�.

//===============================================
//   '->' ������ ���
//===============================================
    int num = 100;
    int* pNum = &num;
    *pNum = 0; //������

    MyAA aa;
    MyAA* pAA = &aa;
    *pAA.num1 => �̷� ����� �Ұ� => *(pAA.num1) �̷��� �νĵǹǷ� => (*pAA).num1�̷������� �����ؾ� �Ѵ�.
    => �̷� ����� '->'�����ڸ� ���ؼ� ���� �����ϵ��� ���� => pAA->num1

    ����: (*pAA).num1 == pAA->num1 ����..
*/