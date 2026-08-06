#include <iostream>
using namespace std;
int main()
{
// Deklarasi variabel
string nama;
string tempat_lahir;
string tanggal_lahir;
string alamat;
string kelas;
string jurusan;
string hobi;

// Input data biodatax
cout << "==============================" << endl;
cout << " PROGRAM BIODATA DIRI " << endl;
cout << "==============================" << endl;

cout << "Nama Lengkap : ";
getline(cin, nama);

cout << "Tempat Lahir : ";
getline(cin, tempat_lahir);

cout << "Tanggal Lahir : ";
getline(cin, tanggal_lahir);

cout << "Alamat : ";
getline(cin, alamat);

cout << "Kelas : ";
getline(cin, kelas);

cout << "Jurusan : ";
getline(cin, jurusan);

cout << "Hobi : ";
getline(cin, hobi);

// Menampilkan biodata
cout << endl;
cout << "==============================" << endl;
cout << " BIODATA SISWA " << endl;
cout << "==============================" << endl;

cout << "Nama Lengkap : " << nama << endl;
cout << "Tempat Lahir : " << tempat_lahir << endl;
cout << "Tanggal Lahir : " << tanggal_lahir << endl;
cout << "Alamat : " << alamat << endl;
cout << "Kelas : " << kelas << endl;
cout << "Jurusan : " << jurusan << endl;
cout << "Hobi : " << hobi << endl;
 return 0;
}