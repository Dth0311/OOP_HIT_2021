#include<iostream>
#include<string.h>
using namespace std;
class Tivi;
class Date{
private:
	int day,month,year;
public:
	void Nhap();
	void Xuat();
	friend Tivi;
};
class Nsx{
private:
	char tenNsx[30];
	char diaChi[30];
public:
	void Nhap();
	void Xuat();
	friend class Hang;
};
class Hang{
protected:
	char tenHang[30];
	Nsx x;
	float donGia;
public:
	void Nhap();
	void Xuat();
	Hang();
};
class Tivi:public Hang{
private:
	float kichThuoc;
	Date ngayNhap;
public:
	void Nhap();
	void Xuat();
	Tivi();
};
void Date::Nhap(){
	cout << "Ngay:";cin >> day;
	cout << "Thang:";cin >> month;
	cout << "Nam:";cin >> year;
}
void Date::Xuat(){
	cout << day << "/" << month << "/" << year << endl;
}
void Nsx::Nhap(){
	cout << "Ten NSX:";fflush(stdin);gets(tenNsx);
	cout << "Dia chi:";fflush(stdin);gets(diaChi);
}
void Nsx::Xuat(){
	cout << "Ten NSX:" << tenNsx <<endl;
	cout << "Dia chi:" << diaChi <<endl;
}
void Hang::Nhap(){
	cout << "Ten hang:";fflush(stdin);gets(tenHang);
	x.Nhap();
	cout << "Don gia:";cin >> donGia;
}
void Hang::Xuat(){
	cout << "Ten hang:" << tenHang << endl;
	x.Xuat();
	cout << "Don gia:" << donGia << endl;
}
Hang::Hang(){
	strcpy(tenHang,"");
	strcpy(x.tenNsx,"");
	strcpy(x.diaChi,"");
	donGia=0;
}
void Tivi::Nhap(){
	Hang::Nhap();
	cout << "Kich thuoc:"; cin >> kichThuoc;
	cout << "Ngay Nhap" << endl;
	ngayNhap.Nhap();
}
void Tivi::Xuat(){
	Hang::Xuat();
	cout << "Kich thuoc:" << kichThuoc << endl;
	cout << "Ngay nhap:"; ngayNhap.Xuat();
}
Tivi::Tivi():Hang(){
	kichThuoc=0;
	ngayNhap.day=ngayNhap.month=ngayNhap.year=0;
}
int main(){
	Tivi a;
	a.Nhap();
	cout << "-----------Thong tin tivi------------" << endl;
	a.Xuat();
}

