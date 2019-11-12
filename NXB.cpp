#include "NXB.h"
using namespace std;

void NXB::Them_sach(DS_Sach DS) {
	string s; int n;
	Sach book;
	rewind(stdin);
	cout << "Nhap ten sach: ";
	getline(cin, s);
	rewind(stdin);
	book.setTen_sach(s);
	cout << "Nhap ma sach: ";
	cin >> n;
	book.setMa_sach(n);
	rewind(stdin);
	cout << "Nhap the loai: ";
	getline(cin, s);
	rewind(stdin);
	book.setThe_loai(s);
	cout << "Nhap gia tien: ";
	rewind(stdin);
	cin >> n;
	book.setGia_tien(n);
	cout << "Nhap ten tac gia: ";
	rewind(stdin);
	getline(cin, s);
	book.setTac_Gia(s);
	book.setNXB(name);
	DS.Push_Book();
}
void NXB::Xuat_sach(DS_Sach DS)
{
	cout << "Nhung sach do ban phat hanh:";
	DS.XuatMangNXB(name);
}
void NXB::Xoa_sach(DS_Sach DS) {
	int stt;
	vector<Sach> s;
	string bookname;
	cout << "Nhap ten sach muon xoa: ";
	getline(cin, bookname);
	s = DS.timkiem();
	for (int i = 0; i < s.size(); i++)
		if (s[i].getNXB() != name)
		{
			s.erase(s.begin() + i);
			i--;
		}
	if (s.size() == 0) cout << "Khong tim thay!";
	else
		if (s.size() > 1)
		{
			for (int i = 0; i < s.size(); i++)
			{
				cout << "( " << i + 1 << " )";
				s[i].xuatSach();
			}
			cout << "Nhap STT sach muon xoa: ";
			cin >> stt;
			s.front() = s[abs(stt - 1)];
		};
	DS.Delete_Book(s.front());
}
