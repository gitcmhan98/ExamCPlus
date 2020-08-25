/*-----------------------------------------------------------------------------
 * Name: 분리 컴파일(Separate Compilation)
 * DESC: 복잡한 프로젝트의 경우 여러개의 파일로 분리해서 프로젝트 진행
 * 1. 컴파일 시간을 줄일 수 있다.(변경된 코드만 컴파일 하기 떄문에)
 * 2. 다른 프로그래머와 협업에서 서로 동시에 같은 코드를 변경하는 문제를 해결
 * header files, source files로 분리(.h, .cpp)
 * 차후에 사용자 자료형에서 선언부 & 구현부를 분리
-----------------------------------------------------------------------------*/
#include <iostream>
#include <string>

#include "Add.h"
#include "print.h"

using namespace std;

int main()
{
    Print("Hello World");

    int num = Add(10, 10);

    cout << num << endl;

    Print(100, 100);

    return 0;
}

// 차후에 클래스에서 좀 더 다양한 예제를 사용 한다.

/* 분리 컴파일 주의점
- 디폴트 파라미는 선언부에..
- 정적 멤버 변수와 정적 멤버 함수(static)는 선언부에.. => 구현부에도 static를 사용하면 C의 static로 인식
- const 키워드는 선언부와 구현부 모두
- virtual은 선언부(구현부 X)
- inline, template 키워드는 모두 헤더파일에 구현과 선언을 동시에 처리
*/