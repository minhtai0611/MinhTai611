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
	for (int i = 0; i < n;i++)
	{
		cout << "Nhap sach " << i + 1 << endl;
		a[i].nhapSach();
	}
}
void DS_Sach::xuat(){
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

}
