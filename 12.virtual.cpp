/*************************************************************************
	> File Name: 12.virtual.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月17日 星期二 10时35分33秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
string rand_name(int n) {
    string name = "";
    for (int i = 0; i < n; i++) {
        name = name + (char)(rand() % 16 + 'A');
    }

    return name;
}

class Animal{
public:
    Animal(string name): name(name){}
    string tell_me_your_name() { return this->name; }
    virtual void run() {
        cout << "I don't know how to run" << endl;
    }
    virtual void func0() {}
    virtual void say() = 0;//纯虚函数
    virtual ~Animal(){
        cout << "Animal destructor" << endl;
    }
private:
    string name;
};

class Cat:public Animal{
public:
    Cat():Animal(rand_name(5) + " Cat"){}
    void run()  override {
        cout << "I can run with four legs" << endl;
    }
    void say() override {
        cout << "miao~ miao~ miao~" << endl;
    } 
    void func0() override {
        cout << "this is funo" << endl;

    }
    ~Cat() {
        cout << "Cat destructor" << endl;
    };
private:

};

class Bat:public Animal{
public:
    Bat() :Animal(rand_name(5) + " Bat"){}
    void run() override {
        cout << "I can flay" << endl;
    }
    void say() override {
        cout << "zz~ zz~ zz~" << endl;
    }
    ~Bat(){
        cout << "Bat destructor" << endl;  
    };
private:
};

int main() {
    Cat a;
    Bat b;
    cout << a.tell_me_your_name() << endl;
    a.run();
    a.say();
    cout << b.tell_me_your_name() << endl;
    b.run();
    b.say();
    Animal ** arr = new Animal*[10];
    for (int i = 0; i < 10; i++) {
        if (rand() % 2) {
            arr[i] = new Cat();
        } else {
            arr[i] = new Bat();
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i]->tell_me_your_name() << endl;
        arr[i]->run();
    }

    for (int i = 0; i < 10; i++) {
        delete arr[i];
    }
    delete[] arr;
    return 0;
}
