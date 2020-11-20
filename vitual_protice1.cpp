/*************************************************************************
	> File Name: vitual_protice.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月17日 星期二 10时14分26秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
class Animal{
public:
    Animal(const string &name) : __name(name){}
    virtual void run() {
        cout << "I don't know how can run" << endl;
    }
    ~Animal(){};
private:
    string __name;
};

class Cat : public Animal {
public:
    Cat():Animal("cat") {}
    void run() override {
        cout << "I can run with four leggs" << endl;
    }
};


int main() {
    Cat a;
    Animal &b = a;
    Animal *c = &a;
    a.run();
    b.run();
    c->run();
    return 0;
}
