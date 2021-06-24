#include<iostream>
using namespace std;
int main()
{
	int*dc,n,sum;
	int mang[n];
	dc=&mang[0];
	cout<<" Nhap so luong phan tu cua mang : ";
	cin>>n;
	cout<<"\n"<<" nhap cac phan tu cua mang : "<<endl;
	for( int i=0;i<n;i++)
	{
		cout<<"A["<<i<<"]= ";
		cin>>*dc;
		sum+=*dc;
	}
	cout<< " tong cac phan tu cua mang la : "<< sum << endl;
	return 0;
}
	
	
