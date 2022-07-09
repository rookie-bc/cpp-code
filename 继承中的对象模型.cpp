#include <iostream>
using namespace std;

//继承中的对象模型
class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class son :public Base
{
public:
	int m_D;
};
void test1()
{
	//16
	//父类中的所有的非静态成员属性，都会被子类继承下去
	//父类中私有成员属性，是被编译器隐藏了，因此访问不到，但是确实被继承下去了 
	cout << "size of son：" << sizeof(son) << endl;
}
int main()
{
	test1();
	return 0;
}