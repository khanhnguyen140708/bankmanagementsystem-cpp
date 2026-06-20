#include <iostream>
#include <string>
using namespace std;

const string CCCD = "094208004009";
const string PASSWORD = "123aloalo";
bool login = false;
long long sodu = 5000000000;

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
			case 2: {
				if (login==false) {
					cout << "Vui long long dang nhap truoc!" << endl;
					break;
				}
				cout << "So du hien tai: " << sodu << " dong." << endl;
				break;
			}
			case 3: {
				if (login==false) {
					cout << "Vui long long dang nhap truoc!" << endl;
					break;
				}
				cout << "===== BANK SYSTEM =====" << endl;
				cout << "Nhap so tien nap (don vi dong): ";
				long long sotiennap;
				cin >> sotiennap;
				if (sotiennap < 2000) {
					cout << "So tien nap khong hop le!" << endl;
					break;
				}
				cout << "Ban co chac chan nap so tien " << sotiennap << " vao tai khoan khong?" << endl;
				cout << "Y/N: ";
				char recheck;
				cin >> recheck;
				switch(recheck) {
					case 'Y':
					case 'y':
						sodu += sotiennap;
						sotiennap = 0;
						cout << "So du hien tai la: " << sodu << " dong" << endl;
						break;
					case 'N':
					case 'n':
					default:
						sotiennap = 0;
				}
				break;
			}
			case 4: {
				if (login==false) {
					cout << "Vui long dang nhap truoc!" << endl;
					break;
				}
				cout << "===== BANK SYSTEM =====" << endl;
				cout << "Nhap so tien can rut (don vi dong): ";
				long long sotienrut;
				cin >> sotienrut;
				if (sodu<sotienrut) {
					cout << "So du hien tai khong du!" << endl;
					break;
				}
				else if (sotienrut < 2000) {
					cout << "So tien rut khong hop le!" << endl;
					break;
				}
				cout << "Ban co chac chan rut so tien " << sotienrut << " dong" << "khoi so du tai khoan hien tai khong?" << endl;
				cout << "Y/N: ";
				char recheck;
				cin >> recheck;
				switch(recheck) {
					case 'y':
					case 'Y':
						sodu -= sotienrut;
						sotienrut = 0;
						cout << "So du hien tai la: " << sodu << " dong" << endl;
						break;

					case 'n':
					case 'N':
					default:
						sotienrut = 0;
						break;
				}
				break;
			}
			case 5:
				if (login==false) {
					cout << "Vui long long dang nhap truoc!" << endl;
					break;
				}
				login = false;
				cout << "Dang xuat thanh cong!" << endl;
				break;
			default:
				cout << "Lua chon khong hop le!" << endl;
				break;
		}
	}
	return 0;
}
