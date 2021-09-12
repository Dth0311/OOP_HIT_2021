#include<iostream>
#include<string.h>
using namespace std;
class Hang{
private:
	char maHang[30];
	char tenHang[30];
	char ngayNhap[30];
	int NXS;
	float gia;
	int soLuong;
public:
	void Nhap();
	void Xuat();
	Hang();
	Hang(char *a,char *b,char *c,int namSX,float giaTri,int soSP);
	~Hang();
};
void Hang::Nhap(){
	cout << "Ma hang:"; fflush(stdin); gets(maHang);
	cout << "Ten hang:"; fflush(stdin); gets(tenHang);
	cout << "Ngay nhap(DD/MM/YYYY):";fflush(stdin); gets(ngayNhap);
	cout << "Nam san xuat:";cin >> NXS;
	cout << "Gia:"; cin >> gia;
	cout << "So luong:"; cin >> soLuong;
}
void Hang::Xuat(){
	cout << "Ma hang:"<<maHang << endl;
	cout << "Ten hang:"<<tenHang << endl;
	cout << "Ngay nhap(DD/MM/YYYY):"<<ngayNhap << endl;
	cout << "Nam san xuat:"<<NXS << endl;
	cout << "Gia:"<<gia << endl;
	cout << "So luong:"<<soLuong << endl;
	cout << "\t\t Thanh tien:" << soLuong*gia << endl;
}
Hang::Hang(){
	strcpy(maHang,"");
	strcpy(tenHang,"");
	strcpy(ngayNhap,"");
	NXS=0;
	gia=0;
	soLuong=0;
}
Hang::Hang(char *a,char *b,char *c,int namSX,float giaTri,int soSP){
	strcpy(maHang,a);
	strcpy(tenHang,b);
	strcpy(ngayNhap,c);
	NXS=namSX;
	gia=giaTri;
	soLuong=soSP;
}
Hang::~Hang(){
	strcpy(maHang,"");
	strcpy(tenHang,"");
	strcpy(ngayNhap,"");
	NXS=0;
	gia=0;
	soLuong=0;
}
int main(){
	Hang P,Q("123abc","hang","03/11/2020",2019,20000,3);
	Q.Xuat();
	cout << "======================" << endl;
	P.Nhap();
	cout << "\t\t Thong tin vua nhap" << endl;
	P.Xuat();
}

