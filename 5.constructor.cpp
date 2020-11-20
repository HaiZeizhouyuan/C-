/*************************************************************************
	> File Name: 5.constructor.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月12日 星期四 10时57分58秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <map>

#include<queue>
using namespace std;
 
struct A {
    A() : next(nullptr){
        cout << this << " default constructor" << endl;
    } 
    A(A *obj) {
        this->next = obj;
        this->next->arr = new int[1000];
    }
    A(int n) : next(nullptr){
        cout << this << " an int constructor" << endl;
        x = n, y = n;
    }
    void output() {
        cout << this->x  << " " << this->y << endl;
    }
    void operator=(int n){
        cout << this << "operator =" << endl;
        x = n, y = n;
    }
    A(const A &obj) : next(nullptr){
        cout << this << " copy constructor" << endl;
        this->x = obj.x , this->y = obj.y;
    }

    int x, y;
    int *arr;
    A *next;
    ~A() {
        if (this->next) {
            delete this->next->arr;
        }
        cout << this << " destructor" << endl;
    }
};


int func(int &x) {
    x += 5;
}

A aa;
A bb(&aa);
A cc(&bb);

int main() {
    int n = 7;
    func(n);
    cout << n << endl;
    cout << "pre position" << endl;
    A a;
   // A b(6);
    A c(a);
    
    A b = 8;//匹配构造函数
    cout << "a = " << &a << endl;
    cout << "b =" << &b << endl;
    cout << "c =" << &c << endl;
    cout << "aa = " << &aa << endl;
    cout << "bb = " << &bb << endl;
    cout << "cc = " << &cc << endl;
    b.output();
    b = 6;
    b.output();
    cout << "next position" << endl;
    return 0;
}
