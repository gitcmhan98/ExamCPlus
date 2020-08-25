/*-----------------------------------------------------------------------------
 * Name: class
 * DESC: Ŭ���� ���, �����Լ�(virtual�Լ� ~ override), �������ε�, ������
 * �������� �ᱹ �ݺ����� ���� �����͸� �����ϱ� ���� ��..
 * static_cast�� runtime�� ���� üũX
 * dynamic_cast�� runtime�� �����ϸ� nullptr����
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

class Base
{
public:
    Base();
    Base(int num);
    virtual void Print();

    int GetNum() const;

private:
    int num;
};

Base::Base() : num(0) {}
Base::Base(int num) : num(num) {}


//virtual int Base::Print() //virutal����..
void Base::Print()
{
    cout << "Base::Print()" << endl;
    cout << "num: " << num << endl;
}

int Base::GetNum() const
{
    return num;
}

class ChildAA : public Base
{
public:
    ChildAA(int aa);
    ChildAA(int, int);

    void Print() override; //override�� C++11 ���� �߰�..

private:
    int aa;
};

ChildAA::ChildAA(int aa = 0) : aa(aa), Base(0) { }
ChildAA::ChildAA(int num, int aa) : Base(num), aa(aa) {}

void ChildAA::Print() //override
{
    cout <<"\t ChildAA::Print()" << endl;
    cout << "\t num: " << GetNum() << endl;
    cout << "\t aa: " << aa << endl;
}

int main()
{
    Base base = Base(100);
    base.Print();

    Base* childAA = new ChildAA(1000, 1000); //�������ε�.. 
    childAA->Print();

    cout << typeid(childAA).name() << endl;

    cout << "\n=== (typeid(childAA) == typeid(Base*)) ===" << endl;

    if (typeid(childAA) == typeid(Base*))
    {
        cout << typeid(childAA).name() << endl;
        cout << typeid(Base*).name() << endl;
    }

    ChildAA* aa = dynamic_cast<ChildAA*>(childAA); //dynamic_cast�� runtime�� �����ϸ� nullptr����
    if (nullptr != aa) aa->Print();

    cout << "\n=== (typeid(*childAA) == typeid(ChildAA)) ===" << endl;

    if (typeid(*childAA) == typeid(ChildAA))
    {
        cout << typeid(*childAA).name() << endl;
        cout << typeid(ChildAA).name() << endl;
    }

    delete childAA;

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
 //������ �迭: int* ptr[4];
 //�迭 ����Ʈ: int (*ptr)[4];
 */