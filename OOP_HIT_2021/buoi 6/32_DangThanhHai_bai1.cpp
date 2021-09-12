#include<iostream>
using namespace std;
class Vehicle{
protected:
	char nhanHieu[30];
	int namSx;
	char hang[30];
public:
	void Nhap();
	void Xuat();
};
class Oto:public Vehicle{
private:
	int soCho;
	int dungTich;
public:
	void Nhap();
	void Xuat();
};
class Moto:public Vehicle{
private:
	int phanKhoi;
public:
	void Nhap();
	void Xuat();
};
void Vehicle::Nhap(){
	cout << "Nhan hieu:";fflush(stdin);gets(nhanHieu);
	cout << "Nam san xuat:";cin >> namSx;
	cout << "Hang:";fflush(stdin);gets(hang);
}
void Vehicle::Xuat(){
	cout << "Nhan hieu:"<<nhanHieu<< endl;
	cout << "Nam san xuat:"<<namSx<< endl;
	cout << "Hang:"<<hang<< endl;
}
void Oto::Nhap(){
	Vehicle::Nhap();
	cout << "So cho ngoi:";cin >> soCho;
	cout << "Dung tich:";cin >> dungTich;
} 
void Oto::Xuat(){
	Vehicle::Xuat();
	cout << "So cho ngoi:"<< soCho << endl;
	cout << "Dung tich:"<< dungTich << endl;
}
void Moto::Nhap(){
	Vehicle::Nhap();
	cout << "Phan khoi:";cin >> phanKhoi;
}
void Moto::Xuat(){
	Vehicle::Xuat();
	cout << "Phan khoi:"<< phanKhoi << endl;
}
int main(){
	Oto a;
	Moto b;
	cout << "==========Nhap thong tin xe Oto=======" << endl;
	a.Nhap();
	cout << "==========Nhap thong tin xe Moto=======" << endl;
	b.Nhap();
	cout << "==========Thong tin xe Oto========" << endl;
	a.Xuat();
	cout << "===========Thong tin xe Moto=========" << endl;
	b.Xuat(); 
}

