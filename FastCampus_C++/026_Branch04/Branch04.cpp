/*-----------------------------------------------------------------------------
 * Name: 026_Branch04
 * DESC: ���ǹ�(switch) - int������ ǥ�������� ���� ���(���������� ��� ����)
 * �ڵ� �ڵ� �ϼ�(Code Snippet): Ű����(switch) + tab
 * ���ǽ��� �̿��Ͽ� ���α׷��� �帧�� ����
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int main()
{
    {
        int num = 100;

        switch (num)
        {
            case 100:
                cout << "100" << endl;
                break;

            case 80:
                cout << "80" << endl;
            break;

            default:
                cout << "000000" << endl;
                break;
        }
    }

    {
        int total = 30;
        int grade = total / 10;

        switch (grade)
        {
        case 9:
        case 8:
            cout << "A" << endl;
            break;

        case 7:
        case 6:
            cout << "B" << endl;
            break;

        case 5:
        case 4:
            cout << "C" << endl;
            break;

        default:
            cout << "F" << endl;
            break;
        }
    }

    return 0;
}

/* Result
100
F
*/

/*

switch(�Է°�)
{
    case A:  
        �Է°��� A�̸� ����
        break;

   case B:
        �Է°��� B�̸� ����
        break;

     .....

    default:
        ���� � ���� ��ġ���� ������ ����
        break;
}

*/