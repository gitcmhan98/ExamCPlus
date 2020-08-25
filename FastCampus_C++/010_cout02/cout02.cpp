/*-----------------------------------------------------------------------------
 * Name: cout02
 * DESC: 표준 출력

 * 1. cout의 setf() 이용하는 방법
 *   1-1. setf(인자)          인자 1개
 *   1-2. setf(인자, 인자)    인자 2개
 * 이들은 setf 나 unsetf 에서 사용된다.
  
 * 2. flags를 이용하는 방법
 * cout.flags() 현재 스트림의 서식 플래그가 어떻게 설정되어 있는지 리턴
 * cout.flags(ios::right) 스트림의 서식 플래그를 새롭게 설정

 * 3. 조정자를 이용하는 방법
 * #include <iomanip>
-----------------------------------------------------------------------------*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num = 100;

    cout << "----- 1. cout의 setf() 이용하는 방법 ------------------------------------" << endl;
    {
        cout.width(10);
        cout << num << endl;

        // fmtflags 타입 상수들을 직접 이용하기
        cout.setf(ios_base::hex, ios_base::basefield);
        cout.setf(ios_base::showbase); //setf(인자)          인자 1개
        cout << num << endl;

        // ios_base 를 상속 받은 ios 에서도 이 멤버들에 접근할 수 있다.
        cout.setf(ios::hex, ios::basefield); //fmtfl 서식 플래그 값,  mask 필드 비트마스크
        cout.setf(ios::showbase); //스트림 서식 플래그(format flag)
        cout << num << endl;

        // 역시 이들을 객체의 멤버 상수들로도 접근할 수 있다.
        cout.setf(cout.hex, cout.basefield);
        cout.setf(cout.showbase);
        cout << num << endl;

        cout.unsetf(ios_base::basefield | ios::showbase);
        cout << num << endl;
    }

    cout << "----- 2. flags를 이용하는 방법 ------------------------------------" << endl;
    {
        cout << "(flags, right, hex, showbase)우측 정렬, 진법을 명시, 16진수 num: ";
        cout.width(10);
        cout.flags(ios::right | ios::hex | ios::showbase);
        cout << num << endl;

        cout << "(flags, left, hex, showbase)좌측 정렬, 진법을 명시, 16진수 num: ";
        cout.width(10);
        cout.flags(ios::left | ios::hex | ios::showbase);
        cout << num << endl;

        // fmtflags를 변수 형태로 사용
        ios_base::fmtflags ff;
        ff = cout.flags();      //현재 스트림의 서식 플래그가 어떻게 설정되어 있는지 리턴
        ff &= ~cout.basefield;  // basefield 비트들을 초기화 시켜버린다.
        ff |= cout.hex;         // hex 를 설정
        ff |= cout.showbase;    // showbase 를 설정
        cout.flags(ff);
        cout << "(flags, hex, showbase)진법을 명시, 16진수 num: " << num << endl;

        // 아래는 fmtflags 타입 멤버들을 이용한 것은 아니고
        // 이름이 동일한 조작자 showbase 를 이용한 것이다
        cout << hex << showbase << "(hex, showbase)진법을 명시, 16진수 num: " << num << endl;
    }

    cout << "----- 3. 조정자를 이용하는 방법 ------------------------------------" << endl;
    {
        //#include <iomanip>
        double dNum01 = 10;
        double dNum02 = 1.23456789;

        cout << right;
        cout << "폭 10인 d_num1 = " << setw(10) << dNum01 << endl;
        cout << "폭 10인 d_num2 = " << setw(10) << dNum02 << endl << endl;

        cout << "폭 10에 빈공간을 #으로 채움 d_num1 = " << setw(10) << setfill('#') << dNum01 << endl;
        cout << "폭 10에 빈공간을 #으로 채움 d_num2 = " << setw(10) << dNum02 << endl << endl;
        
        cout << "소수점 표기, 소수점 3째까지 출력 " << endl;
        cout << fixed << setprecision(3);
        cout << dNum01 << endl;
        cout << dNum02 << endl;

        cout << "typeid로 자료형이름 출력: " << typeid(num).name();
    }

    return 0;
}

/*
스트림 서식 플래그(format flag) 를 위한 타입
이 타입은 flags, setf, unsetf와 같은 함수들의 인자 혹은 리턴 타입에 사용된다.
이들 함수에 전달되는 값들은 아래와 같은 멤버 상수들의 조합(OR 연산) 으로 이루어진다.
1-1. setf(인자)    인자 1개
--------------------------------------------------------------------
 1번째 인자             설    명
 --------------------------------------------------------------------
boolalpha           bool데이터를 문자열로 나타내고, 그렇게 입력 받는다. (true, false)
showbase            정수 표기시,진법을 명시한다. (0x같은 것)
showpoint           소수점 표시(.) 과 생략된 0 들을 모두 출력 (기본 6자리)
showpos             양수를 표기시 + 부호를 붙인다.
skipws              입력 작업시 앞에 나오는 공백 문자(whitespace)를 무시한다
unitbuf             매 출력 작업 마다 flush 한다
uppercase           출력 작업시 소문자를 대문자로 출력한다
--------------------------------------------------------------------
*/

/*
1-2. setf(인자, 인자)    인자 2개
--------------------------------------------------------------------
 1번째 인자              2번째 인자  
 --------------------------------------------------------------------
 dec | oct | hex            basefield               
 --------------------------------------------------------------------
 scientific | fixed         floatfield      
 --------------------------------------------------------------------
left | right | internal     adjustfield
*/

/*
[위에 인자 설명]
----------------------------------------------------------------------------------------------------------------------------------------------------------
진법 관련 (basefield)
                        dec                 정수를 10진수 형태로 입출력 한다
                        hex                 정수를 16진수 형태로 입출력 한다
                        oct                 정수를 8 진수 형태로 입출력 한다
----------------------------------------------------------------------------------------------------------------------------------------------------------
부동소수점 관련 (floatfield)
                        fixed               부동 소수점 데이터를 고정 소수점(fixed-point) 형태로 표기한다
                        scientific          부동 소수점 데이터를 과학적 표기(scientific notation)로 출력한다
----------------------------------------------------------------------------------------------------------------------------------------------------------
너비 맞추기 (adjustfield)
                        internal            필드 너비(field width)에 맞게 채우기 문자(fill character)을 덧붙이되, 내부의 특정 지점에 덧붙여 진다.
                        left                필드 너비에 맞게 채우기 문자를 덧붙이되, 왼쪽에 덧붙인다.
                        right               필드 너비에 맞게 채우기 문자를 덧붙이되, 오른쪽에 덧붙인다.
*/

/*
함수형(?)의 조정자.

조정자 함수	 사용 결과
 setfill (char c)	 c 문자로 여백을 채움
 setw (int n)	 n 만큼 필드폭을 지정(사용할 때 마다 지정해야함)
 setprecision(int n)	 소수점 n 자리까지 표시
*/