#include "Sach.h"



Sach::Sach()
{
}


Sach::~Sach()
{
}

string Sach::getTen_sach()
{
	return Ten_sach;
}

void Sach::setTen_sach(string& ten)
{
	Ten_sach = ten;
}

int Sach::getMa_sach()
{
	return Ma_sach;
}

void Sach::setMa_sach(int& id)
{
	Ma_sach = id;
}

string Sach::getThe_loai()
{
	return The_loai;
}

void Sach::setThe_loai(string& theloai)
{
	The_loai = theloai;
}
int Sach::getGia_tien()
{
	return Gia_tien;
}

void Sach::setGia_tien(int& tien)
{
	Gia_tien = tien;
}
string Sach::getTac_Gia()
{
	return Tac_Gia;
}

void Sach::setTac_Gia(string& ten)
{
	Tac_Gia = ten;
}
string Sach::getNXB() {
	return NXB;
}
void Sach::setNXB(string& nxb) {
	NXB = nxb;
}
void Sach::nhapSach() {
	string s, t,str,str1;
	int n, e;
	cout << "Nhap ten sach: ";
	cin >> s;
	setTen_sach(s);
	cout << "Nhap ma sach: ";
	cin >> n;
	setMa_sach(n);
	cout << "Nhap the loai: ";
	cin >> t;
	setThe_loai(t);
	cout << "Nhap gia tien: ";
	cin >> e;
	setGia_tien(e);
	cout << "Nhap ten tac gia: ";
	cin >> str;
	setTac_Gia(str);
	cout << "Nhap ten NXB: ";
	cin >> str1;
	setNXB(str1);
}
void Sach::xuatSach() {
	cout << "Ten sach: " << getTen_sach() << endl;
	cout << "Ma sach: " << getMa_sach() << endl;
	cout << "The loai: " << getThe_loai() << endl;
	cout << "Gia tien: " << getGia_tien() << endl;
	cout << "Tac gia: " << getTac_Gia() << endl;
	cout << "NXB: " << getNXB() << endl;
}