/*************************************************************************
	> File Name: emplace_back.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月22日 星期日 15时34分49秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
int main() {
    vector<int> s;
    vector<string> d;
    for (int i = 0; i < 10; i++) {
        s.emplace_back(i);
        d.emplace_back(1, i + 'a');
    }

 
    return 0;
}
