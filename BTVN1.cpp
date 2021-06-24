//BT1: CONG 2 SO SU DUNG BOI CON TRO
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int *dc1=&a,*dc2=&b;
	cout<<" nhap  so  thu nhat cua ban : ";
	cin>>*dc1;
	cout<<"\n";
	cout<<" nhap so thu hai cua ban : ";
	cin>>*dc2;
	cout<<" tong 2 so la :"<<*dc1+*dc2;
	return 0;
	}
