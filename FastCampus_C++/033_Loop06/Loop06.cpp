/*-----------------------------------------------------------------------------
 * Name: 033_Loop06
 * DESC: ���� ���߱� ���α׷� Ver0.0.2 (027_Branch05)
 * �ڵ� �ڵ� �ϼ�(Code Snippet): Ű���� + tab
 * ���ǽ��� �̿��Ͽ� ���α׷��� �帧�� ����
 * �ݺ������� �����ϵ��� ��� �߰�
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int main()
{
    int correctNum = 38;
    int inputNum = -1;
    int nCount = 0;

    while(true)
    {
        cout << "== ���ڸ� ���߾� ������(1 ~ 100): ������� 0�� ==";
        cin >> inputNum;

        if(inputNum == 0 || nCount >= 10) break;

        if(correctNum == inputNum)
        {
            cout << "���� �Դϴ�!!";
            break;
        }
        else if(correctNum > inputNum)
        {
            cout << "�Է°��� �۾ƿ�!!";
        }
        else
        {
            cout << "�Է°��� Ŀ��!!";
        }

        cout << endl;
        nCount++;
        cout << "Count:" << nCount << endl;

    } //while

    cout << "\n���α׷� ����";

    return 0;
}
