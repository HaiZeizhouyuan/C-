/*************************************************************************
	> File Name: virturl.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月25日 星期三 21时22分50秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
class Animal {
public:
    Animal(string n) :name(n){};
    virtual void say() = 0;
private:
    string name;
};

class Cat : public Animal {
public"
    Cat():Animal("ji");
    void say() {
        cout << "Hi Hi" << endl;
    }
private:
};

int main() {
    Animal a;
    a.say();
 
    return 0;
}
