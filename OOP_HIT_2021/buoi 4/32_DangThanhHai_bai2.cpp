#include<iostream>
#include<iomanip>
using namespace std;
class NCC{
private:
	char maNCC[12];
	char tenNCC[30];
	char diaChi[30];
public:
	void Nhap();
	void Xuat();
	friend class Phieu;
};
class TaiSan{
private:
	char tenHang[30];
	float donGia;
	int soLuong;
public:
	void Nhap();
	void Xuat();
	friend class Phieu;
};
class Phieu{
private:
	char maPhieu[12];
	char ngayTl[12];
	NCC x;
	TaiSan *y;
	int n;
public:
	void Nhap();
	void Xuat();
};
void NCC::Nhap(){
	cout << "Ma nha cung cap:";fflush(stdin);gets(maNCC);
	cout << "Ten nha cung cap:";fflush(stdin);gets(tenNCC);
	cout << "Dia chi:";fflush(stdin);gets(diaChi);
}
void NCC::Xuat(){
	cout << "Ma NCC:"<<maNCC;
	cout << "\t\t\t\tTen NCC:"<<tenNCC<< endl;
	cout << "Dia chi:"<<diaChi<< endl;
}
void TaiSan::Nhap(){
	cout << "Ten hang:";fflush(stdin);gets(tenHang);
	cout << "Don gia:";cin >> donGia;
	cout << "So luong:";cin >> soLuong;
}
void TaiSan::Xuat(){
	cout << left << setw(30) << tenHang << setw(12) << donGia << setw(12) << soLuong << setw(12) <<soLuong*donGia << endl; 
}
void Phieu::Nhap(){
	cout << "Ma phieu:";fflush(stdin);gets(maPhieu);
	cout << "Ngay thanh lap:";fflush(stdin);gets(ngayTl);
	x.Nhap();
	cout << "So luong tai san:";cin >> n;
	y = new TaiSan[n];
	for(int i=0;i<n;i++){
		cout << "Mat hang thu " << i+1 << endl;
		y[i].Nhap();
	}
}
void Phieu::Xuat(){
	cout << "\t\t\t\t PHIEU NHAP HANG" << endl;
	cout << "Ma phieu:"<< this->maPhieu;
	cout << "\t\t\t\tNgay thanh lap:"<< this->ngayTl << endl;
	x.Xuat();
	cout << left << setw(30) << "Ten hang" << setw(12) << "Don gia" << setw(12) << "So luong" << setw(12) << "Thanh tien" << endl;
	float sum=0; 
	for(int i=0;i<n;i++){
		y[i].Xuat();
		sum+= y[i].donGia*y[i].soLuong;
	}
	cout << right << "Cong thanh tien:" << sum;
}
int main(){
	Phieu n;
	n.Nhap();
	n.Xuat();
}

