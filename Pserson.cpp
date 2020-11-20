/*************************************************************************
	> File Name: Pserson.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月18日 星期三 18时28分07秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 /*
    (1)属性（成员变量）指代对象拥有的特征,数据
    (2)方法（成员函数）指代对象拥有的行为,操作
 */
class Person{
public:
  //  bool cloth;
  //  int k = 10;
   // void kill():
    /*Person() {
        cout << "构造函数" << endl;
    }*/
    Person(union int idn) {
        IDNumbre = idn;
        cout << " for num" << endl;
    }
    Persom(string n) {
        name = n;
        court << " form name" << endl;
    }
protected:
    //int j = 100;
private:
    string name;
    unsigned int IDNumbre;
   // int i = 10;

};

//explicit对于单参数的构造函数必须显示调用
 struct SomeBody {
public:
    explicit 
    SomeBody(string n, unsigned int idn):name(n), IDNumber(idn) {
        //name = n;
        //IDNumber = idn
    }
private:
    const string name;
    const unsigned int IDNumber;
};

int main() {
    Person p;//创建一个对象
    cout << "S1" << endl;
    //Person P1(); //这种方式会将p1当成一种函数调用
    cout << "S2" << endl;
    Person P2 = Person();
    Person *p3 = new Person;
    Person *p4 = new Person();
    Person p5 = 1002;
    //Person p6 = string("zy");
    //Person p6 = "zy";
    Person p6 = Person("张三");
    Person p7("zy", 111);
   // Person p5{"张三", 555};
 //   cout << p.i << p.j << p.k << endl;
  //  p.cloth = true;
  //  p.kill();
    return 0;
}
