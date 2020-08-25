/*-----------------------------------------------------------------------------
 * Name: Operators10
 * DESC: 연사자를 이용하는 간단한 프로그램을 작성(단, 예외처리는 제외)
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
	int nKor = 0;
	int nEng = 0;
	int nMat = 0;
	int nTotal = 0;
	float fAvg = 0;
	float fNum = 3.0f;

	cout << "국어 점수 입력";
	cin >> nKor;
	cout << "영어 점수 입력";
	cin >> nEng;
	cout << "수학 점수 입력";
	cin >> nMat;

	nTotal = nKor + nEng + nMat;
	fAvg = nTotal / fNum;

	cout << "총점: " << nTotal << endl;
	cout << "평균: " << fAvg << endl;

	return 0;
}