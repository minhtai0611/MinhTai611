#include "DS_HoaDon.h"
void DS_HoaDon::Add(HoaDon bill) {
	if (bill.getSo_luong() > 0)
	{
		for (int i = 0; i < DS.size(); i++)
			if (DS[i].GetSach() == bill.GetSach())
			{
				DS[i].setSo_luong(DS[i].getSo_luong() + bill.getSo_luong());
				DS[i].setTong_tien(DS[i].getTong_tien() + bill.getTong_tien());
				Tongtien += bill.getTong_tien();
				return;
			}
		DS.push_back(bill);
		Tongtien += bill.getTong_tien();
	}
}
void DS_HoaDon::Remove(string name, int sl) {
	int i = 0;
	for (i = 0; i < DS.size(); i++)
	{
		if (DS[i].GetSach().getTen_sach() == name) break;
	}
	/*if (i >= DS.size()) {
		cout<<"Khong co sach trong hoa don";
		return;
	}*/
	if (sl < DS[i].getSo_luong()) {
		DS[i].setSo_luong(DS[i].getSo_luong() - sl);
		DS[i].setTong_tien(DS[i].getSo_luong() * DS[i].GetSach().getGia_tien());
		Tongtien -= sl * DS[i].GetSach().getGia_tien();
	}
	else
	{
		Tongtien -= DS[i].getTong_tien();
		DS.erase(DS.begin() + i);
	}
}
DS_HoaDon::DS_HoaDon()
{
}
void DS_HoaDon::Output() {
	for (int i = 0; i < DS.size(); i++)
	{
		cout << "STT " << i + 1 << " ";
		DS[i].output();
	}
	cout << "Tong tien: " << Tongtien;
}
HoaDon DS_HoaDon::TimBill(string name) {
	HoaDon emty;
	for (int i = 0; i < DS.size(); i++)
		if (DS[i].GetSach().getTen_sach() == name) return  DS[i];
	return emty;

}
DS_HoaDon::~DS_HoaDon()
{
}
