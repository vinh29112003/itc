#include<iostream>
using namespace std;
class GV{
	private:
		char ht[30];
		int t;
		char bc[15];
		char cn[20];
		float bl;
	public:
		friend istream& operator >>(istream& is,GV &a){
			fflush(stdin);
			cout<<"Nhap ho ten : ";
			cin.getline(a.ht,30);
			cout<<"Nhap tuoi : ";
			is>>a.t;
			fflush(stdin);
			cout<<"Nhap bang cap cao nhat duoc dao tao : ";
			cin.getline(a.bc,30);;
			cout<<"Nhap chuyen nganh : ";
			cin.getline(a.cn,30);
			cout<<"Nhap bac luong : ";
			is>>a.bl;
			fflush(stdin);
		}
		friend ostream& operator<<(ostream& os,GV &a){
			os	<<"Ho va ten : " <<a.ht<<endl
				<<"Tuoi : "<<a.t<<endl
				<<"Bang cap cao nhat duoc dao tao : "<<a.bc<<endl
				<<"Chuyen nganh : "<<a.cn<<endl
				<<"Bac luong : "<<a.bl<<endl;
		}
		
		
};

int main(){
	int n;
	cout<<"Nhap so luong giao vien : ";
	cin>>n;
	GV a[n];
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap thong tin giao vien ["<<i+1<<"] : "<<endl;
		cin>>a[i];
		cout<<"\n";
	}
	for(int i = 0; i < n; i++)
	{
		cout<<"Thong tin giao vien thu ["<<i+1<<"] : "<<endl;
		cout<<a[i];
		cout<<"\n";
	}
}