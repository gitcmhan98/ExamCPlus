/*-----------------------------------------------------------------------------
 * Name: 040_CheckPoint
 * DESC: NumberRun(���� �޸���) Ver0.0.1
 * ȭ�鿡 �������� ���� ����
-----------------------------------------------------------------------------*/
#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;

int main()
{
    //                0,   1,  2,   3,   4,   5,    6,   7
    char tile[] = { ' ', '-', '|', '1' ,'2', '3', '4', '5' };

    int map[7][25] =
    {
      //col  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24   row
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, //0
            {3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0}, //1
            {4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0}, //2
            {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0}, //3
            {6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0}, //4
            {7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0}, //5
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, //6
    };

    int arrIndexX[5] = { 0, 0, 0, 0, 0 }; //{ };
    bool isFinish = false;  //������ ����..

    while(true)
    {
        system("cls");

        for(int i = 1; i < 6; i++) //1 ~ 5
        {
            int index = i - 1;
            int indexValue = arrIndexX[index];

            int temp = map[i][indexValue];
            map[i][indexValue + 1] = temp;
            map[i][indexValue] = 0;
        }

        srand(time(0));
        int selectIndex = rand() % 5; //0 ~ 4
        arrIndexX[selectIndex]++;

        int selectRow = selectIndex + 1;
        int indexCol = arrIndexX[selectIndex];

        int temp = map[selectRow][indexCol];
        map[selectRow][indexCol + 1] = temp;
        map[selectRow][indexCol] = 0;

        for(int i = 0; i < 7; i++)
        {
            for(int j = 0; j < 25; j++)
            {
             /*   int tileIndex = map[i][j];
                cout << tile[tileIndex];*/
                cout << tile[map[i][j]]; 
            }
            cout << endl;
        }

        for(int i = 0; i < 5; i++)
        {
            if(arrIndexX[i] >= 22) //0 -> 1, 1 -> 2
            {
                cout << (i + 1) << "���� 1��" << endl;
                isFinish = true; //for���� break;
                break; //for..
            }
        }

        if(isFinish) break; //while���� break;

        for(int i = 0; i < 5; i++)
            arrIndexX[i]++;

        Sleep(500); //#include <Windows.h>
    }

    return 0;
}