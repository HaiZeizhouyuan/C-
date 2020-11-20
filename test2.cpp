
#include <iostream>
#include <vector>
using namespace std;

class A
{
public:
	A(int i = 0):ival(i){}
	int ival;
};
 
class B
{
public:
	double dval;
	A* pa;
	B():dval()
	{
		pa = new A;
	}
	~B()
	{
        cout << "dele" << endl;
		delete pa;
	}
 
	//复制操作及赋值操作符
	B(const B& rhs)
	{
		pa = new A;
		dval = rhs.dval;
	}
	B& operator=(const B& rhs)
	{
		pa = new A;
		dval = rhs.dval;		
	}
};
 
int main()
{
	B b1;
	B b2 = b1;
	vector<B> vecb;
	vecb.push_back(b1);
	vecb.push_back(b2);
	return 0;
}

