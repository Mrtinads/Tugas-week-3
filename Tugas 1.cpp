/*
TUGAS WEEK 3
Tugas 1

Dibuat oleh :

Nama        : Martin Anggara Dwiky Saputra
Nim         : 2341220009
Kelas       : 2A D-IV TOE
Pada Tanggal: 14 September 2024
*/

// Pustaka yang berkaitan dengan iostream
#include <iostream>

// Pustaka iostream yang standard
using namespace std;

// function main
int tahunproduksi, tahunsekarang, umur;

int main()
{
    cout << "Menentukan Umur Kendaraan \n\n";

    cout << "Masukkan Tahun Produksi : ";
    cin >> tahunproduksi;

    cout << "Masukkan Tahun Sekarang : ";
    cin >> tahunsekarang;

    umur = tahunsekarang - tahunproduksi;

    cout << "\nUmur Kendaraan Anda Adalah : " << umur << " tahun";
}



