#include<iostream>
#include<iomanip>
using namespace std;
class ThongTin{
private:
	char hoTen[30];
	char sdt[12];
	int soNha;
	char ngoNha[30];
	char phuong[30];
	char quan[30];
	char thanhPho[30];
public:
	void Nhap();
	void Xuat();
};
class Hang{
private:
	char tenHang[30];
	long long donGia;
	int soLuong;
	friend class Phieu;
public:
	void Nhap();
	void Xuat();
};
class Phieu{
private:
	char maPhieu[30];
	char ngaySd[30];
	ThongTin x;
	Hang *y;
	int n;
public:
	void Nhap();
	void Xuat();
};
void ThongTin::Nhap(){
	cout << "Ho va ten:";fflush(stdin);gets(hoTen);
	cout << "So dien thoai:";fflush(stdin);gets(sdt);
	cout << "Nhap dia chi nha" << endl;
	cout << "So nha:";cin >> soNha;
	cout << "Mgo:";fflush(stdin);gets(ngoNha);
	cout << "Phuong:";fflush(stdin);gets(phuong);
	cout << "Quan:";fflush(stdin);gets(quan);
	cout << "Thanh pho:";fflush(stdin);gets(thanhPho);
}
void ThongTin::Xuat(){
	cout << "Ho va ten nguoi di cho:"<<hoTen << endl;
	cout << "So dien thoai:"<<sdt << endl;
	cout << "Dia chi: so " << soNha << ", ngo " << ngoNha << ",phuong " << phuong << ",quan " << quan << ", " << thanhPho << endl;
}
void Hang::Nhap(){
	cout << "Ten Hang:";fflush(stdin);gets(tenHang);
	cout << "Don gia:";cin >> donGia;
	cout << "So luong:";cin >> soLuong;
}
void Hang::Xuat(){
	cout << left << setw(30) << tenHang << setw(12) << donGia << setw(12) << soLuong << setw(12) << soLuong*donGia << endl;
}
void Phieu::Nhap(){
	cout << "Ma phieu:";fflush(stdin);gets(maPhieu);
	cout << "Ngay:";fflush(stdin);gets(ngaySd);
	x.Nhap();
	cout << "Nhap so luong hang:";cin >> n;
	y = new Hang[n];
	for(int i=0;i<n;i++){
		cout << "Mat Hang " << i+1 << endl;
		y[i].Nhap();
	}
}
void Phieu::Xuat(){
	cout << "\t\t\t\tPHIEU DI CHO" << endl;
	cout << "Ma Phieu:   " << maPhieu;
	cout << "\t\t\tNgay:" << ngaySd << endl;
	x.Xuat();
	long long sum=0;
	cout << left << setw(30) << "Ten hang" << setw(12) << "Don gia" << setw(12) << "So luong" << setw(12) << "Thanh tien" << endl;
	for(int i=0;i<n;i++){
		y[i].Xuat();
		sum += y[i].soLuong*y[i].donGia;
	}
	cout << "Cong thanh tien:" << sum;
}
int main(){
	Phieu x;
	x.Nhap();
	x.Xuat();
}

