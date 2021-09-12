#include<iostream>
using namespace std;
class DoanhNghiep;
class DiaChi{
	char dienThoai[12];
	char phuong[30];
	char quan[30];
	char thanhPho[30];
	friend class DoanhNghiep;
};
class Date{
private:
	int day;
	int month;
	int year;
public:
	void Nhap();
	void Xuat();
};
class DoanhNghiep{
private:
	int maDn;
	char tenDn[60];
	Date ngayTl;
	DiaChi diaChi;
	char giamDoc[30];
	long doanhThu;
public:
	void Nhap();
	void Xuat();
};
void Date::Nhap(){
	cout << "Nhap ngay thanh lap doanh nghiep:" << endl;
	cout << "Ngay:";cin >> day;
	cout << "Thang:";cin >> month;
	cout << "Nam:";cin >> year;	
}
void Date::Xuat(){
	cout << "Ngay thanh lap:" << day << "/" << month << "/" << year << endl;
}
void DoanhNghiep::Nhap(){
	cout << "Ma doanh nghiep:"; cin >> maDn;
	cout << "Ten doanh nghiep:"; fflush(stdin);gets(tenDn);
	ngayTl.Nhap();
	cout << "So dien thoai:"; fflush(stdin);gets(diaChi.dienThoai);
	cout << "Dia chi doanh nghiep" << endl;
	cout << "Phuong:";fflush(stdin);gets(diaChi.phuong);
	cout << "Quan:";fflush(stdin);gets(diaChi.quan);
	cout << "Thanh pho:";fflush(stdin);gets(diaChi.thanhPho);
	cout << "Giam doc:";fflush(stdin);gets(giamDoc);
	cout << "Doanh thu:";cin >> doanhThu;
}
void DoanhNghiep::Xuat(){
	cout << "Ma doanh nghiep:" <<maDn << endl;
	cout << "Ten doanh nghiep:"<<tenDn << endl;
	ngayTl.Xuat();
	cout << "So dien thoai:"<<diaChi.dienThoai << endl;
	cout << "Dia chi doanh nghiep" << endl;
	cout << "Phuong:"<<diaChi.phuong << endl;
	cout << "Quan:"<<diaChi.quan << endl;
	cout << "Thanh pho:"<<diaChi.thanhPho << endl;
	cout << "Giam doc:"<<giamDoc << endl;
	cout << "Doanh thu:"<<doanhThu << endl;
}
int main(){
	DoanhNghiep x;
	x.Nhap();
	cout << "==========Thong tin doanh nghiep============" << endl;
	x.Xuat();
}

