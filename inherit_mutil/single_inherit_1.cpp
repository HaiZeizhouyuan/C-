/*************************************************************************
	> File Name: single_inherit_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月26日 星期四 20时07分34秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
class Base {
public :
    //Base (int nn):n(nn){}
    int pb = 30;
protected:
    int pt = 40;

private:
    int pr = 10;
};

class A : public Base {
public:
    //A():Base();
    /*void father_private() {
        cout << pr << endl;
    }*/
    void father_public() {
        cout << "PB: " << pb << endl;
    }

    void father_protected() {
        cout << "PT: " << pt << endl;
    }
private:
};

class B : protected Base {
public:
    //A():Base();
   /* void father_private() {
        cout << pr << endl;
    }*/
    void father_public() {
        cout << "PB: " << pb << endl;
    }

    void father_protected() {
        cout << "PT: " << pt << endl;
    }
private:
};

class C : private Base {
public:
    //A():Base();
  /*  void father_private() {
        cout << pr << endl;
    }*/
    void father_public() {
        cout << "PB: " << pb << endl;
    }

    void father_protected() {
        cout << "PT: " << pt << endl;
    }
private:
};
class D:Base {
public:
    //A():Base();
   /* void father_private() {
    *
        cout << pr << endl;
    }*/
    void father_public() {
        cout << "PB: " << pb << endl;
    }

    void father_protected() {
        cout << "PT: " << pt << endl;
    }
private:
};

class Third : private A{
public:
    void father_public() {
        cout << "PB: " << pb << endl;
    }

    void father_protected() {
        cout << "PT: " << pt << endl;
    }
private:
};
int main() {
    A a;
   // a.father_private();
    a.father_public();
    a.father_protected();
    cout << a.pb << endl;
    //cout << a.pt << endl;
    B b;
   // b.father_private();
    b.father_public();
    b.father_protected();
    C c;
   // c.father_private();
    c.father_public();
    c.father_protected();
    D d;
  //  d.father_private();
    d.father_public();
    d.father_protected();

    Third t;

    //cout << a.pb << endl;
    //   cout << a.pt<< endl;
    t.father_public();
    t.father_protected();
    return 0;
}
