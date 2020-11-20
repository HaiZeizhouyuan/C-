/*************************************************************************
	> File Name: copy_assign.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月20日 星期五 18时11分55秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
typedef unsigned int uInt;

class PersonInfo {
private:
    string name;
    uInt IDNumber;
    string address;
    string company;
    bool isMale;
public:
    //PersonInfo(){};  = PersonInfo() = default;????
    PersonInfo() = default;
    PersonInfo(uInt idn, bool im) {
        IDNumber = idn;
        bool isMale;
    }
   // PersonInfo(const PersonInfo &pi) = delete;

    PersonInfo (const PersonInfo &pi) {
        address = pi.address;
        company = pi.company;
        isMale =  pi.isMale;
    }
    //(2)为什么不能使用default, 但可以使用delete
  //  void displayInfo() = delete;
    void displayInfo(const PersonInfo &info) {
        cout << info.name << endl;
    }
    PersonInfo &makeCopy(const PersonInfo &pi) {
        PersonInfo temp;
        temp.name = pi.name;
        temp.IDNumber = pi.IDNumber;
        return temp;
    }
};


int main() {
    PersonInfo pi;
    PersonInfo pt = pi;
    pi.displayInfo(pi);
    pi.displayInfo(pt);
    
    return 0;
}
