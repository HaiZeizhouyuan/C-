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
 
class Point {
public:
    Point(int x, int y): __x(x), __y(y) {}
    int x();
    int y();
    void set_x(int x);
    void set_y(int y);
private:
    int __x, __y;
};

int Point::x() {
    return this->__x;
}

int Point :: y(){
    return this->__y;
}

void Point ::set_x(int x) {
    this->__x = x;
}

void Point :: set_y(int y) {
    this->y = y;
} 

int main() {
 
 
    return 0;
}
