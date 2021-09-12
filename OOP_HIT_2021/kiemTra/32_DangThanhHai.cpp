#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
class Phieu;
class NCC{
private:
	char maNCC[30];
	char tenNCC[30];
	char diaChi[30];
	char sdt[30];
public:
	void Nhap();
	void Xuat();
};
class SanPham{
private:
	char maSP[30];
	char tenSP[30];
	int soLuong;
	long long donGia;
public:
	void Nhap();
	void Xuat();
	long long ThanhTien();
	friend class Phieu;
};
class Phieu{
private:
	char maPhieu[30];
	char ngayLap[30];
	NCC x;
	SanPham *y;
	int n;
public:
	void Nhap();
	void Xuat();
	friend void SapXep(Phieu a);
	friend void Chen(Phieu &a,SanPham x,int vt);
};
void NCC::Nhap(){
	cout << "Ma nha cung cap:";fflush(stdin);gets(maNCC);
	cout << "Ten nha cung cap:";fflush(stdin);gets(tenNCC);
	cout << "Dia chi:";fflush(stdin);gets(diaChi);
	cout << "SDT:";fflush(stdin);gets(sdt);
}
void NCC::Xuat(){
	cout << "Ma nha cung cap:"<<maNCC;
	cout << "\t\tTen nha cung cap:"<<tenNCC<<endl;
	cout << "Dia chi:"<<diaChi;
	cout << "\t\tSDT:"<<sdt<<endl;
}
long long SanPham::ThanhTien(){
	return donGia*soLuong;
}
void SanPham::Nhap(){
	cout << "Ma san pham:";fflush(stdin);gets(maSP);
	cout << "Ten san pham:";fflush(stdin);gets(tenSP);
	cout << "So luong:";cin >> soLuong;
	cout << "Don gia:";cin >> donGia;
}
void SanPham::Xuat(){
	cout << left << setw(20) << maSP << setw(15) << tenSP << setw(12) << soLuong << setw(12) << donGia << setw(20) << ThanhTien() << endl;
}
void Phieu::Nhap(){
	cout << "Ma phieu:";fflush(stdin);gets(maPhieu);
	cout << "Ngay lap:";fflush(stdin);gets(ngayLap);
	x.Nhap();
	cout << "Nhap so san pham:";cin >> n;
	y = new SanPham[n];
	for(int i=0;i<n;i++){
		cout << "Nhap san pham thu " << i+1 << endl;
		y[i].Nhap();
	}
}
void Phieu::Xuat(){
	cout << "\t\t\t\tPHIEU NHAP VAN PHONG PHAM" <<endl;
	cout << "Ma Phieu:" << maPhieu;
	cout << "\t\tNgay lap:" << ngayLap << endl;
	x.Xuat();
	cout << left << setw(20) << "Ma SP" << setw(15) << "Ten san pham" << setw(12) << "So luong" << setw(12) << "Don gia" << setw(20) << "Thanh tien" << endl;
	long long sum=0;
	for(int i=0;i<n;i++){
		y[i].Xuat();
		sum += y[i].ThanhTien();
	}
	cout << "           TONG           " << right << setw(35) << sum;
}
void SapXep(Phieu a){
	for(int i=0;i<a.n;i++){
		for(int j=i+1;j<a.n;j++){
			if(a.y[i].ThanhTien() < a.y[j].ThanhTien()){
				SanPham tg = a.y[i];
				a.y[i]=a.y[j];
				a.y[j]=tg;
			}
		}
	}
}
void Chen(Phieu &a,SanPham x,int vt){
	a.y = (SanPham*)realloc(a.y, (a.n+1)*sizeof(SanPham));
	for(int i=a.n;i>vt-1;i--){
		a.y[i]=a.y[i-1];
	}
	a.n++;
	a.y[vt-1]=x;
}
int main(){
	Phieu a;
	a.Nhap();
	a.Xuat();
// cau 2
	SapXep(a);
	cout << "\n----------------" << endl;
	a.Xuat(); 
// cau 3
	cout << "\n-----------------" << endl;
	SanPham x;
	x.Nhap();
	Chen(a,x,1);
	cout << "\t\t\tThong tin sau khi chen" << endl;
	a.Xuat();
}

