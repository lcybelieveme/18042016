///
///@date   2016-04-18 19:11:17
///
 
 
#include <string.h>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class computer
{
public:
	computer();
	computer(char*name,float price=5100);
	computer(const computer &pc);
	~computer();
	void print();
private:
	char *_name;
	float _price;
};

computer::computer()
:_price(5000)
{
	cout<<"Non parameter"<<endl;
	_name=new char[20];
}

computer::computer(char*name,float price)
:_price(price)
{
	cout<<"parameter computer"<<endl;
	_name=new char[strlen(name)+1];
	strcpy(_name,name);
}

computer::computer(const computer &pc)
:_price(pc._price)                     //复制构造函数在类里面可以直接访问私有成员
{
	cout<<"computer (const computer &pc)"<<endl;
	_name=new char[strlen(pc._name)+1];
	strcpy(_name,pc._name);
}

computer::~computer()
{
	cout<<"~computer"<<endl;
	delete [] _name;
}

void computer::print()
{
	cout<<_name<<endl;
	cout<<_price<<endl;
}


int main(void)
{

	char name[]="Thinkpad";

//	computer pc;
//	pc.print();

	computer pc1(name);
	pc1.print();
#if 0
	computer pc2(name,8888);
	pc2.print();

	computer pc3=pc2;
	cout<<"pc3:"<<endl;
	pc3.print();

	computer *pc4=new computer;
	*pc4=pc1;                     //默认赋值函数 可以重载=号 不会调用复制构造函数 
								  //没有重载=  会变成浅拷贝
								  //构造函数在上一行已经调用过了
	pc4->print();
	delete pc4;
#endif
	computer *pc5=new computer(pc1);  //拷贝构造函数应这样写 消除二义性
	pc5->print();
	delete pc5;                     //类指针动态申请的对象不delete不会调用析构函数

	return 0;
}

