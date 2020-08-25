/*-----------------------------------------------------------------------------
 * Name: String01
 * DESC: 스트링 관련 예제 모음
 * #include<string>
-----------------------------------------------------------------------------*/

#include <iostream>
#include<string>

using namespace std;

int main()
{
    string title = "String Class 사용하기";
    cout << title << endl;

    {
        string str1 = "abcd efgh";
        cout << "length() 함수" << endl;

        cout << "str1 길이(length): " << str1.length() << endl;
        cout << "str1 길이(size): " << str1.size() << endl;
        cout << "str1 " << str1[0] << str1[1] << str1[2] << str1[3] << endl;
    }

    {
        string str1 = "abcd efgh";
        string str2;

        str2 = str1;
        cout << "\n = 대입연산자" << endl;
        cout << str2 << endl;

        cout << "\n +- 연산자" << endl;
        str2 += " Hello World";
        cout << str2 << endl;

        cout << "\n append()" << endl;
        str2.append("!!!");
        cout << str2 << endl;
        str2.erase();
        str2.append("xyz", 0, 2); //문자열.append(추가할문자열, 시작위치, 개수);
        cout << str2 << endl;
        str2.append(4, '#');
        cout << str2 << endl;
    }

    {
        cout << "find()함수";

        string str3;

        if (str3.find("abc") != string::npos)  //string::npos 찾는 문자열이 없는 경우 리턴..
        {
            cout << "Find abc: " << str3 << endl;
        }
        else
        {
            cout << "Not Find abc: " << str3 << endl;
        }
    }

    {
        cout << "replace()함수";

        string str1 = "Hello World";
        cout << "replace()" << endl;
        cout << str1 << endl;

        int index = str1.find("Hello");

        if (index != string::npos) //string::npos 찾는 문자열이 없는 경우 리턴..
        {
            str1.replace(index, 5, "-");
            cout << str1 << endl;
        }
    }

    return 0;
}