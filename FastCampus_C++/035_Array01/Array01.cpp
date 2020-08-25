/*-----------------------------------------------------------------------------
 * Name: 035_Array01
 * DESC: 1차원 배열 기초
 * 같은 데이터형의 변수들로 이루어진 집합(collection)
 * 첨자연산자([])  ⇒ postfix-expression [expression]
 * 1: 배열의 길이는 반드시 상수를 사용
 * 2: 배열의 요소는 0부터 시작(위치를 가리키는 숫자를 인덱스(index)라고 표현)

 * 장점: 많은 양의 데이터를 일괄적으로 처리하는데 유용
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int main()
{
    const int ARRAY_NUM = 5;
    int arrayNums[ARRAY_NUM];

    //출력하기(선언만 하고 초기화하지 않으면, 모든 배열 요소에 디폴트값으로 초기화)
    for (int i = 0; i < ARRAY_NUM; i++)
    {
        cout << "[" << i << "]: " << arrayNums[i] << endl;
    }

    //배열에 값을 넣기
    {
        arrayNums[0] = 0;
        arrayNums[1] = 1;
        arrayNums[2] = 2;
        arrayNums[3] = 3;
        arrayNums[4] = 4; 

        //arrayNums[5] = 5; //에러없음!! 단, 런타임에 에러 발생!! 주의!!
    }

    //출력하기
    for (int i = 0; i < ARRAY_NUM; i++)
    {
        cout << "[" << i << "]: " << arrayNums[i] << endl;
    }

    //배열에 값을 넣기(for문 이용)
    {
        for (int i = 0; i < ARRAY_NUM; i++)
        {
            arrayNums[i] = i * 10;
        }
    }
    
    //출력하기
    for (int i = 0; i < ARRAY_NUM; i++)
    {
        cout << "[" << i << "]: " << arrayNums[i] << endl;
    }

    return 0;
}


/*  Result
0: -858993460
1: -858993460
2: -858993460
3: -858993460
4: -858993460
0: 0
1: 10
2: 20
3: 30
4: 40
*/

/*
문법: 데이터 타입  “배열이름”  [배열 길이] (ex: int arrNum[3])
int arrNum[5]
    
     [0]   [1]   [2]   [3]   [4]    "인덱스(index)로 해당 배열 요소를 참조"
   ┌─────┬─────┬─────┬─────┬─────┐
   │  5  │  6  │  7  │  8  │  9  │  이처럼 순차적으로 연결되어 있는 데이터 모음
   └─────┴─────┴─────┴─────┴─────┘

아래 표처럼 배열의 이름은 "배열이름은 곧 주소"이다.
차후에 포인터와 연동해서 사용하는 것에 집중하면 된다.
                
                               int arrNum[3]
                             Address│   메모리
                            ────────┼────────────────────
 arrNum →→→ arrNum[0] →→→     0x00  │
                              0x01  │
                              0x02  │      0
                              0x03  │
                            ────────┼────────────────────
            arrNum[1] →→→     0x04  │
                              0x05  │
                              0x06  │      1
                              0x07  │
                            ────────┼────────────────────
            arrNum[2] →→→     0x08  │
                              0x09  │
                              0x10  │      2
                              0x11  │
                            ────────┼────────────────────
*/

/*
 만약, 배열이 없다면 이런 순차적인 데이터를 처리해야 한다면 기존에 학습한 것으로만 한다면...
 int num1;
 int num2;
 int num3;
 int num4;
 int num5;
 int num6;
 int num7;

 int num1 = 0;
 int num2 = 0;
 ...
 int num7 = 0;

 cout << "num1: << num1 << endl;
 cout << "num2: << num2 << endl;
 ...
 cout << "num7: << num7 << endl;

 ==> 결과적으로 반복문을 통해서 데이터를 제어하는 것이 불가능하다. 
*/