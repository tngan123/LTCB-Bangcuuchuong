#include <iostream>
using namespace std;
int main() {
	int so;
	cout << "Nhap so: "; cin >> so;
	int cuuchuong[8] = { 2,3,4,5,6,7,8,9 };
	for (int i = 0; i < 8; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << cuuchuong[i] << "x" << j << "=" << cuuchuong[i] * j << endl;
		}

	}
	return 0;
}