/*************************************************************************
	> File Name: 10.operator.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月17日 星期二 11时00分48秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 

#include<iostream>
using namespace std;

class Point{
public:
    Point() {};
    Point(int x, int y): x(x), y(y){}
    Point (const Point &obj) : x(obj.x), y(obj.y) {
                cout << "copy constructor" << endl;
            
    }
    int operator()(int num) {
                return this->x +this->y + num;
            
    }
    int operator[](string str) {
                if (str == "x") return this->x;
                if (str == "y") return this->y;
                return 0;
            
    }
    Point operator-(const Point &a) {
                Point ret;
                ret.x = this->x - a.x;
                ret.y = this->y - a.y;
                return ret;
            
    }
        friend Point operator+(const Point &, const Point &);
        friend ostream &operator<<(ostream &, const Point &);
private:
        int  x, y;

};

Point operator+(const Point &a, const Point &b) {
        Point ret;
        ret.x = a.x + b.y;
        ret.y = a.y + b.y;
        return ret;

}

Point &operator++() {
    Point t;
    cout << this->x << "llll" << endl;
    return t;
}


ostream &operator<<(ostream &out , const Point &a ) {
        out << "<class Point> (" << a.x << ", " << a.y << ")";

}

int main () {
        Point a(2, 4), b(5, 3);
        Point c = a + b;
        Point d = a + b + c;
        Point e = d -b;
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;
        cout << a(5) << endl;
        cout << a["x"] << " " << a["y"] << endl;
        d++e;
        return 0;

}


