#include <iostream>  // Mengimpor library iostream untuk operasi input dan output
#include <string>    // Mengimpor library string untuk menggunakan tipe data string
#include <cstdlib>   // Mengimpor library cstdlib untuk fungsi seperti system

using namespace std; // Memungkinkan penggunaan elemen standar C++ tanpa prefix std::

// Deklarasi variabel global
int memilih, jumlah1 = 0, jumlah2 = 0, jumlah3 = 0; // Variabel untuk pilihan dan jumlah suara tiap kandidat
string voting;                                      // String untuk menyimpan jenis voting
string kandidat[3];                                 // Array untuk menyimpan nama-nama kandidat
string username, password;                          // String untuk menyimpan username dan password
char pilihan, coba;                                 // Karakter untuk pilihan dalam loop dan login ulang

// Fungsi untuk mengatur ulang jumlah suara
void resetJumlahSuara() {
    jumlah1 = 0;
    jumlah2 = 0;
    jumlah3 = 0;
}

// Fungsi utama program
int main() {
    awal:                      // Label untuk kembali ke awal program
    system("cls");             // Membersihkan layar console
    cout << "PROGRAM E-VOTING" << endl;
    cout << "LOGIN : " << endl;
    cout << "Masukkan Username : ";
    cin >> username;
    cout << "Masukkan Password : ";
    cin >> password;

    // Cek username dan password
    if (username == "Admin" && password == "adminuhamka") {
        system("cls");
        cout << "####### SELAMAT DATANG DI PROGRAM E-VOTING #######" << endl;
        cout << "Halo " << username << endl;
        cout << "INGIN MELAKUKAN VOTING APA ? ";
        cin.ignore();  // Membersihkan buffer sebelum getline
        getline(cin, voting);  // Membaca jenis voting
        system("cls");
        cout << "MASUKKAN NAMA-NAMA KANDIDAT (MAX 3) " << endl;
        
        // Menerima input nama kandidat
        for (int i = 0; i < 3; i++) {
            cout << "KANDIDAT " << i + 1 << " : ";
            getline(cin, kandidat[i]);
        }

        // Loop untuk proses voting
        do {
            system("cls");
            cout << "VOTING " << voting << " DIMULAI !!!" << endl;
            cout << "NAMA-NAMA KANDIDAT ADALAH SEBAGAI BERIKUT : " << endl;

            // Menampilkan nama kandidat
            for (int i = 0; i < 3; i++) {
                cout << "KANDIDAT " << i + 1 << ". " << kandidat[i] << endl;
            }

            cout << "MASUKKAN PILIHAN MU : ";
            cin >> memilih;

            // Switch case untuk menangani pilihan voting
            switch (memilih) {
                case 1:
                    cout << "Kamu Memilih Nomor 1. " << kandidat[0] << endl;
                    jumlah1++;  // Menambahkan suara ke kandidat 1
                    cout << "Jumlah Suara : " << jumlah1 << endl;
                    break;
                case 2:
                    cout << "Kamu Memilih Nomor 2. " << kandidat[1] << endl;
                    jumlah2++;  // Menambahkan suara ke kandidat 2
                    cout << "Jumlah Suara : " << jumlah2 << endl;
                    break;
                case 3:
                    cout << "Kamu Memilih Nomor 3. " << kandidat[2] << endl;
                    jumlah3++;  // Menambahkan suara ke kandidat 3
                    cout << "Jumlah Suara : " << jumlah3 << endl;
                    break;
                default:
                    cout << "Pilihan Tidak Ada" << endl;  // Menangani input yang tidak valid
                    break;
            }

            // Menanyakan apakah pengguna ingin memilih lagi
            cout << "Mau pilih lagi (y/n) ?";
            cin >> pilihan;
        } while (pilihan == 'y' || pilihan == 'Y');

        cout << "\n";
        cout << "PROGRAM SELESAI" << endl;
        
        // Menampilkan jumlah suara akhir untuk setiap kandidat
        cout << "JUMLAH SUARA 1. " << kandidat[0] << " ADALAH = " << jumlah1 << "\nJUMLAH SUARA 2. "
             << kandidat[1] << " ADALAH = " << jumlah2 << "\nJUMLAH SUARA 3. " << kandidat[2] << " ADALAH = " << jumlah3 << endl;

        resetJumlahSuara();  // Mengatur ulang jumlah suara setelah voting selesai

    } else {
        cout << "LOGIN GAGAL !!!" << endl;  // Menangani kegagalan login
    }
    cout << "LOGIN LAGI ? (y/n) : ";
    cin >> coba;

    // Mengecek apakah pengguna ingin login lagi
    if (coba == 'y' || coba == 'Y') {
        goto awal;  // Kembali ke awal program
    } else {
        goto akhir;  // Keluar dari program
    }

    akhir:
    system("cls");  // Membersihkan layar
    cout << "---------------------------------" << endl;
    cout << "PROGRAM SELESAI !!!\nTERIMA KASIH !!!" << endl;

    return 0;  // Mengakhiri program
}
