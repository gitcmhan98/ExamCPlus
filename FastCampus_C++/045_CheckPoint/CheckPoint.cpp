/*-----------------------------------------------------------------------------
 * Name: 045_CheckPoint
 * DESC: 비트 연산으로 옵션값 제어하기
 * Byte크기로 8개의 옵션값을 제어 가능!!!
 * 데이터 크기(종류)에 따라서 더 많은 옵션값을 제어할 수 있음.
 * Result 결과값을 보고 직접 구현하기
-----------------------------------------------------------------------------*/
#include<iostream>

using namespace std;

unsigned char GAME_OPTION_A = 0x01;   //0000 0001
unsigned char GAME_OPTION_B = 0x02;   //0000 0010
unsigned char GAME_OPTION_C = 0x04;   //0000 0100
unsigned char GAME_OPTION_D = 0x08;   //0000 1000
unsigned char GAME_OPTION_E = 0x10;   //0001 0000
unsigned char GAME_OPTION_F = 0x20;   //0010 0000
unsigned char GAME_OPTION_G = 0x40;   //0100 0000
unsigned char GAME_OPTION_H = 0x80;   //1000 0000

bool IsBitCal(unsigned char a, unsigned char option)
{
    return option == (a & option); //0001 0001  & 0000 0001 = 0000 0001
    
    //0000 0101 & 0000 0001 = (0000 0000 == GAME_OPTION_A = 0x01;   //0000 0001)
    //0000 0101 & 0000 0010 = (0000 0100 != GAME_OPTION_B = 0x01;   //0000 0001)
    //0000 0101 & 0000 0100 = (0000 0100 == GAME_OPTION_C = 0x04;   //0000 0100)
}

void Print(bool isOn, const char* option)
{
    if (isOn)
        cout << option << "  TRUE" << endl;
    else
        cout << option << "  FALSE" << endl;
}

void ViewStateOption(unsigned char curOption)
{
    Print(IsBitCal(curOption, GAME_OPTION_A), "GAME_OPTION_A");
    Print(IsBitCal(curOption, GAME_OPTION_B), "GAME_OPTION_B");
    Print(IsBitCal(curOption, GAME_OPTION_C), "GAME_OPTION_C");
    Print(IsBitCal(curOption, GAME_OPTION_D), "GAME_OPTION_D");
    Print(IsBitCal(curOption, GAME_OPTION_E), "GAME_OPTION_E");
    Print(IsBitCal(curOption, GAME_OPTION_F), "GAME_OPTION_F");
    Print(IsBitCal(curOption, GAME_OPTION_G), "GAME_OPTION_G");
    Print(IsBitCal(curOption, GAME_OPTION_H), "GAME_OPTION_H");

    cout << endl;
}

int main()
{
    unsigned char curOption = 0x00;

    curOption = GAME_OPTION_A | GAME_OPTION_C; //0000 0001 | 0000 0100 = 0000 0101
    ViewStateOption(curOption);

    curOption = GAME_OPTION_A | GAME_OPTION_C | GAME_OPTION_H;
    ViewStateOption(curOption);

    curOption = GAME_OPTION_E | GAME_OPTION_F | GAME_OPTION_G;
    ViewStateOption(curOption);

    if (IsBitCal(curOption, GAME_OPTION_G))
    {
        cout << "사운드 출력 ON" << endl;
    }

    return 0;
}

/* Result

GAME_OPTION_A  TRUE
GAME_OPTION_B  FALSE
GAME_OPTION_C  TRUE
GAME_OPTION_D  FALSE
GAME_OPTION_E  FALSE
GAME_OPTION_F  FALSE
GAME_OPTION_G  FALSE
GAME_OPTION_H  FALSE

GAME_OPTION_A  TRUE
GAME_OPTION_B  FALSE
GAME_OPTION_C  TRUE
GAME_OPTION_D  FALSE
GAME_OPTION_E  FALSE
GAME_OPTION_F  FALSE
GAME_OPTION_G  FALSE
GAME_OPTION_H  TRUE

GAME_OPTION_A  FALSE
GAME_OPTION_B  FALSE
GAME_OPTION_C  FALSE
GAME_OPTION_D  FALSE
GAME_OPTION_E  TRUE
GAME_OPTION_F  TRUE
GAME_OPTION_G  TRUE
GAME_OPTION_H  FALSE


*/