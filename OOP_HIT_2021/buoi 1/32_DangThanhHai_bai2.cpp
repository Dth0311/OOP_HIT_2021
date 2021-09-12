#include<iostream>
using namespace std;
class sinhVien{
public:
	char Msv[30];
	char HoVaTen[30];
	int ngay,thang,nam;
	char gioiTinh[3];
	float diemTb;
	char xepLoai[30];
	void nhap();
	void xuat();
	void hoanDoi();
};
void sinhVien::nhap(){
	cout << "\nMa sinh vien:";fflush(stdin);gets(Msv);
	cout << "Ho va ten:";fflush(stdin);gets(HoVaTen);
	cout << "Ngay sinh:";cin >> ngay;
	cout << "Thang sinh:";cin >> thang;
	cout << "Nam sinh:";cin >> nam;
	cout << "Gioi tinh:";fflush(stdin);gets(gioiTinh);
	cout << "Diem trung binh:";cin >> diemTb;
	cout << "Xep loai hanh kiem:";fflush(stdin);gets(xepLoai);
}
void sinhVien::xuat(){
	cout << "\nMa sinh vien:"<<Msv << endl;
	cout << "Ho va ten:"<<HoVaTen << endl;
	cout << "date of birth:"<< ngay << "/"<<thang<<"/"<<nam << endl;
	cout << "Gioi tinh:"<<gioiTinh << endl;
	cout << "Diem trung binh:"<<diemTb << endl;
	cout << "Xep loai hanh kiem:"<<xepLoai << endl;
}
int main(){
	sinhVien SVDiemCao,SVDiemThap;
	SVDiemCao.nhap();
	SVDiemThap.nhap();
	if(SVDiemCao.diemTb<SVDiemThap.diemTb){
		sinhVien tg= SVDiemCao;
		SVDiemCao = SVDiemThap;
		SVDiemThap= tg;
	}
	cout << "=========Xuat thong tin sinh vien========" << endl;
	SVDiemCao.xuat();
	SVDiemThap.xuat();
}

