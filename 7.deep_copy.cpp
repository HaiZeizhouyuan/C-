/*************************************************************************
	> File Name: deep_copy.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月21日 星期六 10时07分17秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
class A {
public :
    A() {
        this->arr = new int[100];
    }
    A(const A &obj) : x(obj.x), y(obj.y) {
        this->arr = new int[100];
        memcpy(this->arr, obj.arr, sizeof(int) * 100);
    }
    int  *arr;
    int x, y;
};

int main() {
    A a;
    a.x = 3 , a.y = 6;
    a.arr[0] = 123;
    A b = a;
    b.arr[0] = 456;

    cout << a.arr[0] << " " << b.arr[0] << endl;
    cout << b.x << " " << b.y << endl;
    b.x = 6;
    cout << a.x << " " << b.y << endl;
    cout << b.x << " " << b.y << endl;
    return 0;
}
