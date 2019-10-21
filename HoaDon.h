#pragma once
#include"DS_Sach.h"
#include"Sach.h"
class HoaDon
{
private:
	vector<Sach>data;
	int tien;
	int soluong;
public:
	HoaDon();
	~HoaDon();
	void Sum();
	int getTong_tien();
	void setTong_tien(int& sum);
	int getSo_luong();
	void setSo_luong(int& count);
};

