#include "DS_Sach.h"
#include"HoaDon.h"
void main() {
	DS_Sach sach;
	string s;
	sach.nhap();
	sach.xuat();
	sach.timkiem();
	/*cout << "Nhap ten sach muon cap nhat:";
	rewind(stdin);
	getline(cin, s);
	sach.CapNhatGia(s);
	sach.XoaSach();
	sach.xuat();*/
	HoaDon bill;

	vector<Sach>temp;
	bill.input(temp);
	
	bill.output();
}