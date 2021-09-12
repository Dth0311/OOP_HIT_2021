#include<iostream>
#include<math.h>
using namespace std;
class  HinhTron{
public:
	double r;
	double chuVi();
	double dienTich();
};
double HinhTron::chuVi(){
	return 2*M_PI*r;
}
double HinhTron::dienTich(){
	return 2*M_PI*r*r;
}
int main(){
	HinhTron x;
	cout << "Nhap ban kinh r:";cin >> x.r;
	cout << "Chu vi hinh tron:" << x.chuVi() << endl;
	cout << "Dien tich hinh tron:" << x.dienTich();
	
}

