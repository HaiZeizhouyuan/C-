/*************************************************************************
	> File Name: 16.transfer_constructor.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月19日 星期四 10时15分16秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;


class BigInt {
public:
    BigInt() {}
    BigInt (int x) {
        num.push_back(x);
        process_dight();
    }
    friend ostream &operator<<(ostream &, const BigInt &);
private:
    vector<int> num;
    void process_dight() {
        for (int i = 0; i < num.size(); i++) {
            if (num[i] < 10) continue;
            if (i + 1 == num.size()) num.push_back(0);
            num[i + 1] = num[i] / 10;
            num[i] %= 10;
        }
    }
};

ostream &operator<< (ostream &out, const BigInt &a) {
    for (int i = a.num.size() - 1; i >= 0; i--) {
        out << a.num[i];
    }
    return out;
}

void func(BigInt a) {
    cout << "func :" << a << endl;  
}

int main() {
    BigInt a;
    a = 1234;
    cout << a << endl;
    func(5670);
    return 0;
}
