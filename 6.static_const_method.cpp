/*************************************************************************
	> File Name: 6.static_const_method.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月19日 星期四 11时02分07秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
class A {
public:
    A (int x) {
        cout << "class A constructor" << endl;
    }
};

class Point {
public:
    Point();
    Point(int x, int y);
    ~Point();
    int x() const;
    int y() const;
    int x_cnt() const;
    void set_x(int x);
    void set_y(int y);
    static int output_cnt();
private:
    static int point_cnt;
    int __x, __y;
    mutable int __x_cnt;
    A __a;

};


int Point::point_cnt = 0;

int Point::output_cnt() {
    return Point::point_cnt;
}

Point::Point(): __x_cnt(0), __a(2) {
    Point::point_cnt += 1;
}
Point::~Point() {
    Point::point_cnt -= 1;
}
Point::Point(int x, int y) : __x(x), __y(y), __a(4), __x_cnt(0){
    
    Point::point_cnt += 1;
}

int Point::x() const{
    this->__x_cnt += 1;
    return this->__x;
}

int Point :: y() const{
    return this->__y;
}

int Point:: x_cnt() const {
    return this->__x_cnt;
}

void Point ::set_x(int x) {
    this->__x = x;
}

void Point :: set_y(int y) {
    this->__y = y;
} 

void func() {
    Point c, d;
    cout << "func: " << Point::output_cnt() << endl;
    return ;
}

int main() {
    Point a(2, 3), b;
    const Point c(3, 4);
    cout << a.x() << " " << a.y() << endl;
    cout << c.x() << " " << c.y() << endl;

    cout << c.x() << " " << c.y() << endl;
    cout << a.x_cnt() << " " << b.x_cnt() << " " << c.x_cnt() << endl;
    cout << "before func: " << Point::output_cnt() << endl;
    func();
    cout << "after func: " << Point::output_cnt() << endl;
    return 0;
}
