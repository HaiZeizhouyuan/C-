/*************************************************************************
	> File Name: single_inherit.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月25日 星期三 18时35分22秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
class Base {
private:
    int n = 10;
protected:
    int j = 100;
public:
    int m = 666;
};

class Drived: protected Base {
public:
    void showMessage() {
        //cout << n << endl;
        cout << m << endl;
        cout << j << endl;
    }
};

class Three:public Drived {
public:
    void showMessage() {
        //cout << n << endl;
        cout << m << endl;
       cout << j << endl;
    }
};

int main() {
    Drived b;
    Drived d;
    d.showMessage();
    Three t;
    return 0;
}
