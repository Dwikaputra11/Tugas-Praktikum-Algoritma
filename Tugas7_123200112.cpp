#include <iostream>
using namespace std;

int main()
{	
	int panjang;
	int angka_selisih = 0;
	int max = -100000;
	int min = 100000;
	float total = 0;

	cout << "Masukkan banyak angka : ";cin >> panjang;
	float arr[panjang + 5];
	float selisih[panjang + 5];

	for(int i = 0; i < panjang; i++){
		cout << "Angka ke-" << i + 1<< " : ";cin >> arr[i];
	}
	cout << endl;
	cout << endl;

	cout << "_______Hasil_______\n";
	//deret
	cout << "Deret\t\t: ";
	for(int i = 0; i < panjang; i++){
		cout << arr[i] << " ";
	}
	cout << endl;

	//nilai maks dan min
	for(int i = 0; i < panjang; i++){
		if(arr[i] < min)
			min = arr[i];
		if(arr[i] > max)
			max = arr[i];
	}
	cout << "Maksimum\t: " << max << endl;
	cout << "Minimum\t\t: " << min << endl;

	//rata - rata
	for(int i = 0; i < panjang; i++){
		total += arr[i];
	}

	cout << "Rata-rata\t: " << total/panjang << endl;


	//selisih terbesar
	for(int i = 0; i < panjang; i++){
		selisih[i] = arr[i] - arr[i+1];
		if(i == panjang - 1)
			selisih [i] = arr[i - 1] - arr[i];
		if(selisih[i] < 0)
			selisih[i]*=-1;
		if(selisih[i] >= angka_selisih)
			angka_selisih = selisih[i];
	}
	cout << "Selisih max\t: " << angka_selisih << endl; 


	cin.get();
	return 0;
}
