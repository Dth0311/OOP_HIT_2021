#include<iostream>
using namespace std;
class TamThuc{
private:
	float a,b,c;
public:
	friend istream&operator>>(istream &is,TamThuc &y);
	friend ostream&operator<<(ostream &os,TamThuc y);
	TamThuc operator-();
	TamThuc operator+(TamThuc y);
	TamThuc operator-(TamThuc y);	
};
istream&operator>>(istream &is,TamThuc &y){
	cout << "a=";is >> y.a;
	cout << "b=";is >> y.b;
	cout << "c=";is >> y.c;
	return is;
}
ostream&operator<<(ostream &os,TamThuc y){
	os << y.a << "*X^2";
	if(y.b>=0){
		os << " + " << y.b << "*X";
	}else{
		os << " - " << -y.b << "*X";
	}
	if(y.c>=0){
		os << " + " << y.c;
	}else{
		os << " - " << -y.c;
	}
	return os;
}
TamThuc TamThuc::operator-(){
	TamThuc x;
	x.a=-a;
	x.b=-b;
	x.c=-c;
	return x;
}
TamThuc TamThuc::operator+(TamThuc y){
	TamThuc x;
	x.a = this->a + y.a;
	x.b = this->b + y.b;
	x.c = this->c + y.c;
	return x;
}
TamThuc TamThuc::operator-(TamThuc y){
	TamThuc x;
	x.a = this->a - y.a;
	x.b = this->b - y.b;
	x.c = this->c - y.c;
	return x;
}
int main(){
	TamThuc a,b,tong,hieu;
	cout << "Nhap he so tam thuc 1:"; cin >> a;
	cout << "Nhap he so tam thuc 2:"; cin >> b;
	a=-a;
	b=-b;
	cout << "Tam thuc 1 sau khi dao dau:" << a << endl;
	cout << "Tam thuc 2 sau khi dao dau:" << b << endl;
	tong = a+b;
	hieu = a-b;
	cout << "Tong hai tam thuc dao dau:" << tong << endl;
	cout << "Hieu hai tam thuc dao dau:" << hieu << endl;
}

