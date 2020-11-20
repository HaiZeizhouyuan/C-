/*************************************************************************
	> File Name: find_first_of.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月12日 星期四 14时59分30秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {3, 4, 5, 6, 7};
    auto it = find_first_of(begin(a), end(a), begin(b), end(b));
    bool found = (it != end(a));
    cout << found << endl;
 
    return 0;
}
