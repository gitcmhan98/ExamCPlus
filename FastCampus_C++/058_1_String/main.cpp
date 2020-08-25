/*-----------------------------------------------------------------------------
 * Name: String01
 * DESC: ��Ʈ�� ���� ���� ����
 * #include<string>
-----------------------------------------------------------------------------*/

#include <iostream>
#include<string>

using namespace std;

int main()
{
    string title = "String Class ����ϱ�";
    cout << title << endl;

    {
        string str1 = "abcd efgh";
        cout << "length() �Լ�" << endl;

        cout << "str1 ����(length): " << str1.length() << endl;
        cout << "str1 ����(size): " << str1.size() << endl;
        cout << "str1 " << str1[0] << str1[1] << str1[2] << str1[3] << endl;
    }

    {
        string str1 = "abcd efgh";
        string str2;

        str2 = str1;
        cout << "\n = ���Կ�����" << endl;
        cout << str2 << endl;

        cout << "\n +- ������" << endl;
        str2 += " Hello World";
        cout << str2 << endl;

        cout << "\n append()" << endl;
        str2.append("!!!");
        cout << str2 << endl;
        str2.erase();
        str2.append("xyz", 0, 2); //���ڿ�.append(�߰��ҹ��ڿ�, ������ġ, ����);
        cout << str2 << endl;
        str2.append(4, '#');
        cout << str2 << endl;
    }

    {
        cout << "find()�Լ�";

        string str3;

        if (str3.find("abc") != string::npos)  //string::npos ã�� ���ڿ��� ���� ��� ����..
        {
            cout << "Find abc: " << str3 << endl;
        }
        else
        {
            cout << "Not Find abc: " << str3 << endl;
        }
    }

    {
        cout << "replace()�Լ�";

        string str1 = "Hello World";
        cout << "replace()" << endl;
        cout << str1 << endl;

        int index = str1.find("Hello");

        if (index != string::npos) //string::npos ã�� ���ڿ��� ���� ��� ����..
        {
            str1.replace(index, 5, "-");
            cout << str1 << endl;
        }
    }

    return 0;
}