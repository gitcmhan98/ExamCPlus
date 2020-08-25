#include<iostream>

/*-----------------------------------------------------------------------------
 * Name: 008_Data_Char
 * DESC: 문자 및 문자 리터럴(liternal)
 * 이스케이프 시퀀스(Escape sequence)
-----------------------------------------------------------------------------*/

using namespace std;

int main()
{
	//이진법   팔진법     십진법     십육진법    모양
	//1000001   101	        65	       \x41	    A   
	char chA = 'A';
	cout << chA << endl;
	char ch02 = 1000001;
	cout << "ch02(1000001): " << ch02 << endl;

	char ch08 = '\101';
	cout << "ch08(\'101\'): " << ch08 << endl;

	char ch10 = 65;
	cout << "ch10(65): " << ch10 << endl;

	char ch16 = '\x41';
	cout << "ch16(\'x41\'): " << ch16 << endl;

	cout << '\n' << '\n';

	char alert = '\a';
	char newline = '\n';
	char tab = '\t';
	char backspace = '\b';
	char backslash = '\\';
	char nullChar = '\0';
	char singleQuotation = '\'';
	char doubleQuotation = '\"';

	cout << "Newline character: " << newline << "ending" << endl;
	cout << "Newline character: " << newline << "ending" << endl;
	cout << "Tab character: " << tab << "ending" << endl;
	cout << "Backspace character: " << backspace << "ending" << endl;
	cout << "Backslash character: " << backslash << "Hello" << backslash << endl;
	cout << "Null character: " << nullChar << "ending" << endl;
	cout << "Single quotation: " << singleQuotation << "Hello" << singleQuotation << "ending" << endl;
	cout << "Dingle quotation: " << doubleQuotation << "Hello" << doubleQuotation << "ending" << endl;
}

/*
A
ch02(1000001): A
ch08('101'): A
ch10(65): A
ch16('x41'): A


Newline character:
ending
Newline character:
ending
Tab character:  ending
Backspace character:ending
Backslash character: \Hello\
Null character:  ending
Single quotation: 'Hello'ending
Dingle quotation: "Hello"ending
*/

/*
값	        이스케이프 시퀀스
==========================
줄 바꿈	        \n
백슬래시	        \\
가로 탭	        \t
물음표	        ? 또는 \?
세로 탭	        \v  - 콘솔이 이해하지 못해 작동하지 않을 수도 있습니다
작은따옴표	    \'
백스페이스	    \b
큰따옴표        \"
캐리지 리턴	    \r
null 문자	    \0
폼 피드	        \f  - 콘솔이 이해하지 못해 작동하지 않을 수도 있습니다(출력 장치 제어 문자)
8진수	        \
경고(벨)	        \a
16진수	        \x
*/


/*
아래 처럼 사용 시, 프린터는 첫페이지에 "Hello"를 출력하고, 다음 페이지에 "Hi"를 출력합니다.

#include<iostream>

using namespace std;

int main(){
  cout<<"Hello\fHi ";
}
*/