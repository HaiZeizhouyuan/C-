/*************************************************************************
	> File Name: vector.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月12日 星期四 14时36分18秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include <vector>
using namespace std;

int main() {
    //int a[10];
    vector<int> a(10);
    //int b[10] = {0};
    vector<int> b(10, 0);
    //int c [] = {1, 2 ,3 ,4 , 5};
    vector<int> c = {1, 2, 3, 4, 5};
    int x = c[2];
    c[3] = x;
    vector<int> d = {1, 2, 3, 4, 5};
    int sum = 0;
    for(auto y : d) {
        sum += y;
    }
	cout << sum << endl;

    
    return 0;
}

