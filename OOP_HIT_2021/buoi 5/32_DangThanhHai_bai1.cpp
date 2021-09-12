#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class SinhVien{
private:
	char maSV[30];
	char name[30];
	char birthday[30];
	char gioiTinh[30];
	float diemTb;
	char xepLoai[30];
public:
	char* GetMaSV();
	void SetMaSv(char *maSV);
	char* GetName();
	void SetName(char *name);
	char* GetBirthday();
	void SetBirthday(char *birthday);
	char* GetGioiTinh();
	void SetGioiTinh(char *gioiTinh);
	float GetDiemTb();
	void SetDiemTb(float diemTb);
	char* GetXepLoai();
	void SetXepLoai(char *xepLoai);
	void Input();
	void Output();
	SinhVien();
	SinhVien(char *maSV,char *name,char *birthday,char *gioiTinh,float diemTb,char *xepLoai);
	~SinhVien();
}; 
char* SinhVien::GetMaSV(){
	return this->maSV;
}
char* SinhVien::GetName(){
	return this->name;
}
char* SinhVien::GetBirthday(){
	return this->birthday;
}
char* SinhVien::GetGioiTinh(){
	return this->gioiTinh;
}
float SinhVien::GetDiemTb(){
	return this->diemTb;
}
char* SinhVien::GetXepLoai(){
	return this->xepLoai;
}
void SinhVien::SetMaSv(char *maSV){
	strcpy(this->maSV,maSV);
}
void SinhVien::SetName(char *name){
	strcpy(this->name,name);
}
void SinhVien::SetBirthday(char *birthday){
	strcpy(this->birthday,birthday);
}
void SinhVien::SetGioiTinh(char *gioiTinh){
	strcpy(this->gioiTinh,gioiTinh);
}
void SinhVien::SetDiemTb(float diemTb){
	this->diemTb=diemTb;
}
void SinhVien::SetXepLoai(char *xepLoai){
	strcpy(this->xepLoai,xepLoai);
}
void SinhVien::Input(){
	char temp[30];
	float temp1;
	cout << "Ma sinh vien:";fflush(stdin);gets(temp);SetMaSv(temp);
	cout << "Ho ten sinh vien:";fflush(stdin);gets(temp);SetName(temp);
	cout << "Ngay sinh:";fflush(stdin);gets(temp);SetBirthday(temp);
	cout << "Gioi tinh:";fflush(stdin);gets(temp);SetGioiTinh(temp);
	cout << "Diem trung binh:";cin >> temp1;SetDiemTb(temp1);
	cout << "Xep loai dao duc:";fflush(stdin);gets(temp);SetXepLoai(temp);
}
void SinhVien::Output(){
	cout << left << setw (20) << GetMaSV() << setw(20) << GetName() << setw(20) << GetBirthday() << setw(10) << GetGioiTinh() 
	<< setw(10) << GetDiemTb() << setw(10) << GetXepLoai() << endl;
}
SinhVien::SinhVien(){
	strcpy(this->maSV,"");
	strcpy(this->name,"");
	strcpy(this->birthday,"");
	strcpy(this->gioiTinh,"");
	this->diemTb=0;
	strcpy(this->xepLoai,"");
}
SinhVien::SinhVien(char *maSV,char *name,char *birthday,char *gioiTinh,float diemTb,char *xepLoai){
	strcpy(this->maSV,maSV);
	strcpy(this->name,name);
	strcpy(this->birthday,birthday);
	strcpy(this->gioiTinh,gioiTinh);
	this->diemTb=diemTb;
	strcpy(this->xepLoai,xepLoai);
}
SinhVien::~SinhVien(){
	strcpy(this->maSV,"");
	strcpy(this->name,"");
	strcpy(this->birthday,"");
	strcpy(this->gioiTinh,"");
	this->diemTb=0;
	strcpy(this->xepLoai,"");
}
int main(){
	int n;
	SinhVien *a;
	cout << "Nhap so sinh vien:";cin >> n;
	a = new SinhVien[n];
	for(int i=0;i<n;i++){
		cout << "Thong tinh sinh vien thu " << i+1 <<endl;
		a[i].Input();
	}
	cout << left << setw (20) << "Ma sinh vien" << setw(20) << "Ho va ten" << setw(20) << "Ngay sinh" << setw(10) << "Gioi tinh"
	<< setw(10) << "Diem TB" << setw(10) << "Xep loai dao duc" << endl;
	for(int i=0;i<n;i++){
		a[i].Output();
	}
	cout << "\n\t\tNHUNG SINH VIEN DAO DUC TOT:))" <<endl;
	for(int i=0;i<n;i++){
		if(strcmp(a[i].GetXepLoai(),"Tot")==0){
			cout << i+1 << ". " <<a[i].GetName() << endl;
		}
	}
}

