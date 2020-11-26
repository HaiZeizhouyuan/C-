/*************************************************************************
	> File Name: map.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月07日 星期六 09时53分48秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include <vector>
#include <cstdlib>
#include <cmath>
#include<queue>
#include<map>
#include <set>

using namespace std;
 
int main() {
    string name;
    int n, age;
    set<int> s;
    s.insert(3);
    s.insert(5);
    s.insert(2);
    s.insert(3);
    s.insert(10);
    cout << *s.begin() << endl;
    //s.erase(s.begin());
    for (auto iter = s.begin(); iter != s.end(); iter++) {
        cout << *iter << " ";
    }
    for (auto i : s) {
        cout << i << endl;
    }
    cout << endl;
    map<int, string> arr;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> age >> name;
        arr[age] = name;
    }
    for (auto i : arr) {
        cout << i.second << endl;
    }
    for (auto iter = arr.begin(); iter != arr.end(); iter++) {
        cout << iter->first << " " << iter->second << endl; 
    }
    return 0;
}
