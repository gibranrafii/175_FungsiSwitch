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

		
	}
}