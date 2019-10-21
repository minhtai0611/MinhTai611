#include "HoaDon.h"



HoaDon::HoaDon()
{
}


HoaDon::~HoaDon()
{
}


int HoaDon::getTong_tien()
{
	return tien;
}

void HoaDon::setTong_tien(int& sum)
{
	tien = sum;
}
int HoaDon::getSo_luong()
{
	return soluong;
}

void HoaDon::setSo_luong(int& count)
{
	soluong=count;
}

void HoaDon::Sum() {
	DS_Sach a;
	int k;
	int tien = 0;
	a.timkiem();
	cout << "Nhap vao so luong cuon sach" << endl;
	cin >> k;
	for (int i = 0; i < data.size(); i++) {
		
		tien=k*data[i].getGia_tien();
	}
	cout << "Tong tien la: " << tien;
}
