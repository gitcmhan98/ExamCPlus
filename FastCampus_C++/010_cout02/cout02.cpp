/*-----------------------------------------------------------------------------
 * Name: cout02
 * DESC: ǥ�� ���

 * 1. cout�� setf() �̿��ϴ� ���
 *   1-1. setf(����)          ���� 1��
 *   1-2. setf(����, ����)    ���� 2��
 * �̵��� setf �� unsetf ���� ���ȴ�.
  
 * 2. flags�� �̿��ϴ� ���
 * cout.flags() ���� ��Ʈ���� ���� �÷��װ� ��� �����Ǿ� �ִ��� ����
 * cout.flags(ios::right) ��Ʈ���� ���� �÷��׸� ���Ӱ� ����

 * 3. �����ڸ� �̿��ϴ� ���
 * #include <iomanip>
-----------------------------------------------------------------------------*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num = 100;

    cout << "----- 1. cout�� setf() �̿��ϴ� ��� ------------------------------------" << endl;
    {
        cout.width(10);
        cout << num << endl;

        // fmtflags Ÿ�� ������� ���� �̿��ϱ�
        cout.setf(ios_base::hex, ios_base::basefield);
        cout.setf(ios_base::showbase); //setf(����)          ���� 1��
        cout << num << endl;

        // ios_base �� ��� ���� ios ������ �� ����鿡 ������ �� �ִ�.
        cout.setf(ios::hex, ios::basefield); //fmtfl ���� �÷��� ��,  mask �ʵ� ��Ʈ����ũ
        cout.setf(ios::showbase); //��Ʈ�� ���� �÷���(format flag)
        cout << num << endl;

        // ���� �̵��� ��ü�� ��� �����ε� ������ �� �ִ�.
        cout.setf(cout.hex, cout.basefield);
        cout.setf(cout.showbase);
        cout << num << endl;

        cout.unsetf(ios_base::basefield | ios::showbase);
        cout << num << endl;
    }

    cout << "----- 2. flags�� �̿��ϴ� ��� ------------------------------------" << endl;
    {
        cout << "(flags, right, hex, showbase)���� ����, ������ ���, 16���� num: ";
        cout.width(10);
        cout.flags(ios::right | ios::hex | ios::showbase);
        cout << num << endl;

        cout << "(flags, left, hex, showbase)���� ����, ������ ���, 16���� num: ";
        cout.width(10);
        cout.flags(ios::left | ios::hex | ios::showbase);
        cout << num << endl;

        // fmtflags�� ���� ���·� ���
        ios_base::fmtflags ff;
        ff = cout.flags();      //���� ��Ʈ���� ���� �÷��װ� ��� �����Ǿ� �ִ��� ����
        ff &= ~cout.basefield;  // basefield ��Ʈ���� �ʱ�ȭ ���ѹ�����.
        ff |= cout.hex;         // hex �� ����
        ff |= cout.showbase;    // showbase �� ����
        cout.flags(ff);
        cout << "(flags, hex, showbase)������ ���, 16���� num: " << num << endl;

        // �Ʒ��� fmtflags Ÿ�� ������� �̿��� ���� �ƴϰ�
        // �̸��� ������ ������ showbase �� �̿��� ���̴�
        cout << hex << showbase << "(hex, showbase)������ ���, 16���� num: " << num << endl;
    }

    cout << "----- 3. �����ڸ� �̿��ϴ� ��� ------------------------------------" << endl;
    {
        //#include <iomanip>
        double dNum01 = 10;
        double dNum02 = 1.23456789;

        cout << right;
        cout << "�� 10�� d_num1 = " << setw(10) << dNum01 << endl;
        cout << "�� 10�� d_num2 = " << setw(10) << dNum02 << endl << endl;

        cout << "�� 10�� ������� #���� ä�� d_num1 = " << setw(10) << setfill('#') << dNum01 << endl;
        cout << "�� 10�� ������� #���� ä�� d_num2 = " << setw(10) << dNum02 << endl << endl;
        
        cout << "�Ҽ��� ǥ��, �Ҽ��� 3°���� ��� " << endl;
        cout << fixed << setprecision(3);
        cout << dNum01 << endl;
        cout << dNum02 << endl;

        cout << "typeid�� �ڷ����̸� ���: " << typeid(num).name();
    }

    return 0;
}

/*
��Ʈ�� ���� �÷���(format flag) �� ���� Ÿ��
�� Ÿ���� flags, setf, unsetf�� ���� �Լ����� ���� Ȥ�� ���� Ÿ�Կ� ���ȴ�.
�̵� �Լ��� ���޵Ǵ� ������ �Ʒ��� ���� ��� ������� ����(OR ����) ���� �̷������.
1-1. setf(����)    ���� 1��
--------------------------------------------------------------------
 1��° ����             ��    ��
 --------------------------------------------------------------------
boolalpha           bool�����͸� ���ڿ��� ��Ÿ����, �׷��� �Է� �޴´�. (true, false)
showbase            ���� ǥ���,������ ����Ѵ�. (0x���� ��)
showpoint           �Ҽ��� ǥ��(.) �� ������ 0 ���� ��� ��� (�⺻ 6�ڸ�)
showpos             ����� ǥ��� + ��ȣ�� ���δ�.
skipws              �Է� �۾��� �տ� ������ ���� ����(whitespace)�� �����Ѵ�
unitbuf             �� ��� �۾� ���� flush �Ѵ�
uppercase           ��� �۾��� �ҹ��ڸ� �빮�ڷ� ����Ѵ�
--------------------------------------------------------------------
*/

/*
1-2. setf(����, ����)    ���� 2��
--------------------------------------------------------------------
 1��° ����              2��° ����  
 --------------------------------------------------------------------
 dec | oct | hex            basefield               
 --------------------------------------------------------------------
 scientific | fixed         floatfield      
 --------------------------------------------------------------------
left | right | internal     adjustfield
*/

/*
[���� ���� ����]
----------------------------------------------------------------------------------------------------------------------------------------------------------
���� ���� (basefield)
                        dec                 ������ 10���� ���·� ����� �Ѵ�
                        hex                 ������ 16���� ���·� ����� �Ѵ�
                        oct                 ������ 8 ���� ���·� ����� �Ѵ�
----------------------------------------------------------------------------------------------------------------------------------------------------------
�ε��Ҽ��� ���� (floatfield)
                        fixed               �ε� �Ҽ��� �����͸� ���� �Ҽ���(fixed-point) ���·� ǥ���Ѵ�
                        scientific          �ε� �Ҽ��� �����͸� ������ ǥ��(scientific notation)�� ����Ѵ�
----------------------------------------------------------------------------------------------------------------------------------------------------------
�ʺ� ���߱� (adjustfield)
                        internal            �ʵ� �ʺ�(field width)�� �°� ä��� ����(fill character)�� �����̵�, ������ Ư�� ������ ���ٿ� ����.
                        left                �ʵ� �ʺ� �°� ä��� ���ڸ� �����̵�, ���ʿ� �����δ�.
                        right               �ʵ� �ʺ� �°� ä��� ���ڸ� �����̵�, �����ʿ� �����δ�.
*/

/*
�Լ���(?)�� ������.

������ �Լ�	 ��� ���
 setfill (char c)	 c ���ڷ� ������ ä��
 setw (int n)	 n ��ŭ �ʵ����� ����(����� �� ���� �����ؾ���)
 setprecision(int n)	 �Ҽ��� n �ڸ����� ǥ��
*/