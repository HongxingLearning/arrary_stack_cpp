#ifndef ARRAY_STACK_HXX
#define ARRAY_STACK_HXX

#include <iostream>
#include "ArrayStack.h"
using namespace std;

template<class T> class ArrayStack{
    public:
        ArrayStack();
        ~ArrayStack();

        void push(T t);
        T peek();
        T pop();
        int size();
        int isEmpty();
    private:
        T *arr;
        int count;
};

// ������ջ����Ĭ�ϴ�С��12
template<class T>
ArrayStack<T>::ArrayStack() 
{
    arr = new T[12];
    if (!arr) 
    {
        cout<<"arr malloc error!"<<endl;
    }
}

// ���١�ջ��
template<class T>
ArrayStack<T>::~ArrayStack() 
{
    if (arr) 
    {
        delete[] arr;
		arr = NULL;
    }
}

// ��val��ӵ�ջ��
template<class T>
void ArrayStack<T>::push(T t) 
{
    //arr[count++] = val;
    arr[count++] = t;
}

// ���ء�ջ��Ԫ��ֵ��
template<class T>
T ArrayStack<T>::peek() 
{
    return arr[count-1];
}

// ���ء�ջ��Ԫ��ֵ������ɾ����ջ��Ԫ�ء�
template<class T>
T ArrayStack<T>::pop() 
{
    int ret = arr[count-1];
    count--;
    return ret;
}

// ���ء�ջ���Ĵ�С
template<class T>
int ArrayStack<T>::size() 
{
    return count;
}

// ���ء�ջ���Ƿ�Ϊ��
template<class T>
int ArrayStack<T>::isEmpty()
{
    return size()==0;
}

#endif