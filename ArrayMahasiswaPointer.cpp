// ArrayMahasiswaPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <stdlib.h> // library standard untuk visual C++ 

using namespace std;

int main()
{
	cout << "Selamat datang di Tugas 13 Array mahasiwa dan pointer\n";

	char namasiswa[2][10]; // variable penampung nama siswa, maksimal 2 siswa masing masing siswa maksimal panjang namanya 10 character;
	char kelas[2][10]; // array untuk menyimpan nilai kelas
	
	int npm[2]; // penampungan untuk NPM
	int nilai[2]; // array nilai siswa
	int *ptrnilai = nilai; // pointer untuk mereferensikan data yang ada pada variable nilai siswa yang berupa array.
	int *ptrNpm = npm; // pointer untuk mereferensikan data yang ada pada variable npm yang berupa array.

	for (size_t i = 0; i < 2; i++) // untuk melakukan input data
	{
		cout << "Masukan nama siswa : ";
		cin >> namasiswa[i]; // memasukan nama siswa dengan index yang ada di perulangan
		cout << endl;
		cout << "Masukan NPM siswa : ";
		cin >> npm[i]; // mengisi variable npm pada index yang ada di perulangan
		cout << endl;

		cout << "Masukan Kelas siswa : ";
		cin >> kelas[i]; // mengisi variable kelas pada index yang ada di perulangan
		cout << endl;

		cout << "Masukan Nilai siswa : ";
		cin >> nilai[i]; // mengisi variable nilai pada index yang ada di perulangan
		cout << "----------------------------" << endl;
	}

	system("CLS"); // membersihkan terminal setelah melakukan input data

	for (size_t i = 0; i < 2; i++)
	{
		cout << "nama siswa : " << namasiswa[i]; // menampilkan nama siswa dengan index yang ada di perulangan
		cout << endl;
		cout << "NPM siswa : " << ptrNpm[i]; // menampilkan npm siswa dengan index yang ada di perulangan, npm diakses melalui pointer
		cout << endl;
		cout << "Kelas siswa : " << kelas[i]; // menampilkan kelas siswa dengan index yang ada di perulangan
		cout << endl;
		cout << "Nilai siswa : " << ptrnilai[i]; // menampilkan nilai siswa dengan index yang ada di perulangan, nilai diakses melalui pointer
		cout << endl;

		cout << "NPM siswa di index :" << i << " berada di alamat memory " << &ptrNpm[i] << endl;
		cout << "Nilai siswa di index :" << i << " berada di alamat memory " << &ptrnilai[i] << endl;
		cout << "----------------------------" << endl;
	}

	// free the memory
	free(ptrnilai); 
	free(ptrNpm);

	return 0;
}
