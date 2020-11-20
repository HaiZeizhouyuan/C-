/*************************************************************************
	> File Name: tmplate.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月04日 星期三 20时50分40秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>

#include <iostream>

using namespace std;

template <typename T> 

void my_swap(T& a, T& b) {
    T tmp;
    tmp = c;
    c = *a;
    *a = *b;  
    *b = c;
}


int main() {
    int a = 10,  b = 10;

    cout << "a = " << a << "b = " << b << endl;
    my_swap(a, b);
    cout << "a =" << a << "b = " << b << endl;
    

    int i = 10;
    cout << i << endl;

    auto func_ptr = [&i]()mutable{i = 666;};
    func_ptr();
    cout << i << endl;
 
    return 0;
}
