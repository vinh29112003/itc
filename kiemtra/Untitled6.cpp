#include<iostream.h>
#include<iomanip.h>

struct ngayxuatban{
	int ngay;
	int thang;
	int nam;
};

class ANPHAM{
	private:
		char mh[20];
		char tenxb[30];
		float dongia;
		ngayxuatban nxb;
	
	public:
	
		ANPHAM(char *mh = "", char *tenxb = "", float dongia = 0, ngayxuatban nxb = 0)
		{		
					strcpy(this -> mh,mh);
					strcpy(this -> tenxb,tenxb);
					this ->	dongia = dongia;
					this -> nxb = nxb;
					
		}
		
		~ANPHAM(){};
		
		void nhap()
		{	
			fflush(stdin);
			cout<<"\nNhap ma hang : ";
			cin.getline(mh,20);
			cout<<"\nNhap ten nha xuat ban : ";
			cin.getline(tenxb,30);
			cout<<"\nNhap ngay xuat ban : ";
			cin>>nxb.ngay;
			cout<<"\nNhap thang xuat ban : ";
			cin>>nxb.thang;
			cout<<"\nNhap nam xuat ban : ";
			cin>>nxb.nam;
			cout<<"\nNhap don gia : ";
			cin>>dongia;
			fflush(stdin);
				
		}
		
		void xuat()
		{
			cout 	<<"Mahang : "	
				<<"Ten nha xuat ban : "
				<<"Ngay xuat ban : "
				<< "Don gia : "
				<<mh
			 	<<tenxb
			 	<<nxb.ngay<<"/"<<nxb.thang <<"/"<<nxb.nam
			 	<< dongia <<endl;
		
		}		
};

class SACH : public ANPHAM
{
	
	private:
		char tensach[30];
		char tentg[30];
		int sl;
		
	public:
		
		SACH( char *mh = "", char *tenxb = "", float dongia = 0, 
		ngayxuatban nxb =0 ,
		char *tensach = "", char *tentg = "", int sl = 0) :
	 	ANPHAM(mh , tenxb, dongia , nxb)
		{
			strcpy (this -> tensach, tensach);
			strcpy (this ->	tentg, tentg);
					this -> sl=sl;
					
		}
		~SACH(){}
			
		friend istream& operator >>(istream& is, SACH &a)
		{	
			ANPHAM ::nhap();
			cout<<"\nTen sach : ";
			cin>>a.tensach;
			cout<<"\nTen tac gia : ";
			cin>>a.tentg;
			cout<<"\nSo luong :";
			cin>>a.sl;
			fflush.stdin;
		}
		
		
		
};

int main(){
	return 0;
}
