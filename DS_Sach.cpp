#include "DS_Sach.h"



DS_Sach::DS_Sach()
{
}


DS_Sach::~DS_Sach()
{
}

void DS_Sach::nhap()
{
	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap sach " << i + 1 << endl;
		a[i].nhapSach();
	}
}
void DS_Sach::xuat() {
	int n = a.size();
	for (int i = 0; i < n; i++)
	{
		cout << "Sach thu " << i + 1 << endl;
		a[i].xuatSach();
	}
}
void DS_Sach::timkiem() {
	string s;
	cout << "Nhap ten sach trong DS Sach: ";
	cin >> s;
	for (int i = 0; i < n; i++) {
		if (s == a[i].getTen_sach())
			a[i].xuatSach();
	}
}
void DS_Sach::CapNhatGia(string ten) {
	vector<int>  pos;
	int masach, gia;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i].getTen_sach() == ten) pos.push_back(i);
	}
	if (pos.size() == 0) cout << "Khong tim thay sach!";
	else
	{
		if (pos.size() > 1)
		{
			for (int j = 0; j < pos.size(); j++)  a[pos[j]].xuatSach();
			cout << "Nhap ma sach muon cap nhat gia: ";
			cin >> masach;
			for (int j = 0; j < pos.size(); j++)
			{
				if (a[pos[j]].getMa_sach() == masach) pos[0] = pos[j];
				break;
			}
		}
	}
	cout << "Nhap gia tien: ";
	cin >> gia;
	a[pos[0]].setGia_tien(gia);
	cout << "Cap nhat gia thanh cong!" << endl;
	a[pos[0]].xuatSach();
}
void DS_Sach::XoaSach() {
	string s;
	cin >> s;
	int n = a.size();
	for (int i = 0; i < n; i++) {
		if (s==a[i].getTen_sach() ) {
			a[i] = a[i + 1];
			a.pop_back();
		}
		
	}
}