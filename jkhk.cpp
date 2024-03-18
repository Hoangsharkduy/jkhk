#include<iostream>
using namespace std;
int main() {
	float chieu_dai, chieu_rong, dien_tich;

	cout << "Nhap vao chieu dai hinh chu nhat: \n";
		cin >> chieu_dai;

	cout << "Nhap vao chieu rong hinh chu nhat: \n";
		cin >> chieu_rong;

	dien_tich = chieu_dai * chieu_rong; // Công thức tính diện tích

	cout << "Dien tich hinh chu nhat la: \n" << dien_tich << endl;

		return 0;
}