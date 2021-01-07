/*************************************************************************
	> File Name: 1.public.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年01月07日 星期四 19时44分13秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

struct A{
    int x, y;
    int echo() {
        cout << "hello world" << endl;
        return 0;
    }
};

class B {
public:
    int x, y;
private:
    int echo() {
        cout << "hello world" << endl;
        return 0;
    }
};

int main() {
    A a;
    B b;
    a.x = 3, a.y = 2;
    cout << a.x << " " << a.y << endl;
    cout << b.x << " "<< b.y << endl;
    return 0;
}
