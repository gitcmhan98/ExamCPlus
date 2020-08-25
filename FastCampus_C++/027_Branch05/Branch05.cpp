/*-----------------------------------------------------------------------------
 * Name: 027_Branch05
 * DESC: 숫자 맞추기 프로그램 Ver0.0.1
 * 코드 자동 완성(Code Snippet): 키워드 + tab
 * 조건식을 이용하여 프로그램의 흐름을 제어
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int main()
{
    int correctNum = 38;
    int inputNum = -1;

    std::cout << "== 숫자를 맞추어 보세요(0 ~ 100) ==";
    std::cin >> inputNum;

    if(correctNum == inputNum)
    {
        std::cout << "정답 입니다!!";
    }
    else if(correctNum > inputNum)
    {
        std::cout << "입력값이 정답보다 작아요!!";
    }
    else
    {
        std::cout << "입력값이 정답보다 커요!!";
    }

    return 0;
}