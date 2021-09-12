#include<iostream>
#include<math.h>
using namespace std;
class PTB2{
private:
	float a,b,c;
public:
	void Nhap();
	void Xuat();
	void Giai();
	PTB2();
	PTB2(float x,float y,float z);
	~PTB2();
};
void PTB2::Nhap(){
	cout << "Nhap he so cua phuong trinh bac 2" << endl;
	cout << "a=";cin >> a;
	cout << "b=";cin >> b;
	cout << "c=";cin >> c;
}
void PTB2::Xuat(){
	cout << "Phuong trinh: " << a << "x^2 + " << b << "x + " << c  << " = 0"<< endl;
}
void PTB2::Giai(){
	if(a==0){
		cout << "Day khong phai phuong trinh bac 2.";
	}
	else{
		float delta = b*b-4*a*c;
		if(delta<0){
			cout << "Phuong trinh vo nghiem" << endl;
		}
		else{
			if(delta==0){
				cout << "Phuong trinh co nghiem kep" << endl;
				cout << "x1 = x2 = " << -b/(2*a) << endl;
			}
			else{
				cout << "Phuong trinh co hai nghiem phan biet" << endl;
				cout << "x1 = " << (-b + sqrt(delta))/(2*a) << endl;
				cout << "x2 = " << (-b - sqrt(delta))/(2*a) << endl;
			}
		}
	}
}
PTB2::PTB2(){
	a=b=c=0;
}
PTB2::PTB2(float x,float y,float z){
	a=x;
	b=y;
	c=z;
}
PTB2::~PTB2(){
	a=b=c=0;
}
int main(){
	PTB2 P(1,2,1),Q;
	cout << "Phuong trinh P" << endl;
	P.Xuat();
	P.Giai();
	Q.Nhap();
	cout << "Phuong trinh Q" << endl;
	Q.Xuat();
	Q.Giai();
}

