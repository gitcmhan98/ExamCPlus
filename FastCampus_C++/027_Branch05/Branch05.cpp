/*-----------------------------------------------------------------------------
 * Name: 027_Branch05
 * DESC: ���� ���߱� ���α׷� Ver0.0.1
 * �ڵ� �ڵ� �ϼ�(Code Snippet): Ű���� + tab
 * ���ǽ��� �̿��Ͽ� ���α׷��� �帧�� ����
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

int main()
{
    int correctNum = 38;
    int inputNum = -1;

    std::cout << "== ���ڸ� ���߾� ������(0 ~ 100) ==";
    std::cin >> inputNum;

    if(correctNum == inputNum)
    {
        std::cout << "���� �Դϴ�!!";
    }
    else if(correctNum > inputNum)
    {
        std::cout << "�Է°��� ���亸�� �۾ƿ�!!";
    }
    else
    {
        std::cout << "�Է°��� ���亸�� Ŀ��!!";
    }

    return 0;
}