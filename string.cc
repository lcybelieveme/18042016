///
///@date   2016-04-18 20:55:38
///
 
 
#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
	char s1[]="hello world";
	char s2[]="lo w";

	char s3[10];
	memset(s3,0,sizeof(s3));

	strncpy(s3,strstr(s1,s2),6);

	printf("%s\n",s3);



	string s4="hello world";
	string s5="lo w";
	string s6;
	s6=s4.substr(s4.find(s5),6);
	cout<<s6<<endl;

	return 0;
}
