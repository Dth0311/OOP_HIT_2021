#include<iostream>
using namespace std;
class SP{
private:
	float thuc,ao;
public:
	SP();
	friend istream&operator>>(istream &is,SP &y);
	friend ostream&operator<<(ostream &os,SP y);
	SP operator+(SP y);
	SP operator-(SP y);
};
SP::SP(){
	ao=thuc=0;
}
istream&operator>>(istream &is,SP &y){
	cout << "a=";is >> y.thuc;
	cout << "b=";is >> y.ao;
	return is;
}
ostream&operator<<(ostream &os, SP y){
	if(y.ao<0){
		os << y.thuc << "- i*" << -y.ao << endl;
	}else{
		os << y.thuc << "+ i*" << y.ao << endl;
	}
	return os;
}
SP SP::operator+(SP y){
	SP a;
	a.thuc = this->thuc + y.thuc;
	a.ao = this->ao + y.ao;
	return a;
}
SP SP::operator-(SP y){
	SP a;
	a.thuc = this->thuc - y.thuc;
	a.ao = this->ao - y.ao;
	return a;
}
int main(){
	SP sp1,sp2,sp3,sp4;
	cout << "Nhap so phuc 1:"; cin >> sp1;
	cout << "Nhap so phuc 2:"; cin >> sp2;
	sp3 = sp1 + sp2;
	sp4 = sp1 - sp2;
	cout << "Tong hai so phuc:SP3= " << sp3 << endl;
	cout << "Hieu hai so phuc:SP4= " << sp4 << endl;
}

