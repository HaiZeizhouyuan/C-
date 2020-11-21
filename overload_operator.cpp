/*************************************************************************
	> File Name: overload_operator.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月21日 星期六 10时37分19秒
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
    Person(int xx, int yy): x(xx), y (yy) {}
    string name;
    Person operator+(const Person &p1) {
        Person a;
        cout << p1.name << " and " << this->name << " marrayed" << endl;
        return a;
    }
    Person marriedWith(const Person &p1) {
        Person b;
        cout << p1.name << " have marray  " << this->name << endl;
        return b;
    }
    //自增运算符会有两个版本
    //后置＋＋当中的int 是一个哑元保证重载实现

    Person &operator++(){
        cout << this->name << endl;
    }
    Person &operator++(int obj){
        cout << "cc" << endl;
    }
    friend ostream &operator<<(ostream &, const Person &);
private:
    int x, y;
};

ostream &operator<<(ostream &out, const Person &a) {
    out << a.name <<" " <<  a.x << " " << a.y << endl;
}

int main() {
    Person man;
    man.name = "man ll";
    Person woman;
    woman.name = "woman kk";
    Person newPerson = man + woman;
    newPerson.name = "child1 yy";
    newPerson + woman;
    Person newPerson2 = man.marriedWith(woman);
    newPerson2.name = "chile2 jj";
    man + woman + man;
    Person xiaoming(3, 45);
    xiaoming.name = "xiaoming";
    xiaoming.operator++();
    ++xiaoming;
    xiaoming++;
    xiaoming.operator++(1);
    cout << xiaoming << endl;
    return 0;
}
