/*-----------------------------------------------------------------------------
 * Name: 026_Branch04
 * DESC: 조건문(switch) - int형으로 표현가능한 값만 사용(제한적으로 사용 가능)
 * 코드 자동 완성(Code Snippet): 키워드(switch) + tab
 * 조건식을 이용하여 프로그램의 흐름을 제어
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

switch(입력값)
{
    case A:  
        입력값이 A이면 실행
        break;

   case B:
        입력값이 B이면 실행
        break;

     .....

    default:
        위에 어떤 값도 일치하지 않으면 실행
        break;
}

*/