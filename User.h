#pragma once
#include<iostream>
#include"Customer.h"
#include"DS_HoaDon.h"
#include"DS_HoaDon.h";
using namespace std;
class user : public DS_HoaDon
{
private:
	string tk;
	string pass;
	vector<HoaDon> DS;
public:
	void Set_tk(string);
	void Set_mk(string);
	string Get_tk();
	string Get_mk();
	void Mua_sach(vector<Sach>);
};
