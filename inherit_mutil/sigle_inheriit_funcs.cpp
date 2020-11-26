/*************************************************************************
	> File Name: sigle_inheriit_funcs.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月25日 星期三 19时08分09秒
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
    Person(string n) {
        name = n;
    }
    Person() = default;
    void showMessage() {
        cout << name << endl;
    }
private:
    string name;
};

class Man: public Person{
public:
    Man(string n, string wn): Person(n) {
        workName = wn;
    }
    Man (const Man &m):Person(m){
        this->workName = m.workName;
    }
    void showPersonMessage() {
        this->showManMessage();
    }
    void showManMessage() {
        cout << workName << endl;
    }
private:
    string workName;
};

int main() {
    Man m = Man{"张三", "厨师"};
    m.showMessage();
    m.showPersonMessage();
    m.showManMessage();
    Man newman = m;
    m.showMessage();
    m.showPersonMessage();
    m.showManMessage();
    return 0;
}
