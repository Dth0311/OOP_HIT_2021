#include<iostream>
#include<string.h>
using namespace std;
class Faculty;
class School{
	char name[30];
	char date[30];
	friend class Faculty;
};
class Faculty{
private:
	char name[30];
	char date[30];
	School x;
public:
	void Input();
	void Output();
};
class Student{
private:
	Faculty y;
	char lop[30];
	float score;
public:
	void Input();
	void Output();
	Student();
};
void Faculty::Input(){
	cout << "Ten truong:";fflush(stdin);gets(x.name);
	cout << "Ngay thanh lap truong:";fflush(stdin);gets(x.date);
	cout << "Ten khoa:";fflush(stdin);gets(name);
	cout << "Ngay thanh lap khoa:";fflush(stdin);gets(date);
}
void Faculty::Output(){
	cout << "Ten truong:"<<x.name<<endl;
	cout << "Ngay thanh lap truong:"<<x.date<<endl;
	cout << "Ten khoa:"<<name<<endl;
	cout << "Ngay thanh lap khoa:"<<date<<endl;
}
void Student::Input(){
	y.Input();
	cout << "Lop:";fflush(stdin);gets(lop);
	cout << "Diem:";cin >> score;
}
void Student::Output(){
	y.Output();
	cout << "Lop:"<< lop << endl;
	cout << "Diem:"<< score << endl;
}
Student::Student(){
	strcpy(lop,"");
	score=0;
}
int main(){
	Student *a;
	int n;
	cout << "Nhap so sinh vien:";cin >> n;
	a = new Student[n];
	for(int i=0;i<n;i++){
		cout << "Nhap sinh vien thu " << i+1 << endl;
		a[i].Input();
	}
	for(int i=0;i<n;i++){
		cout << "=======Thong tin sinh vien " << i+1 << "========" << endl;
		a[i].Output();
	}
}

