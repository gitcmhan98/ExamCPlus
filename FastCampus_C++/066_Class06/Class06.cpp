/*-----------------------------------------------------------------------------
 * Name: class
 * DESC: 클래스 상속, 가상함수(virtual함수 ~ override), 동적바인딩, 다형성
 * 다형성도 결국 반복문과 많은 데이터를 관리하기 위한 것..
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

//#include "army.h"
class Army
{
public:
    virtual void Run() {
        std::cout << std::endl;
        std::cout << _Speed << "의 속도로 ";
    }

    virtual void Attack() {
        std::cout << std::endl;
        std::cout << "[공격력 - " << _Attack << "으로 ";
    }

protected:
    int _HP;
    int _MP;
    int _Speed;
    int _Attack;
};

//#include "Units.h"
class Healer : public Army
{
public:
    Healer(){
        _HP = 50;
        _MP = 100;
        _Speed = 200;
        _Attack = 10;
    }

    void Run() {
        Army::Run();

        std::cout << "Healer 날아갑니다. " << _Speed;
    }

    void Attack() {
        Army::Attack();

        std::cout << "Healer 마볍 공격!!! ";
    }
};

class Giant : public Army
{
public:
    Giant() {
        _HP = 200;
        _MP = 0;
        _Speed = 10;
        _Attack = 200;
    }

    void Run() override {
        Army::Run();

        std::cout << "Giant 달려갑니다. " << _Speed;
    }

    void Attack() override {
        Army::Attack();

        std::cout << "Giant 공격!!! ";
    }
};

class Barbarian : public Army
{
public:
    Barbarian() {
        _HP = 100;
        _MP = 0;
        _Speed = 100;
        _Attack = 100;
    }

    void Run() override {
        Army::Run();

        std::cout << "Barbarian  달려갑니다. " << _Speed;
    }

    void Attack() override {
        Army::Attack();

        std::cout << "Barbarian [칼로] 공격!!!  ";
    }
};

void PrintAll(Army** arrArmys, int size) //void PrintAll(Army* (arrArmys)[], int size)
{
    for (int i = 0; i < 10; i++)
    {
        if (nullptr != arrArmys[i])
            arrArmys[i]->Run();
    }

    for (int i = 0; i < 10; i++)
    {
        if (nullptr != arrArmys[i])
            arrArmys[i]->Attack();
    }
}


int main()
{
    cout << "\n == 반복문과 많은 데이터를 관리 == " << endl;

    //Army* arrArmys[10]{};
    Army** arrArmys = new Army* [10]{};

    arrArmys[0] = new Barbarian();
    arrArmys[1] = new Giant();
    arrArmys[2] = new Healer();

    PrintAll(arrArmys, 10);

    for (int i = 0; i < 10; i++)
    {
        if (nullptr != arrArmys[i])
        {
            delete arrArmys[i];
            arrArmys[i] = nullptr;
        }
    }

    delete[] arrArmys;
    arrArmys = nullptr;

    if (nullptr == arrArmys) 
        cout << "\n\nClear delete" << endl;

    return 0;
}


/*
───────────────────────────┼┼
            class
───────────────────────────┼┼
 - 객체의 틀
 - 클래스를 만든다(사용자 자료형)
 ==> 클래스 변수로 사용
 ==> 클래스 포인터로 사용
────────────────────────────┼┼
            상속
────────────────────────────┼┼
 - 부모 class를 상속
 받아서 부모 class의
 함수, 변수 등등사용가능

 - IS - A관계
 - Virtual, override
 - 다형성
────────────────────────────┼┼
    순수 가상 함수
────────────────────────────┼┼
- 순수 가상함수를 포함하는
클래스는 추상 클래스(Abstract Class)
- 가상함수는 객체 생성 불가!!

- override하려면 가상함수로
- 가상함수가 있다면
주의!!: 소멸자도 가상함수로

문법:
class AA {
    //virtual void Func() = NULL;
    virtual void Func() = 0;
    virtual ~AA() {}
};

────────────────────────────┼┼
 Has - A로 메니저클래스 구현
────────────────────────────┼┼
class A{};
class B{};
class C{};

class Manager
{
    A aa[100];
    B bb[100];
    C cc[100];
};

────────────────────────────┼┼
객체 복사에서 주의할 것
=> 깊은 복사 & 얕은 복사
=> 복사 생성자 및 연산자 오버로딩
────────────────────────────┼┼


 //포인터 배열: int* ptr[4];
 //배열 포인트: int (*ptr)[4];
 */