/*************************************************************************
	> File Name: test.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月17日 星期二 10时27分35秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

class Animal{
public:
    void move(){
        cout << "动物可以移动" << endl;;
           
    }

};
 
class Dog : public Animal{
public:
     void move(){
               super.move(); // 应用super类的方法
               System.out.println("狗可以跑和走");
            
     }

 };
  
int  main(){
    Animal b = new Dog(); // Dog 对象
    b.move(); //执行 Dog类的方法
    return 0;  
}

