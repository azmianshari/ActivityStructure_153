#include <iostream>
using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs1, mhs2;
	mhs1.nim = "20220140153";
	mhs1.nama = "Muhammad Azmi Anshari";
	mhs1.alamat = "Tasikmalaya";
	mhs1.umur = 19;

	cout << "Masukan nim : ";
	cin >> mhs2.nim;
	cout << "Masukan nama : ";
	cin >> mhs2.nama;
	cout << "Masukan alamat : ";
	cin >> mhs2.alamat;
	cout << "Masukan Umur : ";
	cin >> mhs2.umur;

	cout << "\nNim : " << mhs1.nim;
	cout << "\nNama : " << mhs1.nama;
	cout << "\nAlamat : " << mhs1.alamat;
	cout << "\nUmur : " << mhs1.umur;
}