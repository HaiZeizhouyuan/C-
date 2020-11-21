/*************************************************************************
	> File Name: static_const_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月21日 星期六 15时32分59秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

class PersonInfo{
public:

    void displayInfo()
    {
        cout << address << endl;
        cout << name << endl;
        cout << "this is non const version" << endl;
    }
    void displayInfo() const {
        cout << address << endl;
        cout << name << endl;
        cout << "const" << endl;
    }
    static void displayInfo(const PersonInfo &info) {
        cout << info.address << endl;
        cout << info.name << endl;
        cout << "static " << endl;
    }
    void changeIsMale() {
        isMale = !isMale;    
    }

private:
    string address = "中国浙江";
    static string name;
    bool isMale = true;
    int number;
};

string PersonInfo::name = "lili";

void displayInfo(const PersonInfo &info) {
    info.displayInfo();
}

int main() {
    PersonInfo pi;
    cout << "first" << endl;
    pi.displayInfo();
    PersonInfo *somePs = new PersonInfo[100];
    cout << "second" << endl;
    displayInfo(somePs[10]);

   // PersonInfo::name="wu";

    cout << " thread" << endl;
    pi.displayInfo(somePs[66]);
    PersonInfo::displayInfo(somePs[77]);
    pi.changeIsMale();
    return 0;
}
