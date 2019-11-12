#include"Mang_sach.h"
#include"DS_HoaDon.h"
#include"User.h"
#include<iostream>
using namespace std;
void main()
{
	int m, n, sl, kt;
	string name, tk, mk;
	Sach book;
	Mang_sach s;
	s.NhapMang();
	s.XuatMang();
	HoaDon bill;
	DS_HoaDon sbill;
	Customer khach;
	user user1;
	user1.Set_tk("abc");
	user1.Set_mk("123");
	cout << "-------------------------------------------" << endl;
	cout << "\tHPIT-Book xin chao quy khach" << endl;
	cout << "\tTim sach  : Nhap 1" << endl;
	cout << "\tThoat     : Nhap 0" << endl;
	cout << "-------------------------------------------" << endl;
	do
	{
		cout << endl << "\t-------------------" << endl << "\tNhap chuc nang: ";
		cin >> m;
		switch (m)
		{

		case 1:
			cout << "Nhap ten sach can tim: ";
			rewind(stdin);
			getline(cin, name);
			book = s.Timsach(name).front();
			s.Timsach(name).front().XuatSach();
			if (s.Timsach(name).size() > 0) cout << "Ban co muon mua sach khong?" << endl;
			cout << "1. Co" << endl;
			cout << "2. Khong" << endl;
			cout << "--------->" << endl;
			do {
				cout << "Nhap chuc nang: ";
				cin >> kt;
			} while (kt < 1 && kt>2);
			if (kt == 1)
			{
				cout << "Ban can phai dang nhap!" << endl;
				do {
					cout << "Ten dang nhap: ";
					rewind(stdin);
					getline(cin, tk);
					cout << "Mat khau     : ";
					rewind(stdin);
					getline(cin, mk);
					if (tk != user1.Get_tk() || mk != user1.Get_mk()) cout << "Ten dang nhap hoac mat khau khong chinh xac!" << endl;
				} while (tk != user1.Get_tk() || mk != user1.Get_mk());
				cout << "\t\tXin chao " << user1.Get_tk() << "!" << endl;
				cout << "Ban co muon mua sach: " << endl;
				s.Timsach(name).front().XuatSach();
				cout << "1. Co" << endl;
				cout << "2. Khong" << endl;
				cin >> kt;
				if (kt == 1) bill.Input(s.Timsach(name));
				sbill.Add(bill);
				cout << "-------------------------------------------" << endl;
				cout << "\tHPIT-Book xin chao quy khach" << endl;
				cout << "\tMua sach  : Nhap 1" << endl;
				cout << "\tHuy sach  : Nhap 2" << endl;
				cout << "\tIn hoa don: Nhap 3" << endl;
				cout << "\tDang xuat     : Nhap 0" << endl;
				cout << "-------------------------------------------" << endl;
				do
				{
					cout << endl << "\t-------------------" << endl << "\tNhap chuc nang: ";
					cin >> n;
					switch (n)
					{
					case 1:
						cout << "Nhap ten sach can mua: ";
						rewind(stdin);
						getline(cin, name);
						bill.Input(s.Timsach(name));
						user1.Add(bill);
						break;
					case 2:
						cout << "Nhap ten sach muon huy: ";
						rewind(stdin);
						getline(cin, name);
						if (user1.TimBill(name).Get_sl() == 0)
							cout << "Khong co sach trong hoa don!" << endl;
						else {
							cout << "Nhap so luong can xoa: ";
							cin >> sl;
							user1.Remove(name, sl);
							cout << "Thanh cong!" << endl;
						}
						break;
					case 3:
						user1.Output();
						break;
					case 0:
						cout << "Dang xuat thanh cong!";
						break;
					default:
						cout << "Khong hop le!";
						break;
					}
				} while (n != 0);
			}
			break;
		case 0:
			break;
		default:
			cout << "Khong hop le!" << endl;
			break;
		}
	} while (m != 0);
}