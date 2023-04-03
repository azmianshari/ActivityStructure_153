#include <iostream>
using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;
};

struct Mahasiswa {
	string nim;
	string nama;
	AlamatDetail alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;

	cout << "Masukan Nim : ";
	cin >> mhs.nim;
	cout << "Msukan Nama : ";
	cin >> mhs.nama;
	cout << "Masukan Alamat : " << endl;
	cout << "\nMasukan nama desa : ";
	cin >> mhs.alamat.desa;
	cout << "\nMasukan nama kota : ";
	cin >> mhs.alamat.kota;
	cout << "Masukan Umur : ";
	cin >> mhs.umur;

}