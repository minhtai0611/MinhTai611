#pragma once
#include"HoaDon.h"
class DS_HoaDon
{
private:
	vector<HoaDon> DS;
	int Tongtien = 0;
public:
	void Add(HoaDon);
	void Remove(string name, int sl);
	void Output();
	HoaDon TimBill(string name);
	DS_HoaDon();
	~DS_HoaDon();
};