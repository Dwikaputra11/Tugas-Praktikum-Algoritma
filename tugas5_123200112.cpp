#include <iostream>
using namespace std;

int main()
{
	int k, s;
	int t, p, l;
	int pil;
	char ulang;

	do{ cout << "Gambar Bangun Datar=========" << endl;
		cout << "1. Kotak Bolong  " << endl;
		cout << "2. Segitiga 	  " << endl; 
		cout << "Pilih :"; cin >> pil;

		cout << endl; 
		switch(pil){
			case 1:
			cout << "Panjang : "; cin >> p;
			cout << "Lebar   : "; cin>> l;
			for(int i = 1; i <= p; i++){
				for(int j = 1; j <= l; j++){
					if ((i == 1) || (i == p) || (j == 1) || (j == l)){
						cout << "* ";
					}else{
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;

			case 2:
			cout << "Tinggi : "; cin >> s;

			for (int i = 1; i <= s; i++){
				int x = s;
				int y = i;
				for(int j = 1 ; j <= i; j++){
				cout << y << " ";
				x--;	
				y = y + x;
				}
				cout << endl;
			}
		}
		cout << "INGIN MENCOBA LAGI (Y/N) ?? "; cin >> ulang; 	
	}while ( ulang == 'Y' || ulang == 'y');
	cin.get();
	return 0;
}
