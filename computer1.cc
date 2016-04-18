///
///@date   2016-04-18 16:44:56
///
 
 
 
#include <iostream>
#include <string.h>
using std::cin;
using std::cout;
using std::endl;

class computer
{
public:
	computer();
	computer(char*s,int p=1000);
	~computer();
	void print();
private:
	char *_brand;
	int _price;
};

void computer::print()
{
	cout<<_brand<<endl;
	cout<<_price<<endl;
}

computer::computer()
:_price(1000)
{
	cout<<"non parameter computer"<<endl;
	_brand=new char[20];
	strcpy(_brand,"Thinkpad");
}

computer::computer(char *s,int p)
:_price(p)
{
	cout<<"parameter computer"<<endl;
	_brand=new char[strlen(s)+1];
	strcpy(_brand,s);
}

computer::~computer()
{
	cout<<"~computer"<<endl;
	delete []_brand;
}


int main()
{
	computer pc;
	pc.print();

	char name[]="DELL";

	computer pc2(name,6000);
	pc2.print();

	computer *pc1=new computer(name);
	pc1->print();
	delete pc1;

	return 0;
}
