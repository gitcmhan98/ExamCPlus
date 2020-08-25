#include<iostream>

/*-----------------------------------------------------------------------------
 * Name: 008_Data_Char
 * DESC: ���� �� ���� ���ͷ�(liternal)
 * �̽������� ������(Escape sequence)
-----------------------------------------------------------------------------*/

using namespace std;

int main()
{
	//������   ������     ������     ��������    ���
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
��	        �̽������� ������
==========================
�� �ٲ�	        \n
�齽����	        \\
���� ��	        \t
����ǥ	        ? �Ǵ� \?
���� ��	        \v  - �ܼ��� �������� ���� �۵����� ���� ���� �ֽ��ϴ�
��������ǥ	    \'
�齺���̽�	    \b
ū����ǥ        \"
ĳ���� ����	    \r
null ����	    \0
�� �ǵ�	        \f  - �ܼ��� �������� ���� �۵����� ���� ���� �ֽ��ϴ�(��� ��ġ ���� ����)
8����	        \
���(��)	        \a
16����	        \x
*/


/*
�Ʒ� ó�� ��� ��, �����ʹ� ù�������� "Hello"�� ����ϰ�, ���� �������� "Hi"�� ����մϴ�.

#include<iostream>

using namespace std;

int main(){
  cout<<"Hello\fHi ";
}
*/