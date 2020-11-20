/*************************************************************************
	> File Name: insert.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月06日 星期五 21时31分57秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
using namespace std;
 
int main() {
    string str;
    cin >> str;
    str.insert(3, "hellow world");
    cout << str << endl;
 
    return 0;
}
