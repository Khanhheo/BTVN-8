//trao doi 2 gia tri boi su dung con tro 
#include<iostream>
#include<stdio.h>
using namespace std;
int main ()
{
	int a,b;
	int*dc1=&a,*dc2=&b;
	cout<<" nhap so thu nhat : ";
	cin>>*dc1;
	cout<<endl<<" nhap so thu hai :";
	cin>>*dc2;
	cout<<" 2 so truoc khi doi cho la :"<< *dc1<<"\t"<<*dc2<<endl;
	cout<<"dia chi : "<<dc1<<"\t"<<dc2<<endl;
	swap(dc1,dc2);
	cout<<" 2 so sau khi doi cho la :"<< *dc1<<"\t"<<*dc2<<endl;
	cout<<"dia chi : "<<dc1<<"\t"<<dc2<<endl;
	return 0;
}
	
	
