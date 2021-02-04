#include <iostream>
#include <string>
using namespace std;

void display_menu();

void struk(int data[],int total , int bayar ,int kembalian,int ulang);

void perhitungan();


int main(){
	perhitungan();
	return 0;
}

void display_menu(){
	cout << "================================================================="<<endl;
	cout << "|          Makanan              |            Minuman            |"<<endl;
	cout << "================================================================="<<endl;
	cout << "| 1. Rawon       (Rp.15.000)    | 5. Es Teh          (Rp.3000)  |"<<endl;
	cout << "| 2. Soto Ayam   (Rp.18.000)    | 6. Es Jeruk        (Rp.5000)  |"<<endl;
	cout << "| 3. Nasi Campur (Rp.10.000)    | 7. Es Soda Gembira (Rp.8000)  |"<<endl;
	cout << "| 4. Nasi Kuning (Rp.10.000)    | 8. Es Teh Tarik    (Rp.8000)  |"<<endl;
	cout << "================================================================="<<endl;
}

void struk(int data[],int total , int bayar ,int kembalian,int ulang){
	int harga[8] = {15000,18000,10000,10000,3000,5000,8000,8000};
	string menu_tulisan[8] = {"Rawon","Soto Ayam","Nasi Campur","Nasi Kuning","Es Teh","Es Jeruk","Es Soda Gembira","Es Teh Tarik"};
	
}

void perhitungan(){
	int menu,total,kembalian,count,data[20],bayar;
	int harga[8] = {15000,18000,10000,10000,3000,5000,8000,8000};
	string menu_tulisan[8] = {"Rawon","Soto Ayam","Nasi Campur","Nasi Kuning","Es Teh","Es Jeruk","Es Soda Gembira","Es Teh Tarik"};
	char konfirmasi;
	menu:
		display_menu();
		total = 0;
		count = 0;
		while(true){
			cout << "Silahkan Masukkan Nomor Menu yang di pesan (1-8): ";cin>>menu;
			cout << "Apakah ada menu lain yang di pesan? (y/n): ";cin>>konfirmasi;
			total += harga[menu - 1];
			data[count] = menu - 1;
			count++;
			if(konfirmasi == 'y'){
				continue;
			}
			else if(konfirmasi == 'n'){
				break;
			}
			else {
				cout << "Input yang anda masukkan invalid silahkan lakukan input ulang";
				system("cls");
				goto menu;
			}
	}
	cout << "Total belanja anda adalah Rp."<<total<<endl;
	cout << "Uang yang dibayar \t: ";cin>>bayar;
	konfirmasi:
		kembalian = bayar - total;
		if(bayar > total){
			cout << "Kembali \t: "<<kembalian<<endl;
			cout << "Apakah Anda ingin melihat detail pembelian ? (y/n): ";cin>>konfirmasi;
			if(konfirmasi == 'y'){
				system("cls");
				for(int i = 0 ; i<count ; i++){
					cout<<menu_tulisan[data[i]]<<"    "<<harga[data[i]]<<endl;
				}
			cout<<"======================================================="<<endl;
			cout<<"total\t: "<<total<<endl;
			cout<<"Bayar\t: "<<bayar<<endl;
			cout<<"Kembali\t: "<<kembalian<<endl;
			}
			else if(konfirmasi == 'n'){
				system("cls");
				cout << "Terima Kasih telah menggunakan aplikasi kami";
			}
			else {
				cout <<"Invalid Input";
				system("cls");
				goto konfirmasi;
			}	
		}
		else if(bayar == total){
			cout << "Kembali \t: 0"<<endl;
			cout << "Apakah Anda ingin melihat detail pembelian ? (y/n): ";cin>>konfirmasi;
			if(konfirmasi == 'y'){
				system("cls");
				for(int i = 0 ; i<count ; i++){
					cout<<menu_tulisan[data[i]]<<"    "<<harga[data[i]]<<endl;
				}
			cout<<"======================================================="<<endl;
			cout<<"total\t: "<<total<<endl;
			cout<<"Bayar\t: "<<bayar<<endl;
			cout<<"Kembali\t: "<<kembalian<<endl;
			}
			else if(konfirmasi == 'n'){
				system("cls");
				cout << "Terima Kasih telah menggunakan aplikasi kami";
			}
			else {
				cout <<"Invalid Input";
				system("cls");
				goto konfirmasi;
			}
		}
		else {
			cout << "Uang Anda Kurang";
		}	
}
