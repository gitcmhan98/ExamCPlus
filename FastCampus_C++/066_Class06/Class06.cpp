/*-----------------------------------------------------------------------------
 * Name: class
 * DESC: Ŭ���� ���, �����Լ�(virtual�Լ� ~ override), �������ε�, ������
 * �������� �ᱹ �ݺ����� ���� �����͸� �����ϱ� ���� ��..
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

//#include "army.h"
class Army
{
public:
    virtual void Run() {
        std::cout << std::endl;
        std::cout << _Speed << "�� �ӵ��� ";
    }

    virtual void Attack() {
        std::cout << std::endl;
        std::cout << "[���ݷ� - " << _Attack << "���� ";
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

        std::cout << "Healer ���ư��ϴ�. " << _Speed;
    }

    void Attack() {
        Army::Attack();

        std::cout << "Healer ���� ����!!! ";
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

        std::cout << "Giant �޷����ϴ�. " << _Speed;
    }

    void Attack() override {
        Army::Attack();

        std::cout << "Giant ����!!! ";
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

        std::cout << "Barbarian  �޷����ϴ�. " << _Speed;
    }

    void Attack() override {
        Army::Attack();

        std::cout << "Barbarian [Į��] ����!!!  ";
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
    cout << "\n == �ݺ����� ���� �����͸� ���� == " << endl;

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
����������������������������������������������������������
            class
����������������������������������������������������������
 - ��ü�� Ʋ
 - Ŭ������ �����(����� �ڷ���)
 ==> Ŭ���� ������ ���
 ==> Ŭ���� �����ͷ� ���
������������������������������������������������������������
            ���
������������������������������������������������������������
 - �θ� class�� ���
 �޾Ƽ� �θ� class��
 �Լ�, ���� ����밡��

 - IS - A����
 - Virtual, override
 - ������
������������������������������������������������������������
    ���� ���� �Լ�
������������������������������������������������������������
- ���� �����Լ��� �����ϴ�
Ŭ������ �߻� Ŭ����(Abstract Class)
- �����Լ��� ��ü ���� �Ұ�!!

- override�Ϸ��� �����Լ���
- �����Լ��� �ִٸ�
����!!: �Ҹ��ڵ� �����Լ���

����:
class AA {
    //virtual void Func() = NULL;
    virtual void Func() = 0;
    virtual ~AA() {}
};

������������������������������������������������������������
 Has - A�� �޴���Ŭ���� ����
������������������������������������������������������������
class A{};
class B{};
class C{};

class Manager
{
    A aa[100];
    B bb[100];
    C cc[100];
};

������������������������������������������������������������
��ü ���翡�� ������ ��
=> ���� ���� & ���� ����
=> ���� ������ �� ������ �����ε�
������������������������������������������������������������


 //������ �迭: int* ptr[4];
 //�迭 ����Ʈ: int (*ptr)[4];
 */