#include "User.h"
using namespace std;

void user::Set_tk(string s)
{
	tk = s;
}
void user::Set_mk(string s) {
	pass = s;
}
string user::Get_tk() {
	return tk;
}
string user::Get_mk() {
	return pass;
}
//void user::Mua_sach(vector<Sach> DS) {
//	HoaDon bill;
//	bill.Input(DS);
//	DS.Add(bill);
//}
