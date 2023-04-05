#include <iostream>
using namespace std;

struct DetailAlamat {
	char desa[20];
	char kota[20];
};

struct Mahasiswa {
	char nim[12];
	char nama[20];
	DetailAlamat alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;

	cout << "Masukkan NIM : ";
	cin.getline(mhs.nim, 12);
	cout << "Masukkan Umur : ";
	cin >> mhs.umur;
	cin.ignore(1, '\n');
	cout << "Masukkan Nama : ";
	cin.getline(mhs.nama, 20);
	cout << "Alamat : ";
	cout << "\n\tMasukkan Desa : ";
	cin.getline(mhs.alamat.desa, 20);
	cout << "\nMasukkan Kota : ";
	cin.getline(mhs.alamat.kota, 20);

	cout << "\n\nNim : " << mhs.nim;
	cout << "\nUmur : " << mhs.umur;
	cout << "\nNama : " << mhs.nama;
	cout << "\nAlamat : ";
	cout << "\ndesa : " << mhs.alamat.desa;
	cout << "\nkota : " << mhs.alamat.kota;

}