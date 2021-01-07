/*************************************************************************
	> File Name: mutil_inherit_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月27日 星期五 10时57分23秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

struct Person {
    string name = "姓";
    Person() = default;
    Person(string n):name(n){}
};

struct Father:virtual Person {
    Father():Person("父"){}
};
struct Mather:virtual Person {
    Mather():Person("母"){}
};

struct Child:public Father, public Mather{
    string child_name;
};

int main() {
    Child c;
   // cout << c.Mather::name << endl;
   // cout << c.Father::name << endl;
    //cout << c.Child::name << endl;
    cout << c.name << endl;
    cout << "Person : " << sizeof(Person) << endl;
    cout << "Father : " << sizeof(Father) << endl;
    cout << "Mather : " << sizeof(Mather) << endl;
    cout << "Child : " << sizeof(Child) << endl;
    return 0;
}
