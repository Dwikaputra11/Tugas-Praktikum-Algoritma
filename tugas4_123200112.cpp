#include <iostream>
using namespace std;


int main()
{

	int a, a_1, a_n, b, b_1, b_n, pil;
	char lagi;

	do{ cout << "Perkalian dan Perpangkatan" << endl;
	cout << "1. Perkalian" << endl;
	cout << "2. Perpangkatan" << endl;
	cout << "Pilih: "; cin >> pil;
	
		switch(pil){
			case 1:

			cout << "Input angka N: "; cin >> a;
			cout << "Input angka M: "; cin >> b;
			if (b >= 0 && a >= 0){
			cout << b;
			b_1 = b;
			for(int i = 1; i<a; i++){
				cout << " + " << b ;
				b_n = b_1 + b;
				b_1 = b_n;
			}
			cout << " = " << b_n << endl;
			} else {cout << "HANYA BISA MEMASUKKAN ANGKA POSITIF" << endl;}
			break;

			case 2:

			cout << "Input angka N: "; cin >> a;
			cout << "Input angka M: "; cin >> b;
			if(a >= 0 && b >= 0){
			cout << a;
			a_1 = a;
			for(int i = 1; i<b; i++){
				cout << " * " << a ;
				a_n = a_1 * a;
				a_1 = a_n;
			}
			cout << " = " << a_n << endl;
			} else {cout << "HANYA BISA MEMASUKKAN ANGKA POSITIF" << endl;}
			break;
			}
			cout << "Ingin menghitung lagi (Y/N) :";cin >> lagi;
		} while ( lagi == 'Y' || lagi == 'y');

		cout << "TERIMAKASIH TELAH MEMAKAI PROGRAM INI" << endl;	

	cin.get();
	cin.get();
	return 0;
}
