/*-----------------------------------------------------------------------------
 * Name: cin02
 * DESC: 표준 입력
 * 입력을 받는 가장 기본적인 방법과 입력에 문제점을 해결하기
 * fail, clear, ignore
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	char selCh;

	{
		cout << "숫자를 입력하세요: ";
		cin >> num;		//숫자가 아닌 다른 값이 입력되는 경우 문제점
		if (cin.fail())
		{
			cout << "입력 오류 다시 입력하세요 " << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //입력 버퍼의 최대 크기만큼 무시
			//cin.ignore(INT_MAX, '\n'); //1번째: 무시할 문자 개수, 2번째: 종료할 문자
			cin >> num;
		}
	}

	{
		cin.clear();
		cin.ignore();
		cout << "문자를 입력하세요: ";
		selCh = cin.get();	
		cout << "입력한 값은: " << selCh << endl;
	}

	{
		cout << "숫자를 입력하세요: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //입력 버터의 최대 크기만큼 무시
		cin.setf(ios_base::hex, ios_base::basefield); //입력을 16진수로 처리
		cin >> num;
		cout << "입력을 16진수로 처리값은: num:  " << num << endl;
	}

	return 0;
}

/*
cin.clear	: cin객체의 "내부 상태 플래그"를 초기화 => cin 관련 기능이 정상
cin.fail	: cin 오류시 1을 반환, 정상입력시 0을 반환
cin.ignore	: //1번째: 무시할 문자 개수, 2번째: 종료할 문자

 => 차후에 함수와 반복문을 통해서 아래의 처리를 확인가능
	- 재귀 함수 호출을 통한 입력
	- 무한 반복을 통한 입력
*/

/*
아래의 결과는 문제점을 보여주고 있는 결과들
---------------------------------------------------------
숫자를 입력하세요: frwe
입력한 값은: 0
문자를 입력하세요: 입력한 값은:
---------------------------------------------------------
숫자를 입력하세요 : 43
입력한 값은 : 43
문자를 입력하세요 : 입력한 값은 :
*/
