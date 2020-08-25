/*-----------------------------------------------------------------------------
 * Name: 028_Loop01
 * DESC: 반복문(while)
 * 반복문을 이용하여 프로그램의 흐름제어 및 반복적인 Process 처리
 * 프로그램에서 가장 많이 사용되는 키워드
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int main()
{
    int num = 0;

    while (num <= 5)
    {
        cout << "num: " << num << endl;
        ++num;
    }
    
    //(Infinite loops)
    while (num >= 5)
    {
        cout << "num: " << num << endl;
        //--num; //반복문을 빠져나갈 수 있도록 처리해야만 한다.
    }

    return 0;
}


/* Result
num: 0
num: 1
num: 2
num: 3
num: 4
num: 5
num: 6
num: 5
num: 6
num: 6
num: 6
.....
(Infinite loops)
*/


/*
         (while)
            *
          *   *
        *       *     (else)
   →→ *   조건    * →→ FALSE ─ "거짓인 경우 실행" ──┐
   ↑↑   *       *                                 ↓↓
   ↑↑     *   *                                   ↓↓
   ↑↑       *                                     ↓↓
   ↑↑       ↓                                     ↓↓
   ↑↑       ↓                                     ↓↓         
   ↑↑     TRUE                                    ↓↓                                  
   ↑↑      ↓↓                                     ↓↓         
   ↑↑      ↓↓                                     ↓↓         
    ←← "참인 경우 실행" XXXXXXX                   →→→→→→→→→→→→→→→→→→

*/

/*

while(조건식)
{
    조건식이 참인 경우 실행
}

주의: 조건식이 반드시 false인 상황(반복 종료)되는 것에 주의
만약, 종료되는 구간이 없다면 무한루프가 된다.

int num = 0;    //1: 초기식
while(num < 3)  //2: 조건식
{
    num++;      //3: 증감식  
    ...
}

==> for문으로 변환
for(int num = 0; num < 3; num++)  for(1: 초기식; 2: 조건식; 3: 증감식)
{
    ...
}

*/