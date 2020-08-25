/*-----------------------------------------------------------------------------
 * Name: [Bonus]_Template02
 * DESC:  template(형, 틀)
 * 일반화 프로그램 - 재사용성과 편의성
 * C++에 STL을 구현하는 대표적 문법 요소
 * 분리 컴파일 불가!! - .h, .cpp로 분리 불가..
 * 함수 탬플릿, 클래스 탬플릿
-----------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

class MyException
{
public:
    int data;
    const char* text;

    MyException(const char* _text, int _data) 
        : text(_text), 
          data(_data) 
    {
        std::cout << "Error Data First!!: " << data << std::endl;
    }
};

template<typename T>
class MyStack
{
public:
    MyStack(unsigned int _size = 100);
    ~MyStack();

    void Push(T _data);
    T Pop();

    bool isFirst() const;
    bool isMax() const;

    int GetSize() { return size; }

private:
    T* data;
    unsigned int size;
    int top;
};

template<typename T>
MyStack<T>::MyStack(unsigned int _size)
{
    size = _size;
    top = 0;
    data = new T[size];
}

template<typename T>
MyStack<T>::~MyStack()
{
    delete[] data;
}

template<typename T>
void MyStack<T>::Push(T _data)
{
    if (isMax())
    {
        std::cout << "Error Data Max!!" << std::endl;
        //throw std::out_of_range("Error Data Max!!"); 
    }
    data[top] = _data;
    top++;
}

template<typename T>
T MyStack<T>::Pop()
{
    if (isFirst())
    {
        throw MyException("Error Data First!!", top);
    }

    T popData = data[--top];

    return popData;
}

template<typename T>
bool MyStack<T>::isMax() const
{
    bool isFull = top == size;
    return isFull;
}

template<typename T>
bool MyStack<T>::isFirst() const
{
    bool isStart = top <= 0;
    return isStart;
}

int main()
{
    MyStack<int> myStack(3);

    myStack.Push(1);
    myStack.Push(2);
    myStack.Push(3);
    //myStack.Push(4);

    cout << myStack.Pop() << endl;
    cout << myStack.Pop() << endl;
    cout << myStack.Pop() << endl;
    //cout << myStack.Pop() << endl;

    MyStack<float> myStack2;

    for (int i = 0; i < myStack2.GetSize(); i++)
    {
        myStack2.Push(i * 0.1f);
    }

    for (int i = 0; (false == myStack2.isFirst()); i++)
    {
        cout << myStack2.Pop() << ", ";
        if (i % 10 == 0) cout << endl;
    }

    return 0;
}

/*  Result
3
2
1
9.9,
9.8, 9.7, 9.6, 9.5, 9.4, 9.3, 9.2, 9.1, 9, 8.9,
8.8, 8.7, 8.6, 8.5, 8.4, 8.3, 8.2, 8.1, 8, 7.9,
7.8, 7.7, 7.6, 7.5, 7.4, 7.3, 7.2, 7.1, 7, 6.9,
6.8, 6.7, 6.6, 6.5, 6.4, 6.3, 6.2, 6.1, 6, 5.9,
5.8, 5.7, 5.6, 5.5, 5.4, 5.3, 5.2, 5.1, 5, 4.9,
4.8, 4.7, 4.6, 4.5, 4.4, 4.3, 4.2, 4.1, 4, 3.9,
3.8, 3.7, 3.6, 3.5, 3.4, 3.3, 3.2, 3.1, 3, 2.9,
2.8, 2.7, 2.6, 2.5, 2.4, 2.3, 2.2, 2.1, 2, 1.9,
1.8, 1.7, 1.6, 1.5, 1.4, 1.3, 1.2, 1.1, 1, 0.9,
0.8, 0.7, 0.6, 0.5, 0.4, 0.3, 0.2, 0.1, 0,
*/