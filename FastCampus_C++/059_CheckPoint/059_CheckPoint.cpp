/*-----------------------------------------------------------------------------
 * Name: 059_CheckPoint
 * DESC: ���� ������ ���� �Ҵ� & �Լ�
-----------------------------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS //#pragma warning(disable : 4996)
#include <iostream>

using namespace std;

void InputObject(int*, int*, char**, int);
void PrintObject(int*, int*, char**, int);

int main()
{
	cout << "���� �Ҵ� CheckPoint" << endl;

	int* mp;
	int* hp;
	char** charName;

	int size = 0;

	cout << "��� ������Ʈ�� �����ұ��?";
	cin >> size;

	mp = new int[size];
	hp = new int[size];
	charName = new char* [size];

	InputObject(mp, hp, charName, size);
    PrintObject(mp, hp, charName, size);

	delete[] mp;
	delete[] hp;

	for (int i = 0; i < size; i++)
	{
		delete[] charName[i];
	}
	delete[] charName;
}

void PrintObject(int* pMp, int* pHp, char** pName, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        //cout << pMp[i] << endl;
        //cout << pHp[i] << endl;
        //cout << pName[i] << endl;

        cout << *(pMp + i) << endl;
        cout << *(pHp + i) << endl;
        cout << *(pName + i) << endl;
    }
}

void InputObject(int* pMp, int* pHp, char** pName, int size)
{
    for (int i = 0; i < size; i++)
    {
        int inputHP = 0;

        cout << "HP�Է�?";

        cin >> inputHP;

        pHp[i] = inputHP;

        cout << "MP�Է�?";
        cin >> pMp[i];

        char str[100];
        cout << "�̸�?";
        cin >> str;

        pName[i] = new char[strlen(str) + 1];
        strcpy(pName[i], str);
    }
}

/* Result
���� �Ҵ� CheckPoint
��� ������Ʈ�� �����ұ��?3
HP�Է�?100
MP�Է�?100
�̸�?aaaa
HP�Է�?50
MP�Է�?50
�̸�?bbbb
HP�Է�?5
MP�Է�?4
�̸�?fffffff
100
100
aaaa
50
50
bbbb
4
5
fffffff
*/