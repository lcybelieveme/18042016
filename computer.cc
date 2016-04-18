///
///@date   2016-04-18 15:34:40
///
 
 
 
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class computer
{
	public:
		computer(const char *x="Thinkpad",int y=0);
		void print();
	private:
		const char *_brand;
		int price;
};

computer::computer(const char* x,int y)
:_brand(x)
,price(y)
{
}

void computer::print()
{
	cout<<_brand<<endl;	
	cout<<price<<endl;
}

int main()
{
	computer pc;
	pc.print();
	return 0;
}
