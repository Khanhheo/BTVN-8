#include<iostream>
using namespace std;
int main()
{
	int n;
    cout << " kich thuoc mang la :  ";
    cin >> n;
    cout << endl;
    int* dc = new int[n];
    cout << " nhap cac gia tri cho mang  : \n";
    for (int i = 0; i < n; i++)
    {
        cout << " A[" << i << "] = ";
        cin >> *(dc + i);
        cout << "\n";
    }
    cout << " Mang sau khi dao nguoc thu tu cac phan tu  : ";
    for (int i = n-1; i >=0; i--)
    {
        cout << *(dc + i) << "\t";
    }
    dc=nullptr;
    delete dc;
    return 0;
}
