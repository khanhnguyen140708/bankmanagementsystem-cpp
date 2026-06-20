#include <iostream>
#include <string>
using namespace std;

const string CCCD = "094208004009";
const string PASSWORD = "123aloalo";
bool login = false;

int main() {
	while(true) {
		int choice;
		cout << "===== BANK SYSTEM =====" << endl;
		cout << "1. Dang nhap" << endl;
		cout << "2. Xem so du" << endl;
		cout << "3. Nap tien" << endl;
		cout << "4. Rut tien" << endl;
		cout << "5. Dang xuat" << endl;
		cout << "0. Thoat" << endl;
		cout << "Nhap vao lua chon cua ban (tu 0 - 5): ";
		cin >> choice;
		switch(choice) {
			case 0:
				return 0;
			case 1: {
				if (login==false) {
					string input_cccd, pw;
					cout << "===== BANK SYSTEM =====" << endl;
					cout << "Nhap cccd cua ban: ";
					cin >> input_cccd;
					cout << "Nhap mat khau: ";
					cin >> pw;
					if (input_cccd==CCCD && pw==PASSWORD) {
						cout << "Dang nhap thanh cong!" << endl;
						login = true;
					}
					else {
						cout << "Sai mat khau hoac cccd!" << endl;
					}
					break;
				}
				cout << "Ban da dang nhap roi!" << endl;
				break;
			}
			case 2:
				if (login==false) {
					cout << "Vui long dang nhap truoc!" << endl;
					break;
				}
			case 3:
			case 4:
			case 5:
			default:
				cout << "Lua chon khong hop le!" << endl;
				break;
		}
	}
	return 0;
}
