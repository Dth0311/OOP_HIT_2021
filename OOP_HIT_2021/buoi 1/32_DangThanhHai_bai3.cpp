#include<iostream>
using namespace std;
class CanBo{
	char MaCanBo[30];
	char HoTen[30];
	int ngay,thang,nam;
	int NgayLv;
public:
	void nhap();
	long long TinhLuong();
	void xuat();
};
void CanBo::nhap(){
	cout << "Ma can bo:";fflush(stdin);gets(MaCanBo);
	cout << "Ho va ten:";fflush(stdin);gets(HoTen);
	cout << "Nhap ngay thang nam sinh"<< endl;
	cout << "Ngay sinh:";cin>> ngay;
	cout << "Thang sinh:";cin >> thang;
	cout << "Nam sinh:"; cin >> nam;
	cout << "So ngay lam viec:";cin >> NgayLv;
}
long long CanBo::TinhLuong(){
	return NgayLv*250000;
}
void CanBo::xuat(){
	cout << "Ma can bo:"<<MaCanBo<<endl;
	cout << "Ho va ten:"<<HoTen<<endl;
	cout << "Ngay sinh:" << ngay << "/" << thang << "/" << nam<< endl;
	cout << "So ngay lam viec:"<<NgayLv<<endl;
}
int main(){
	CanBo a;
	a.nhap();
	cout << "=========Thong tin can bo vua nhap=======" << endl;
	a.xuat();
	cout << "Luong thang:" << a.TinhLuong();
}

