#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int demchuoi(char*p)
{
	int dem=0;
	while(*p!='\0')
	{
		dem++;
		p++;
	}
	return dem;
}
int main()
{
	
	char chuoi[100];
    cout<<"Nhap chuoi bat ky: ";
    gets(chuoi);
    int a= demchuoi(chuoi);
    cout<<"\nDo dai chuoi  la : "<<a;
    return 0;
}
	
