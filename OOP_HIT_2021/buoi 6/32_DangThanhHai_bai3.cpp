#include<iostream>
#include<string.h>
using namespace std;
class Electronic{
protected:
	int congSuat,dienAp;
public:
	Electronic(int congSuat,int dienAp);
};
class MayGiat:public Electronic{
private:
	float dungTich;
	char loai[30];
public:
	MayGiat(int congSuat,int dienAp,float dungTich,char *loai);
	void Xuat();
};
class TuLanh:public Electronic{
private:
	float dungTich;
	int soNgan;
public:
	TuLanh(int congSuat,int dienAp,float dungTich,int soNgan);
	void Xuat();
};
Electronic::Electronic(int congSuat,int dienAp){
	this->congSuat=congSuat;
	this->dienAp=dienAp;
}
MayGiat::MayGiat(int congSuat,int dienAp,float dungTich,char *loai):Electronic(congSuat,dienAp){
	this->dungTich=dungTich;
	strcpy(this->loai,loai);
}
TuLanh::TuLanh(int congSuat,int dienAp,float dungTich,int soNgan):Electronic(congSuat,dienAp){
	this->dungTich=dungTich;
	this->soNgan=soNgan;
}
void MayGiat::Xuat(){
	cout << "Cong suat:" << congSuat << endl;
	cout << "Dien ap:" << dienAp << endl;
	cout << "Dung tich:" << dungTich << endl;
	cout << "Loai:" << loai << endl;
}
void TuLanh::Xuat(){
	cout << "Cong suat:" << congSuat << endl;
	cout << "Dien ap:" << dienAp << endl;
	cout << "Dung tich:" << dungTich << endl;
	cout << "So ngan:" << soNgan << endl;
}
int main(){
	MayGiat a(10,220,300,"New");
	TuLanh b(1,220,400,3);
	cout << "--------THONG TIN MAY GIAT----------" << endl;
	a.Xuat();
	cout << "--------THONG TIN TU LANH----------" << endl;
	b.Xuat();
}

