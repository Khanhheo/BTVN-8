#include<iostream>
using namespace std;	
int main()
{
	int size,newsize,ktr,vt,dem;
	int *mang=new int[size];
	cout<<" nhap kich thuoc ban dau cua mang : ";
	cin>>size;
	cout<<endl;
	cout<<" nhap cac gia tri cho mang : "<<endl;
	for( int i=0;i< size;i++)
	{
		cout<<"mang["<<i<<"]=";
		cin>>*(mang+i);
		cout<<endl;
	}	
	cout<<" kich thuoc moi cua mang la : ";
	cin>>newsize;
	cout<<endl;
	int *mang2=new int[newsize];
	if( size <newsize)
	{
		cout<<" mang moi co so phan tu lon hon : "<<endl;
		for(int i=0;i<size;i++)
		{
			mang2[i]=mang[i];
		}
	cout<<" nhap cac gia tri muon them vao mang:"<<endl;
	for( int i=size; i< newsize;i++)
	{
	cout<<"mang["<<i<<"]=";
	cin>>*(mang2+i);
	cout<<endl;
	}
	cout<<" mang sau khi them cac gia tri la : "<<endl;
	for( int i=0;i<newsize;i++)
	{
		cout<<*(mang2+i)<<"\t";
	}
	}
	else
	{
		if( size== newsize) cout<< " kich thuoc nhu kich thuoc ban dau ";
		else 
		{
			cout<<" mang moi co so phan tu it hon"<<endl;
			cout<<" khi thay doi kich thuoc la : "<<endl;
			for( int i=0;i<newsize;i++)
			{
				*(mang2+i)=*(mang+i);
				cout<<*(mang2+i)<<"\t";
			}
		}
	}
	cout<<endl<<" nhap phan tu muon tim trong mang : ";
	cin>>ktr;
	cout<<" cac vi tri xuat hien la : ";
	for( int i=0; i< newsize;i++)
	{
		if( ktr== *(mang2+i))
		{
			  dem++;
			cout<<i<<"\t";
		}
	}
	cout<<endl<<" so lan xuat hien la : "<<dem;
	delete mang;
    mang2=nullptr;
    delete mang2;
    return 0;
    }
		
			
		
