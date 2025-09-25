#include <iostream.h>
#include <conio.h>
#include <stdio.h>

main () {
 char nim[50];
 char nama[50];
 float nilai1, nilai2, nilai3;
 float ratarata, jumlahtugas, result;

 cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
 cout << "Nim Siswa         :";
 cin >> nim;
 cout << "Nama Siswa        :";
 gets (nama);
 cout << "Nilai Tugas 1     :";
 cin >> nilai1;
 cout << "Nilai Tugas 2     :";
 cin >> nilai2;
 cout << "Nilai Tugas 3     :";
 cin >> nilai3;
 jumlahtugas = 3;
 ratarata = nilai1 + nilai2 + nilai3;
 result = ratarata / jumlahtugas;
 printf ("Nim %s, Siswa yang bernama %s\n", nim, nama);
 cout << "Memperoleh nilai rata-rata " << result;
 cout << " dari hasil tugas yang diikutinya";

 getch();
}
