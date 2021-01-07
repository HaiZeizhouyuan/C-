/*************************************************************************
	> File Name: single_inherit_2.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月27日 星期五 10时04分45秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

class Person {
public:
    Person() = default;
    Person(string n) {
        name = n;
    }
    void showMessage() {
        cout << name << endl;
    }
private:
    string name;
};

class Man:public Person {
public:
    Man(string n, string w):Person(n){
        workName = w;
    }
    Man (const Man &m):Person(m) {
        this->workName = m.workName;

    }
    void showPersonMessage() {
        this->showMessage();
    }
    void showManMessage() {
        cout << workName << endl;
    }
private:
    string workName;
};


int main() {
    Man m = Man("张三","厨师");
    m.showMessage();
    m.showPersonMessage();
    m.showManMessage();
    Man newm = m;
    newm.showMessage();
    newm.showPersonMessage();
    newm.showManMessage();
    Man mm("", "");
    mm = m;
    mm.showMessage();
    mm.showPersonMessage();
    mm.showManMessage();
    return 0;
}
