#include <iostream>

using namespace std;
struct DetailAlamat
{
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

	Mahasiswa mhs[2];

	for (int i = 0; i < 2; i++)
	{
		cout << "Masukkan NIM : ";
		cin.getline(mhs[i].nim, 12);
		cout << "Masukkan Umur : ";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
		cout << "Masukkan Nama : ";
		cin.getline(mhs[i].nama, 20);
		cout << "Alamat : ";
		cout << "\n\tMasukkan Desa : ";
		cin.getline(mhs[i].alamat.desa, 20);
		cout << "\n\tMasukkan Kota : ";
		cin.getline(mhs[i].alamat.kota, 20);
	}

	for (int i = 0; i < 2; i++)
	{
		cout << "\n\nNim : " << mhs[i].nim;
		cout << "\nUmur : " << mhs[i].umur;
		cout << "\nNama : " << mhs[i].nama;
		cout << "\nAlamat : ";
		cout << "\nDesa : " << mhs[i].alamat.desa;
		cout << "\nKota : " << mhs[i].alamat.kota;
	}
}  