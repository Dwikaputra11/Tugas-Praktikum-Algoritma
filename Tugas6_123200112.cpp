#include <iostream>
using namespace std;
#include <algorithm>
float phi = 3.14;
float kll(float r);
float luas(float r);
float volume(float r,float t);

int main()
{
	int pil;
	float r,t;  
	char ulang;
	do{
		cout << "Hitung Lingakaran ==========\n";
		cout << "1. Luas Lingkaran\n";
		cout << "2. Keliling Lingkaran\n";
		cout << "3. Volume Tabung\n";
		cout << "Pilihan : "; cin >> pil;
		switch(pil){
			case 1:
			cout << "Jari - jari : "; cin >> r;
			cout << "Luas Lingkaran : " << luas(r) << endl;
			break;
			case 2: 
			cout << "Jari - jari : "; cin >> r;
			cout << "Keliling Lingkaran : " << kll(r) << endl; 
			break;
			case 3:
			cout << "Jari - jari: "; cin >> r;
			cout << "Tinggi     : "; cin >> t;
			cout << "Volume Tabung : " << volume(r,t) << endl;
			default:
			cout << "Input and salah :(\n";
		}
		cout << "Ulang Program (Y/N)? "; cin >> ulang;

	}while(ulang == 'y' | ulang == 'Y');

	cin.get();
	return 0;
}
float kll(float r){
	return 2*phi*r;
}
float luas(float r){
	return 2*phi*r*r;
}
float volume(float r, float t){
	return phi*r*r*t;
}