#include "Author.h"
using namespace std;

void Author::Them_sach(DS_Sach DS) {
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
	cout << "Nhap ten NXB: ";
	rewind(stdin);
	getline(cin, s);
	book.setNXB(s);
	book.setTac_Gia(name);
	DS.Push_Book(book);
}
void Author::Xuat_sach(DS_Sach DS)
{
	cout << "Nhung sach do ban viet:";
	DS.XuatMangTacGia(name);
}
void Author::Xoa_sach(DS_Sach DS) {
	int stt;
	vector<Sach> s;
	string bookname;
	cout << "Nhap ten sach muon xoa: ";
	getline(cin, bookname);
	s = DS.timkiem();
	for (int i = 0; i < s.size(); i++)
		if (s[i].getTac_Gia() != name)
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
	DS.XoaSach(s.front());
}
