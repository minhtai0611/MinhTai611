#include "Customer.h"
using namespace std;
void Customer::Tim_sach(vector<Sach> DS) {
	if (DS.size() == 0) cout << "Khong tim thay sach!";
	else
		for (int i = 0; i < DS.size(); i++)
		{
			DS[i].xuatSach();
			cout << endl;
		}
}

Customer::Customer()
{
}

Customer::~Customer()
{
}
