/*-----------------------------------------------------------------------------
 * Name: 040_CheckPoint
 * DESC: NumberRun(숫자 달리기) Ver0.0.1
 * 화면에 보여지는 것을 제어
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
    bool isFinish = false;  //루프를 제어..

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
                cout << (i + 1) << "번이 1등" << endl;
                isFinish = true; //for문에 break;
                break; //for..
            }
        }

        if(isFinish) break; //while문에 break;

        for(int i = 0; i < 5; i++)
            arrIndexX[i]++;

        Sleep(500); //#include <Windows.h>
    }

    return 0;
}