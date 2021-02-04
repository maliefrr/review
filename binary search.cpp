#include <iostream>
using namespace std;

main(){
	int data[11],data_tengah;
	int betul = 0;
	int jumlah_data = 11;
	// posisi akhir di kurangi 1 agar pembagian menghasilkan bilangan bulat
	int awal = 0,  akhir = jumlah_data - 1;
	int cari;
	int i;
	
	// akan dapat mengulang jika ada perintah goto.... label (NB: ulang adalah nama labelnya)
	ulang:
		// masukkan data ke dalam array
		cout << "Masukkan Data yang ingin anda cari:\t";cin>> cari;
		for(i=0;i<11;i++){
		data[i] = i;
		}
		while (awal < akhir && betul == 0 ){
		
			data_tengah = (awal+akhir) /2;
			if (cari == data[data_tengah]){
			
				betul = 1;		
			}
			else if (cari < data[data_tengah]){
			
				cout<<"cari di kiri\n";
				// kenapa akhir yang dirubah agar index tidak keluar dari array
				akhir = data_tengah - 1 ;
				
			}
			else{
				cout << "Cari di kanan\n";
				awal = data_tengah + 1;
			}
		
		}
			if (betul == 1){
			
				cout << "data ditemukan, data yang anda cari adalah " << data[data_tengah];
			
			}
			else{
				
				cout<<"data tidak ada di dalam array\n";
				
			}		
			
	
}
