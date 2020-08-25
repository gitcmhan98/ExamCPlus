/*-----------------------------------------------------------------------------
 * Name: 032_Loop05
 * break, continue 키워드
 -----------------------------------------------------------------------------*/
#include <iostream>

int main()
{
    {
        int num = 0;

        while(true) //무한루프..
        {
            std::cout << "num:  " << num << std::endl;
            num++;
            if(num == 10)
                break;
        }
        std::cout << "while break" << std::endl;
    }

    {
        for(int i = 0; i < 10; i++)
        {
            std::cout << std::endl << "i: " << i;

            if(i < 5)
                continue;

            std::cout << std::endl << "continue(false) i: " << i;
        }
    }

    return 0;
}

/* Result
num:  0
num:  1
num:  2
num:  3
num:  4
num:  5
num:  6
num:  7
num:  8
num:  9
while break

i: 0
i: 1
i: 2
i: 3
i: 4
i: 5
continue(false) i: 5
i: 6
continue(false) i: 6
i: 7
continue(false) i: 7
i: 8
continue(false) i: 8
i: 9
continue(false) i: 9
*/

//반복문
//1
//2
//3
//4 (조건: continue, break)
//5
//6
