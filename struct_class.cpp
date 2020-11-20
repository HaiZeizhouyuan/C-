/*************************************************************************
	> File Name: struct_class.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月18日 星期三 14时53分01秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

class A{
public :
    int a;
};


struct B : A {

};

class C{
public :
   // C() = default;
private:
    int a;

};

struct D{

};


struct X{
    x() = delete;
    X(const X&) = delete;
    X(int){}
};

/*struct Y{
    X x;
    Y() = delete;
    Y(const Y&) = delete;
};
*/
struct Y {
    X x;
}

int main() {
    B b;
    b.a = 0;
    C c;
    D d;
    Y y1;
    Y y2 = y1;
    return 0;
}
