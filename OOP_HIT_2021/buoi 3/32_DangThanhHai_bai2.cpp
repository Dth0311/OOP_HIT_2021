#include<iostream>
using namespace std;
class NSX{
private:
	char maNSX[20];
	char tenNSX[20];
	char dcNSX[20];
public:
	void Nhap();
	void Xuat();
};
class Hang{
	char maHang[20];
	char tenHang[20];
	NSX x;
public:
	void Nhap();
	void Xuat();
};
void NSX::Nhap(){
	cout << "Ma NSX:";fflush(stdin);gets(maNSX);
	cout << "Ten NSX:";fflush(stdin);gets(tenNSX);
	cout << "Dia chi NSX:";fflush(stdin);gets(dcNSX);	
}
void NSX::Xuat(){
	cout << "Ma NSX:"<<maNSX << endl;
	cout << "Ten NSX:"<<tenNSX << endl;
	cout << "Dia chi NSX:"<<dcNSX << endl;
}
void Hang::Nhap(){
	cout << "Ma hang:";fflush(stdin);gets(maHang);
	cout << "Ten hang:";fflush(stdin);gets(tenHang);
	x.Nhap();
}
void Hang::Xuat(){
	cout << "Ma hang:"<<maHang << endl;
	cout << "Ten hang:"<<tenHang << endl;
	x.Xuat();
}
int main(){
	int n; 
	Hang *a;
	cout << "Nhap so mat hang:";cin >> n;
	a= new Hang[n];
	for(int i=0;i<n;i++){
		cout << "Nhap mat hang thu " << i+1 << endl;
			a[i].Nhap();
	} 
	for(int i=0;i<n;i++){
		cout << "=====Thong tin mat hang thu " << i+1 << "=====" << endl;
		a[i].Xuat();
	}

}

