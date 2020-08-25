/*-----------------------------------------------------------------------------
 * Name: 033_Loop06
 * DESC: 숫자 맞추기 프로그램 Ver0.0.2 (027_Branch05)
 * 코드 자동 완성(Code Snippet): 키워드 + tab
 * 조건식을 이용하여 프로그램의 흐름을 제어
 * 반복적으로 실행하도록 기능 추가
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int main()
{
    int correctNum = 38;
    int inputNum = -1;
    int nCount = 0;

    while(true)
    {
        cout << "== 숫자를 맞추어 보세요(1 ~ 100): 나가기는 0번 ==";
        cin >> inputNum;

        if(inputNum == 0 || nCount >= 10) break;

        if(correctNum == inputNum)
        {
            cout << "정답 입니다!!";
            break;
        }
        else if(correctNum > inputNum)
        {
            cout << "입력값이 작아요!!";
        }
        else
        {
            cout << "입력값이 커요!!";
        }

        cout << endl;
        nCount++;
        cout << "Count:" << nCount << endl;

    } //while

    cout << "\n프로그램 종료";

    return 0;
}
