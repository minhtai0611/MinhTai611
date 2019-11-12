#pragma once
#include"Sach.h"
#include<vector>
class DS_Sach
{
private:
	vector<Sach>a;
	int n;
public:
	DS_Sach();
	~DS_Sach();
	void nhap();
	void xuat();
	void timkiem();
	void CapNhatGia(string ten);
	void XoaSach();
	void Push_Book(Sach book);
	void XuatMangTacGia(string author);
};