///
///@date   2016-04-18 20:41:12
///
 
 
 
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class student
{
public:
	explicit student(int id=1000,float score=60);
	student (const student &stu);
	void print();
private:
	int _id;
	float _score;
};

student::student(int id,float score)
:_id(id)
,_score(score)
{

}

void student::print()
{
	cout<<"id = "<<_id<<endl;
	cout<<"score = "<<_score<<endl;
}

int main()
{
//	student s1=5;             //因为=运算符被隐式重载
							  //所以会有一个隐匿对象被创建调用构造函数
//	s1.print();

	student s2;
	s2.print();

	return 0;
}
