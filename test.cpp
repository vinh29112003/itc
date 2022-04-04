#include<iostream.h>
using namespace std;
struct NS{
	int ngay;
	int thang;
	int nam;
};

class KH
{
	private :
	 NS ns;
	 char ht[30];
	 char cmt[10];
	 char k[50];
	
	public :
		
		friend istream& operator >>(istream& is, KH &a){

			cout<<"\nNhap ngay sinh : ";
			is>>a.ns.ngay;
			cout<<"Nhap thang sinh : ";
			is>>a.ns.thang;
			cout<<"Nhap nam sinh : ";
			is>>a.ns.nam;
			return is;
		}
		
		friend ostream& operator <<(ostream& os, KH a)
		{
			os <<"Ngay thang nam sinh : "<<a.ns.ngay<<"/"<<a.ns.thang<<"/"<<a.ns.nam<<endl;

			  return os;		  
		}	
};
int main()
{
	int n;
	cout<<"\nNhap so khach hang : ";
	cin>>n;
	KH a[n];
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap thong tin khach hang thu ["<<i+1<<"] : "<<endl;
		cin>>a[i];
		cout<<"\n";
	}
	for(int i = 0; i < n; i++)
	{
		cout<<"Thong tin khach hang thu ["<<i+1<<"] : "<<endl;
		cout<<a[i];
		cout<<"\n";
	}
	
	return 0;
}