// Copyright 2021 FOM
#include <iostream>
#include <new>
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

template<class T>
class MyStack {
 private:
    unsigned int size;
    int count;
    T* ptr;

 public:
    explicit MyStack(int SIZE) {
        size = SIZE;
        ptr = new T[SIZE];
    }
    MyStack(const MyStack& str) {
        size = str.size;
        ptr = new T[size];
        int i = 0;
        while (i < size) {
            ptr[i] = str.ptr[i];
            i++;
        }
        count = str.count;
    }
    ~MyStack() {
        delete[] ptr;
    }
    T get() const {
        return ptr[count - 1];
    }
    T pop() {
        if (count == 0)
            return 0;
        count--;
        return ptr[count];
    }
    void push(T num) {
        T* tmp;
        try {
            tmp = ptr;
            ptr = new T[count + 1];
            count++;
            for (int i = 0; i < count - 1; i++)
                ptr[i] = tmp[i];
            ptr[count - 1] = num;
            if (count > 1)
                delete[] tmp;
        }
        catch (std::bad_alloc w) {
            std::cout << w.what() << std::endl;
        }
    }
    bool isFull() const {
        if (count == size)
            return true;
        else
            return false;
    }
    bool isEmpty() const {
        if (count == 0)
            return true;
        else
            return false;
    }
};
#endif  // INCLUDE_MYSTACK_H_
