#include "DS_Sach.h"
void main() {
	DS_Sach sach;
	string s;
	sach.nhap();
	sach.xuat();
	sach.timkiem();
	cout << "Nhap ten sach muon cap nhat:";
	rewind(stdin);
	getline(cin, s);
	sach.CapNhatGia(s);
	cout << "Nhap ten sach muon xoa" << endl;
	rewind(stdin);
	getline(cin, s);
	sach.XoaSach();
	sach.xuat();
}