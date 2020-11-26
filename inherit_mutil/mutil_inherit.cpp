/*************************************************************************
	> File Name: mutil_inherit.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月25日 星期三 19时45分16秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
struct Person{
    string lastName = "xing";
    Person() = default;
    Person(string n):lastName(n) {};
};

struct F: virtual Person{
    F():Person("father name"){};
};
struct M:virtual Person{
    M():Person ("mother name") {};
};
class S1:public F,public M{
    string myLastName;
};

int main() {
    S1 s;
    cout << sizeof(Person) << endl;
    cout << s.M::lastName << endl;
    cout << sizeof(F) << " " <<  sizeof(M) << " " << sizeof(S1) << endl;
    return 0;
}
