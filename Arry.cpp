/*************************************************************************
	> File Name: Arry.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月21日 星期六 16时30分03秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
template<typename T>

class  Array{
public:
    Array(){
        this->__size = 10;
        this->__cnt = 0;
        this->data = new T[this->__size];
    }
    Array(int n) {
        this->__size = 2 * n;
        this->__cnt = n;
        this->data = new T[this->__size];
        
    }
    void push_back(const T &a) {
        this->data[(this->__cnt)++] = a;
    }
    int size() {
        return this->__cnt;
    }
    T &operator[](int ind) {
        return this->data[ind];
    }
private:
    T *data;
    int __size, __cnt;
};

int main() {
    vector<int> arr(10);
    Array<int> arr2(10);
    cout << arr.size() << endl;
    arr.push_back(103);
    cout << arr.size() << endl;
    cout << arr2.size() << endl;
    arr2.push_back(123);
    cout << arr2[0] << endl;
    cout << arr2.size() << endl;
    return 0;
}
