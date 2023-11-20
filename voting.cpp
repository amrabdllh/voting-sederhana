#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int pilih, jumlah1 = 0, jumlah2 = 0, jumlah3 = 0;
	char lanjut;
	
	
//	cout << "PROGRAM VOTING SEDERHANA" << endl;
//	cout << "\n";
//	cout << "DAFTAR KANDIDAT : \n1. MONKEY D. LUFFY\n2. ANYA FORGER\n3. FRIEREN" << endl;
//	cout << "\n";
	do{
		cout << "PROGRAM VOTING SEDERHANA" << endl;
		cout << "\n";
		cout << "DAFTAR KANDIDAT : \n1. MONKEY D. LUFFY\n2. ANYA FORGER\n3. FRIEREN" << endl;
		cout << "\n";
		cout << "MASUKKAN PILIHAN MU : ";
		cin >> pilih;	
		switch(pilih){
		case 1:
			cout << "Kamu Memilih Nomor 1" << endl;
			jumlah1 = jumlah1 + 1;
			cout << "Jumlah Suara : " << jumlah1 << endl;
			break;
		case 2:
			cout << "Kamu Memilih Nomor 2" << endl;
			jumlah2 = jumlah2 + 1;
			cout << "Jumlah Suara : " << jumlah2 << endl;
			break;
		case 3:
			cout << "Kamu Memilih Nomor 3" << endl;
			jumlah3 = jumlah3 + 1;
			cout << "Jumlah Suara : " << jumlah3 << endl;
			break;
		default:
			cout << "Pilihan Tidak Ada";
			break;

		}
		cout << "Mau pilih lagi ?";
		cin >> lanjut;	
		
	}while(lanjut == 'y' || lanjut == 'Y');
	
	cout << "\n";
	cout << "PROGRAM SELESAI" << endl; 
	cout << "JUMLAH SUARA PILIHAN 1 ADALAH = " << jumlah1 << "\nJUMLAH SUARA PILIHAN 2 ADALAH = " << jumlah2 << "\nJUMLAH SUARA PILIHAN 3 ADALAH = " << jumlah3 << endl;

}
