#include <iostream>
using namespace std;

int bilangan1, bilangan2;

int penjumlahan(int a, int b)
{
	return a + b;
}

int pengurangan(int a, int b)
{
	return a - b;
}

int perkalian(int a, int b)
{
	return a * b;
}

int pembagian(int a, int b)
{
	return a / b;
}

void inputdata()
{
	cout << "\nMasukkan Bilangan Pertama : ";
	cin >> bilangan1;
	cout << "Masukkan Bilangan kedua : ";
	cin >> bilangan2;
}

int main()
{
	int pilihan;
	do
	{
		system("CLS");
		cout << "Menu Kalkulator Sederhana" << endl;
		cout << "1.	Penjumlahan" << endl;
		cout << "2.	Pengurangam" << endl;
		cout << "3.	Perkalian" << endl;
		cout << "4.	Pembagian" << endl;
		cout << "5. Keluar" << endl;
		cout << "Masukkan Pilian : " << endl;
		cin >> pilihan;

		switch (pilihan)
		{
		case 1:
			inputdata();
			cout << "\nHasil Penjumlahan : " << penjumlahan(bilangan1, bilangan2) << endl;
			system("pause");
			break;
		case 2:
			inputdata();
			cout << "\nHasil Pengurangan : " << pengurangan(bilangan1, bilangan2) << endl;
			system("pause");
			break;
		case 3:
			inputdata();
			cout << "\nHasil perkalian : " << perkalian(bilangan1, bilangan2) << endl;
			system("pause");
			break;
		case 4:
			inputdata();
			cout << "\nHasil Pembagian : " << pembagian(bilangan1, bilangan2) << endl;
			system("pause");
			break;
		case 5:
			break;
		default:
			cout << "Pilihan tidak Valid" << endl;
			system("pause");
			break;
		}
	} while (pilihan != 5); //!=adalah tidak sama dengan
	
	return 0;
}