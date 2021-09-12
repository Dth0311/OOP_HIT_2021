#include<iostream>
#include<math.h>
using namespace std;
class PhanSo{
private:
	int a,b;
public:
	void Nhap();
	void Xuat();
	void Rut();
	PhanSo();
	PhanSo(float x,float y);
	~PhanSo();
};
void PhanSo::Nhap(){
	cout << "Nhap mot phan so(a/b):" << endl;
	cout << "a=";cin >> a;
	cout << "b=";cin >> b;
}
void PhanSo::Xuat(){
	if(b==0){
		cout << "Mau so bang 0 loi phep tinh" << endl;
	}
	cout << "Phan so:" << a << "/" << b << endl;
}
void PhanSo::Rut(){
	int tu,mau;
	tu = abs(a);
	mau = abs(b);
	while(tu!=mau){
		if(tu>mau){
			tu-=mau;
		}
		else{
			mau-=tu;
		}
	}
	a/=tu;
	b/=tu;
	cout <<"Phan so sau khi rut gon:" << a << "/" << b << endl;
}
PhanSo::PhanSo(){
	a=b=0;
}
PhanSo::PhanSo(float x,float y){
	a=x;
	b=y;
}
PhanSo::~PhanSo(){
	a=b=0;
}
int main(){
	PhanSo P(2,4),Q; 
	cout << "Phan so P" << endl;
	P.Xuat();
	P.Rut();
	cout << "===================" << endl;
	Q.Nhap();
	Q.Xuat();
	Q.Rut();
	
}

