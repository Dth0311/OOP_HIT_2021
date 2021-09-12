#include<iostream>
#include<iomanip>
using namespace std;
class NCC{
private:
	char maNCC[12];
	char tenNCC[30];
	char diaChi[30];
	char sdt[12];
public:
	void Nhap();
	void Xuat();
	friend class Phieu;
};
class SanPham{
private:
	char maSP[30];
	char tenSP[30];
	char tinhTrang[10];
	int soLuong;
	long long donGia;
public:
	void Nhap();
	void Xuat();
	friend class Phieu;
};
class Phieu{
private:
	char maPhieu[30];
	NCC x;
	SanPham *y;
	int n;
public:
	void Nhap();
	void Xuat();
};
void NCC::Nhap(){
	cout << "Ma nha cung cap:";fflush(stdin);gets(maNCC);
	cout << "Ten nha cung cap:";fflush(stdin);gets(tenNCC);
	cout << "Dia chi:";fflush(stdin);gets(diaChi);
	cout << "SDT:";fflush(stdin);gets(sdt);
}
void NCC::Xuat(){
	cout << "Ma nha cung cap:"<<maNCC;
	cout << "\t\t\tTen nha cung cap:"<<tenNCC<<endl;
	cout << "Dia chi:"<<diaChi;
	cout << "\t\t\tSDT:"<<sdt<<endl;
}
void SanPham::Nhap(){
	cout << "Ma SP:";fflush(stdin);gets(maSP);
	cout << "Ten san pham:";fflush(stdin);gets(tenSP);
	cout << "Tinh trang:";fflush(stdin);gets(tinhTrang);
	cout << "So luong:";cin >> soLuong;
	cout << "Don gia:"; cin >> donGia;
}
void SanPham::Xuat(){
	cout << left << setw(12) << maSP << setw(16) << tenSP << setw(12) << tinhTrang << setw(20) << soLuong << setw(12) << donGia << setw(20) << soLuong*donGia << endl; 
}
void Phieu::Nhap(){
	cout << "Ma phieu:";fflush(stdin);gets(maPhieu);
	x.Nhap();
	cout << "Nhap so san pham:";cin >> n;
	y = new SanPham[n];
	for(int i=0;i<n;i++){
		cout << "\t\t\tSan pham " << i+1 << endl;
		y[i].Nhap();
	}
}
void Phieu::Xuat(){
	cout << "\t\t\t\tPHIEU NHAP THIET BI MAY TINH" << endl;
	cout << "Ma phieu:"<< this->maPhieu <<endl;
	x.Xuat();
	cout << left << setw(12) << "Ma SP" << setw(16) << "Ten san pham" << setw(12) << "Tinh trang" << setw(20) << "So luong"<< setw(12) <<"Don gia" << setw(20) << "Thanh tien" << endl; 
	long long sum=0;
	for(int i=0;i<n;i++){
		y[i].Xuat();
		sum += y[i].soLuong*y[i].donGia;
	}
	cout << "Tong so san pham:" << n << "\t\t\t\t\tTong so tien:" << sum;
}
int main(){
	Phieu x;
	x.Nhap();
	x.Xuat();
}

