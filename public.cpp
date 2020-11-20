/*************************************************************************
	> File Name: public.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月12日 星期四 10时34分58秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
using namespace std;
 
struct A {
    int x ,y ;
    int echo() {
        cout << "hello world" << endl;
        return 0;
    }
};

class B {
public:
    int set_xy(int x , int y) {
        this->x = x, this->y = y;//this 指向对象
    }
    int echo() {
        cout << "hello world" << endl;
        cout << x << " " << y << endl;
        return 0;
    }
private : 
    int x, y;
};

int main() {
    A a;
    B b;
    a.x = 3, a.y = 2;//public
 //   b.x = 3, b.y = 2;
    cout << a.x << " " << a.y << endl;
    b.set_xy(2, 3);
    b.echo();//类外是无法访问私有成员的
    return 0;
}
