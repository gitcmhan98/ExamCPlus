/*-----------------------------------------------------------------------------
 * Name: [Bonus]_Template02 - 사용자 자료형(struct, class)
 * DESC:  template(형, 틀)
 * 일반화 프로그램 - 재사용성과 편의성
 * C++에 STL을 구현하는 대표적 문법 요소
 * 함수 탬플릿, 클래스 탬플릿
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

template<typename T>
T Min(T a, T b)
{
    cout << "Min typeid " << typeid(T).name() << endl;

    return (a > b) ? b : a;
}

template<typename T>
void Swap(T& refA, T& refB)
{
    cout << "Swap typeid " << typeid(T).name() << endl;

    T temp;
    temp = refB;
    refB = refA;
    refA = temp;
}

struct SData
{
    int i;
    SData(int _i) { i = _i; }

    bool operator > (SData& refSData)
    {
        std::cout << "operator >" << endl;

        return (i > refSData.i);
    }
};

class CData
{
private:
    int num;
    float fNum;

public:
    CData() 
        : num(0), fNum(0.0f) {}
    CData(const int num, const float fNum)
    {
        this->num = num;
        this->fNum = fNum;
    }
    
    CData(const CData& refCdata)
    {
        std::cout << "CData(const CData& refCdata)" << endl;

        num = refCdata.num;
        fNum = refCdata.fNum;
    }

    ~CData() {}

    void OutPut()
    {
        std::cout << "num: " << num << " fNum: "<< fNum << std::endl;
    }
};

int main()
{
    int num1 = 10;
    int num2 = 90;
    float fNum1 = 10.0f;
    float  fNum2 = 20.0f;

    cout << "========== struct ==========" << endl;

    SData sData1(10);
    SData sData2(90);

    cout << "Min(num1, num2): " << Min(num1, num2) << endl;
    cout << fixed;
    cout << "Min(fNum1, fNum2): " << Min(fNum1, fNum2) << endl;
    cout << "Min(sData1, sData2): " << Min(sData1, sData2).i << endl;

    cout << "========== class ==========" << endl;

    CData cData1(10, 10.0f);
    CData cData2(90, 90.0f);

    CData cData3(cData2);
    cData3.OutPut();

    cData1.OutPut();
    cData2.OutPut();

    Swap(cData1, cData2);

    cData1.OutPut();
    cData2.OutPut();

    return 0;
}


/*  Result
========== struct ==========
Min typeid int
Min(num1, num2): 10
Min typeid float
Min(fNum1, fNum2): 10.000000
Min typeid struct SData
operator >
Min(sData1, sData2): 10
========== class ==========
CData(const CData& refCdata)
num: 90 fNum: 90.000000
num: 10 fNum: 10.000000
num: 90 fNum: 90.000000
Swap typeid class CData
num: 90 fNum: 90.000000
num: 10 fNum: 10.000000
*/