/*************************************************************************
	> File Name: gigou.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月20日 星期五 10时56分03秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include <cstdlib>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
class Node {
public:
    Node() = default;
    Node(int z){
        this->z = z;
        num = (int *)calloc(1024 * 1024, 1);
        cout << "构造函数" << endl;
    };
    Node(int xx, int yy):x(xx), y(yy){
        cout << "constructor" << endl;
    }
    ~Node() {
        free(num);
        num = NULL;
        cout << "dele" << endl;
    };
private:
    int x, y, z;
    int *num;
};

class Person{
public:
    Person (unsigned int pwd){
        password = pwd;
        securePassword();
    }
    void displayPassword() {
        cout << password << endl;
    }
private:
    string name;
    unsigned int password;
    void securePassword() {
        password |= -1U;
    }
};
int main() {

    unsigned int input_pwd;
    cin >> input_pwd;
    Person p = input_pwd;
    p.displayPassword();

    cout << "b" << endl;
    Node b;
    //delete &b; delete不要用于栈区对象
    cout << "a" << endl;
    Node a(1, 2);
    cout << "c" << endl;
    Node *c = new Node;
    delete c;
    cout << "d" << endl;
    Node *d = new Node[10];
    delete[] d;
    cout << "e" << endl;
    vector<Node *> nodes; 
    for (int i = 0; i < 10; i++) {
        nodes.push_back(new Node);
    }
    for (int i = 0; i < nodes.size(); i++) {
        delete nodes[i];
    }
    cout << "f" << endl;
    queue<Node *> f;
    for (int i = 0; i < 10; i++) {
        f.push(new Node);
    }

    
   // while(1);
    return 0;
}
