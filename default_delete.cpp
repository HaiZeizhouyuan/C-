/*************************************************************************
	> File Name: default_delete.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月19日 星期四 10时33分27秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;



class A{
public:
    A() = default;//告诉编译器要使用编译器的构造行为
    A(const A &) = delete;//进制A 对象的拷贝行为
    void say() { cout << "hello world" << endl; };
};


int main() {
    A a;
    A b = a;
 
    return 0;
}
