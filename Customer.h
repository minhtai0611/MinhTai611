#pragma once
#include<iostream>
using namespace std;
#include"DS_Sach.h"
class Customer
{
protected:
	string Gioi_tinh;
	string ten;
	int tuoi;
public:

	Customer();
	void Tim_sach(vector<Sach>);
	~Customer();
};

