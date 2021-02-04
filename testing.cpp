#include <iostream>
#include <string>
using namespace std;
main(){

	int angka[30],i,j,data,ketemu=0,hasil_data;
	string pilihan;
	ulang:
		cout<<"masukkan data yang ingin anda cari\t:";cin>> data ;
		for( i = 0;i<30;i++){
			angka[i] = i + 2 - 12;
		}
		for(j = 0;j<30;j++){
			if (angka[j] == data){
				ketemu = 1;
				hasil_data = angka[j];
			}
		}
			if (ketemu == 1){
				cout<<"data angka yang dicari ada di dalam array, data yang anda cari adalah angka "<< hasil_data;
				salah:
					cout<<"\n apakah anda ingin mencari data lain ?? (y/n):\t";cin>>pilihan;
					if(pilihan == "y"){
						system("cls");
						goto ulang;
					}
					else if(pilihan == "n"){
						system("cls");
						cout<<"terimakasih telah memakai program search";
					}
					else{
						cout<<"invalid input";
						goto salah;
					}
			}	
			else{
				cout<<"data yang anda cari tidak ada dalam array";
				salahwoy:
					cout<<"\n apakah anda ingin mencari data lain ?? (y/n):\t";cin>>pilihan;
					if(pilihan == "y"){
						system("cls");
						goto ulang;
					}
					else if(pilihan == "n"){
						system("cls");
						cout<<"terimakasih telah memakai program search";
					}
					else{
						cout<<"invalid input";
						goto salahwoy;
					}				
			}		
}

