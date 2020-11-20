/*************************************************************************
	> File Name: 9.succeed.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月15日 星期日 10时57分24秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

#define P_ADD(obj, a) cout << #obj "." #a " = "<< &(obj.a)

class Animal{
public:
    Animal(string name) : __name(name){
        cout << "Animal constructor" << this << endl;
    }
    string name(){ return this->__name; }
    int x, y;
    string __name;
    ~Animal(){
        cout << "Animal destructor" << this << endl;
    }
};

class Cat : public Animal {
public:
    Cat() : Animal("hello kitty"){
        cout << "Cat constructor" << this << endl;
    }
    void say(){
        cout << "my name is " << this->name() << endl;
    }
    int z;
    ~Cat() {
        cout << "cat destructor" << this <<  endl;
    }
};

ostream &operator<<(ostream &out, const Cat &a) {
    out << "<class Cat> " << &a << endl;

    P_ADD(a, x) << endl;
    P_ADD(a, y) << endl;
    P_ADD(a, __name) << endl;
    P_ADD(a, z) << endl;
    return out;
}

int main() {
    Animal a("any");
    Cat c;
    c.say();
    cout << sizeof(a) << " " << sizeof(c) << endl;
    cout << c << endl;
    return 0;
}
