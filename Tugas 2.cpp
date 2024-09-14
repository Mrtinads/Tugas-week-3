/*
TUGAS WEEK 3
Tugas 2

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

int main()

{
  int bil;

  while (1)
    {
        cout << "Masukkan Angka : ";
        cin >> bil;
        cout << endl;
    
            if(bil%2==0)
                {
                    cout << "Bilangan Tersebut Adalah Genap " << endl;
                }

            else
                {
                    cout << "Bilangan Tersebut Adalah Ganjil " << endl;
                }

                    cout << endl;
    }
            
return 0;
    
}
