#include "HoaDon.h"



HoaDon::HoaDon()
{
	tien = soluong = 0;
}


HoaDon::~HoaDon()
{
	tien = soluong = 0;
}


int HoaDon::getTong_tien()
{
	return tien;
}

void HoaDon::setTong_tien(int sum)
{
	tien = sum;
}
int HoaDon::getSo_luong()
{
	return soluong;
}

void HoaDon::setSo_luong(int count)
{
	soluong = count;
}
Sach HoaDon::GetSach() {
	return data;
}
void HoaDon::input(vector<Sach> temp) {
	int stt;
	soluong = tien = 0;
	temp.resize(temp.size());
	if (temp.size() <= 0) cout << "Khong tim thay sach" << endl;
	else
	{
		if (temp.size() > 1)
		{
			for (int i = 0; i < temp.size(); i++)
			{
				cout << "( " << i + 1 << " )";
				temp[i].xuatSach();
			}
			cout << "Nhap STT sach muon mua: ";
			cin >> stt;
			temp[0] = temp[abs(stt - 1)];
		}
		data = temp[0];
		cout << "Nhap so luong: ";
		cin >> soluong;
		tien = data.getGia_tien() * soluong;
		cout << "Mua thanh cong!" << endl;
	}
}
void HoaDon::output() {
	cout << "Ten: " << data.getTen_sach() << " | Ma sach: " << data.getMa_sach() << " | So luong: "
		<< soluong << " | Don gia: " << data.getGia_tien() << " | Thanh tien: " << tien << endl;
}