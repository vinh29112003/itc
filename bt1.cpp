#include <iostream>
#include<iomanip>
using namespace std;

class khachhang{
	private:
		char ht[30];
		char cmt[10];
		char k[50];
	public:
		void nhap();
		void xuat()	;	
};

struct NS{
	int ngay;
	int thang;
	int nam;
};


void khachhang::nhap(){
	NS ns;
	cout<<"\nNhap ho ten khach hang : ";
	cin.getline(ht,30);
	cout<<"\nNhap ngay sinh :  ";
	cin>>ns.ngay;
	cout<<"\nNhap thang sinh :  ";
	cin>>ns.thang;
	cout<<"\nNhap nam sinh :  ";
	cin>>ns.nam;
	fflush(stdin);
	cout<<"\nNhap so chung minh thu : ";
	cin.getline(cmt,10);
	cout<<"\nNhap ho khau : ";
	cin.getline(k,50);
	fflush(stdin);
}

void khachhang::xuat(){
	NS ns;
	cout<<"Ho va ten : "<<ht
		<<"\nNgay thang nam sinh : " <<ns.ngay<<ns.thang<<ns.nam
		<<"\nSo chung minh thu : " <<cmt
		<<"\nHo khau : "<<k<<endl;
		fflush(stdin);
		cout<<"---------------"<<endl;
	
}
void sapxep(){
	
}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].namxb < a[j].namxb){
				qlsach tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	xuat(a,n);
}
int main()
{	
	int n;
	cout<<"Nhap so luong khach hang : ";
	cin>>n;
	khachhang a[n];
	fflush(stdin);
	for(int i = 0; i < n; i++)
	{
		cout<<"\nKhach hang thu "<<i+1<<endl;
		a[i].nhap();
	}	
	for(int i = 0; i < n; i++)
	{
		cout<<"\nKhach hang thu "<<i+1<<endl;
		a[i].xuat();
	}
	return 0;
}