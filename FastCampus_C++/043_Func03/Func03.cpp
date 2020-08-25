/*-----------------------------------------------------------------------------
 * Name: 043_Func03
 * DESC: 재귀 호출(recursive call)
 * 함수가 다시 자기 자신을 호출 하는것
 * 단점
 * 재귀 함수는 반복문에 비해 별도로 추가 저장 공간이 필요하다.(함수 주소를 스택에 저장)
 * 그러므로 반복문 비해서 수행 시간이 늘어난다.
 * 호출에 빈도 수가 너무 높으면 스택 오버프로우가 발생할 수 있다.
 * 장점
 * 반복문에 비해 직관적이고 간결한 코드 구성이 가능
 * 비선형 자료 구조(트리 등)에서 순회하는 기능에 유용(언리얼, 유니티에서도 Component탐색등에 유용)
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int Recursive(int);

int main()
{
	int result = 0;

	result = Recursive(5);

	cout << "result:  " << result << endl;

	return 0;
}

int Recursive(int num)
{
	if(num <= 1) return 1;
	return num + Recursive(num - 1);

	/*int total = 0;

	for(int i = 0; i <= num; i++)
	{
		total += i;
	}

	return total;*/
}

/*
for
*/