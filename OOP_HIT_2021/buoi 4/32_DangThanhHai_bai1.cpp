#include<iostream>
#include<iomanip>
using namespace std;
class Date {
private:
	int day;
	int month;
	int year;
public:
	void Nhap();
	void Xuat();
	friend class NhanSu;
};
void Date::Nhap() {
	cout << "Nhap ngay sinh: "; cin >> day;
	cout << "Nhap thang sinh: "; cin >> month;
	cout << "Nhap nam sinh "; cin >> year;
}
void Date::Xuat() {
	cout << this->day << "/" << this->month << "/" << this->year;
}


class NhanSu {
private:
	static int maNS;
	char hoTen[30];
	Date NS;
public:
	void Nhap();
	void Xuat();
};
int NhanSu::maNS = 0;
void NhanSu::Nhap() {
	cout << "Nhap ho ten: "; fflush(stdin); gets(hoTen);
	NS.Nhap();
}
void NhanSu::Xuat() {
	maNS++;
	cout << left << setw(12) << this->maNS << setw(20) << this->hoTen;
	NS.Xuat();
	cout << endl;
}


int main() {
	NhanSu *x;
	int n;
	cout << "Nhap so nhan su: "; cin >> n;
	x = new NhanSu[n];
	for(int i=0;i<n;i++) {
		cout << endl << "Nhap thong tin nhan su " << i+1 << "." << endl;
		x[i].Nhap();
	}
	cout << "------------Thong tin nhan su------------" << endl;
	cout << left << setw(12) << "Ma nhan su" << setw(20) << "Ho ten" << setw(12) << "Ngay sinh" << endl;
	for(int i=0;i<n;i++) {
		x[i].Xuat();
	}
}
