#include<iostream>
using namespace std;
class Employee{
private:
	char id[30];
	char name[30];
	int age;
	static float salary;
public:
	void Input();
	void Output();
	static float getSalary();
};
float Employee::salary=333333;
float Employee::getSalary(){
	return Employee::salary;
}
void Employee::Input(){
	cout << "Ma nhan vien:";fflush(stdin);gets(id);
	cout << "Ho va ten:";fflush(stdin);gets(name);
	cout << "Tuoi:";cin >> age;
}
void Employee::Output(){
	cout << "\nMa nhan vien:"<<id<<endl;
	cout << "Ho va ten:"<<name<<endl;
	cout << "Tuoi:"<< age <<endl;
}
int main(){
	Employee a,b;
	cout << "Nhap thong tin nhan vien thu 1" << endl;
	a.Input();
	cout << "Nhap thong tin nhan vien thu 2" << endl;
	b.Input();
	cout << "==========Xuat thong tin cac nhan vien========";
	a.Output();
	b.Output();
	cout <<"\t\tLuong nhan vien:" <<Employee::getSalary();
}

