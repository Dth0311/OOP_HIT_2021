#include<iostream>
#include<iomanip>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Phieu;
class NhanVien{
private:
	char TenNV[30];
	char ChucVu[30];
	char KiemKe[30];
	char MaPhong[30];
	char TruongPhong[30];
public:
	void nhap();
	void xuat();
	friend class Phieu;
};
class TaiSan{
	private:
		char TenTaiSan[30];
		int SoLuong;
		char TinhTrang[20];
    public:
    	void nhap();
    	void xuat();
    	friend void Sua(Phieu a);
        friend	class Phieu;
};
class Phieu{
	private:
		char MaPhieu[10];
		char NgayKK[15];
		TaiSan *taisans;
		NhanVien x;
		int n; 
	public:
		void nhap();
		void xuat();
	    friend void Sua(Phieu a);
	    friend void SapXep(Phieu a);
	    friend void chen(Phieu &a,TaiSan x,int vt); 
};
void NhanVien::nhap(){
	cout<<"Ten nhan vien:"; fflush(stdin); gets(TenNV);
	cout<<"Chuc vu:"; fflush(stdin); gets(ChucVu);
	cout<<"Kiem ke tai phong:"; fflush(stdin); gets(KiemKe);
	cout<<"Ma phong:"; fflush(stdin); gets(MaPhong);
	cout<<"Truong phong:"; fflush(stdin); gets(TruongPhong);
}
void NhanVien::xuat(){
	cout<<left<<setw(12)<<"Ten nhan vien:"<<TenNV;
	cout<<"\t\t\tChuc vu:"<<ChucVu<<endl;
	cout<<left<<setw(12)<<"Kiem ke tai phong:"<<KiemKe;
	cout<<"\t\t\tMa phong:"<<MaPhong<<endl;
	cout<<"Truong phong:"<<TruongPhong<<endl;
}
void TaiSan::nhap(){
	cout<<"Ten san pham: "; fflush(stdin); gets(TenTaiSan);
	cout<<"So luong: "; cin>>SoLuong;
	cout<<"Tinh trang: "; fflush(stdin); gets(TinhTrang);
}
void TaiSan::xuat(){
	cout <<left<<setw(12)<<TenTaiSan<<setw(12)<<SoLuong<<setw(12)<<TinhTrang<<setw(12)<<endl; 
}
void Sua(Phieu a){
	for(int i=0;i<a.n;i++){
		if(strcmp(a.taisans[i].TenTaiSan,"May vi tinh")==0){
		a.taisans[i].SoLuong=20;
		}
	}
}
void Phieu::nhap(){
	cout<<"Ma phieu: "; fflush(stdin); gets(MaPhieu);
	x.nhap();
	cout<<"So luong tai san: "; cin>>n;
	taisans = new TaiSan[n];
	for(int i=0; i<n; i++){
		taisans[i].nhap();
	}
}
void Phieu::xuat(){
	cout << "\t\t\t PHIEU KIEM KE TAI SAN" << endl;
	cout << left <<setw(12) << "Ma Phieu:" << MaPhieu;
	cout << "\t\t\tNgay kiem ke:"<< NgayKK << endl;
	x.xuat();
	int sum=0;
	cout << left << setw(12) << "Ten tai san" << setw(12) << "So luong" << setw(12) << "Tinh trang" << endl;
	for(int i=0; i<n; i++){
		taisans[i].xuat();
		sum += taisans[i].SoLuong;
	}
	cout<<left<<setw(50)<<"So tai san da kiem ke: "<<n<<"Tong so luong: "<<sum;
}
void chen(Phieu &a,TaiSan x,int vt){
	a.taisans = (TaiSan*)realloc(a.taisans,(a.n+1)*sizeof(TaiSan));
	for(int i=a.n;i>vt-1;i--){
		a.taisans[i]=a.taisans[i-1];
	}
	a.n++;
	a.taisans[vt-1]=x;
}
void SapXep(Phieu a){
	for(int i=0;i<a.n-1;i++){
		for(int j=i+1;j<a.n;j++){
			if(a.taisans[i].SoLuong > a.taisans[j].SoLuong){
				TaiSan tg = a.taisans[i];
				a.taisans[i] = a.taisans[j];
				a.taisans[j] = tg;
			}
		}
	}
}
int main(){
	Phieu a;
	a.nhap();
	a.xuat();
	Sua(a);
	cout << "\n\t\t\t\t-------------" << endl;
	a.xuat();
	TaiSan x("Lap top",10,"tot");
	chen(a,x,2);
	cout << "\n\t\t\t -----------PHIEU SAU KHI CHEN------------" << endl;
	a.xuat();
	cout << "\n\t\t\t -----------PHIEU SAU KHI SAP XEP----------" << endl;
	SapXep(a);
	a.xuat();
}
