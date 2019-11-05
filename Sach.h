#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Sach
{
private:
	string Ten_sach;
	int Ma_sach;
	string The_loai;
	int Gia_tien;
	string Tac_Gia;
	string NXB;
public:
	Sach();
	~Sach();
	string getTen_sach();
	void setTen_sach(string& ten);
	int getMa_sach();
	void setMa_sach(int& id);
	string getThe_loai();
	void setThe_loai(string& theloai);
	int getGia_tien();
	void setGia_tien(int& tien);
	string getTac_Gia();
	void setTac_Gia(string& ten);
	string getNXB();
	void setNXB(string& nxb);
	void nhapSach();
	void xuatSach();
};

