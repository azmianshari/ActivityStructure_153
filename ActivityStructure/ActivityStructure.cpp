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
}