//header atau libray yang dibutuhkan 
#include <iostream> 
#include <string>
#include <iomanip>
#include <windows.h>
#include <fstream>
#include <conio.h>
#include <ctime>
using namespace std;

//deklarasi fungsi 
int main();
void diskon(int td);
void cetak_struk(int, int*, int*, int, int, int, int, int, int ,int, string, string, string*);
void pesanan(string, string , int);

//untuk waktu
time_t now = time(0);
char* dt = ctime(&now);

//fungsi untuk mengatur posisi dengan koordinat
void gotoxy(int x, int y)    
{
COORD coord;
    coord.X = x; //koordinat x
coord.Y = y; //koordinat y
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
//fungsi untuk tulisan ags
void awalan()
{
system("color 0e");
cout<<"\n\n\n";
cout<<"\t";cout<<"----------**---------**---------**-------**--------**-------**---------**--------"<<endl;
cout<<"\t";cout<<"             AAAAAAAAAA              GGGGGGGGGGGGG         SSSSSSSSSSSS"<<endl;
cout<<"\t";cout<<"            AAAAAAAAAAAA             GGGGGGGGGGGGGG        SSSSSSSSSSSS"<<endl;
cout<<"\t";cout<<"           AAAA     AAAAA           GGGGGGG                SSSSSS      "<<endl;
cout<<"\t";cout<<"          AAAA       AAAAA          GGGGGGG                SSSSSS      "<<endl;
cout<<"\t";cout<<"         AAAAAAAAAAAAAAAAAA         GGGGGGG    GGGGGGG     SSSSSSSSSSSS"<<endl;
cout<<"\t";cout<<"        AAAAAAAAAAAAAAAAAAAA        GGGGGGG      GGG       SSSSSSSSSSSS"<<endl;
cout<<"\t";cout<<"       AAAAAA          AAAAAA       GGGGGGG      GGG             SSSSSS"<<endl;
cout<<"\t";cout<<"      AAAAAAA          AAAAAAA      GGGGGGG      GGG             SSSSSS"<<endl;
cout<<"\t";cout<<"     AAAAAAAA          AAAAAAAA     GGGGGGGGGGGGGGGG       SSSSSSSSSSSS"<<endl;
cout<<"\t";cout<<"   AAAAAAAAAAAA       AAAAAAAAAAA   GGGGGGGGGGGGGGGG       SSSSSSSSSSSS"<<endl;
cout<<"\t";cout<<"----------**---------**---------**-------**--------**-------**---------**--------"<<endl;
}

//fungsi untuk loading
void loading()
{
awalan();

system("color 0e");
cout<<endl;
cout<<"                            Jangan Lupa Tersenyum Kepada Customer :)   "<<endl;
cout<<"                                 Semoga Harimu Menyenangkan !!!        "<<endl;
cout<<"                       ================================================"<<endl;

//untuk membuat tampilan loading
cout<<"\n                                     Tunggu beberapa saat...\n\n";
char a=177, b=219;
cout<<"                                        ";
for (int i=0;i<=15;i++)
cout<<a;
    cout<<"\r";
cout<<"                                    ";
    for (int i=0;i<=20;i++)
    {
      cout<<b;
      for (int j=0;j<=1e7;j++); 
}
}
void tampil_menu()
{
system("cls");
string kasir, pemesan;
int pesan ;
cout<<endl;
cout<<"              ***********************************************************************"<<endl;
cout<<"              |                         AYAM GEPREK SENTOSA                         |"<<endl;
cout<<"              |                  Jl. Nanas No.12 Malang,Jawa Timur                  |"<<endl;
cout<<"              ***********************************************************************"<<endl;
cout<<"              |                               MENU                                  |"<<endl;
cout<<"              ***********************************************************************"<<endl;
cout<<"              |         Makanan                 |                 Minuman           |"<<endl;
cout<<"              -----------------------------------------------------------------------"<<endl;
cout<<"              |1. Original        Rp 12.000     | 5. Es Teh              Rp 3.000   |"<<endl;
cout<<"              |2. Sambal Matah    Rp 15.000     | 6. Air Mineral         Rp 2.500   |"<<endl;
cout<<"              |3. Sambal Ijo      Rp 17.000     | 7. Es Jeruk            Rp 5.000   |"<<endl;
cout<<"              |4. Mozzarella      Rp 21.000     | 8. Pop Ice             Rp 2.000   |"<<endl;
cout<<"              -----------------------------------------------------------------------"<<endl;
cout<<"               Kasir     : ";
//cin.ignore();
getline(cin, kasir);
//cin>>kasir;
cout<<"               Pemesan   : ";
//cin>>pemesan;
//cin.ignore();
getline(cin, pemesan);
cout<<"              ***********************************************************************"<<endl;
cout<<"               Berapa Menu Yang Dipesan : ";
cin>>pesan;

pesanan(kasir, pemesan, pesan);
}
void pesanan(string kas, string pes, int p){

//deklarasi variabel yang dibutuhkan 
int kode, porsi[10], harga[10], total, totalharga, uang, kembalian, totalbyr, d;
char lagi, cetak, ulang;
string menu[10];

//untuk menginput pesanan ke berapa
for(int a=1; a<=p; a++)
{
cout<<endl;
cout<<"               Pesanan ke-"<<a<<endl;
cout<<"               Masukkan Nomor Makanan/Minuman   : ";
cin>>kode;
cout<<"               Jumlah Pesan                     : ";
cin>>porsi[a];

//kondisi untuk inputan kode 
if(kode == 1)
{
menu[a] = "Original";
harga[a] = 12000;
}
else if(kode == 2)
{
menu[a] = "Sambal Matah";
harga[a] = 15000;
}
else if(kode == 3)
{
menu[a] = "Sambal Ijo";
harga[a] = 17000;
}
else if(kode == 4)
{
menu[a] = "Mozarella";
harga[a] = 21000;
}
else if(kode == 5)
{
menu[a] = "Es Teh";
harga[a] = 3000;
}
else if(kode == 6)
{
menu[a] = "Air Mineral";
harga[a] = 2500;
}
else if(kode == 7)
{
menu[a] = "Es Jeruk";
harga[a] = 5000;
}
else if(kode == 8)
{
menu[a] = "Pop Ice";
harga[a] = 2000;
}
else
{
system("cls");
system("color 0C");
cout<<"              ***********************************************************************"<<endl;
cout<<"                           Kode Makanan/Minuman yang Anda Masukkan SALAH!            "<<endl;
cout<<"                                    Harap Isi Ulang Kembali                          "<<endl;
cout<<"                                         -TEKAN ENTER-                               "<<endl;
getch();
system("cls");
system("color 0e");
tampil_menu();
}
}
//menampilkan pesanan yang dipesan
system("cls");
cout<<endl;
cout<<"              ***********************************************************************"<<endl;
cout<<"              |                           Bukti Pemesanan                           |"<<endl;
cout<<"              |                         AYAM GEPREK SENTOSA                         |"<<endl;
cout<<"              |                  Jl. Nanas No.12 Malang,Jawa Timur                  |"<<endl;
cout<<"              ***********************************************************************"<<endl;
cout<<"               "<<dt;
cout<<"               Nama Kasir   : "<<kas<<endl;
cout<<"               Nama Pemesan : "<<pes<<endl;
cout<<"              ======================================================================="<<endl;
totalharga = 0;
//untuk memanggil yang dipesan (menu, harga, porsi, dan subtotal)
for(int a=1; a<=p; a++)
{
gotoxy(15,a+9); cout<<porsi[a];
gotoxy(20,a+9); cout<<menu[a];
total = porsi[a]*harga[a];
gotoxy(35,a+9); cout<<total;
totalharga = totalharga + total;
}
cout<<endl;
cout<<"              ***********************************************************************"<<endl;

//pemberian diskon
if(totalharga>65000 && totalharga<99000)
{
d = totalharga * 10/100;
totalbyr = totalharga - d;
cout<<"               Selamat Anda Mendapatkan Diskon 10%"<<endl;
cout<<"              ***********************************************************************"<<endl;
cout<<"                                                             Total Bayar  : Rp "<<totalbyr<<endl;
}
else if(totalharga >= 100000)
{
d = totalharga * 20/100;
totalbyr = totalharga - d;
cout<<"               Selamat Anda Mendapatkan Diskon 20%"<<endl;
cout<<"              ***********************************************************************"<<endl;
cout<<"                                                             Total Bayar  : Rp "<<totalbyr<<endl;
} 
else
{
totalbyr = totalharga;
cout<<"               Maaf Anda Tidak Mendapatkan Diskon       "<<endl;
cout<<"              ***********************************************************************"<<endl;
cout<<"                                                             Total Bayar  : Rp "<<totalbyr<<endl;
}

cout<<"                                                             Uang Bayar   : Rp "; cin>>uang;
kembalian = uang - totalharga;
//kondisi uang bayar
if(uang < totalbyr)
{
system("color 0C");
cout<<endl;
cout<<"                               ****************************************              "<<endl;
cout<<"                               *      Mohon Maaf Uang Anda Kurang     *              "<<endl;
cout<<"                               ****************************************              "<<endl;
cout<<endl;
cout<<"                                           Ulangi Lagi [y/n] ? "; 
cin>>ulang;
system("cls");

//kondisi mengulang
if(ulang == 'y' || ulang == 'y')
{
main();
}
else if(ulang == 'n' || ulang == 'N')
{
exit;
}
}
else
{
cout<<"                                                             Uang Kembali : Rp "<<kembalian<<endl;
cout<<"              ***********************************************************************"<<endl;
cout<<"                                   Terimakasih atas kunjungan Anda^^                 "<<endl;
cout<<"              ***********************************************************************"<<endl;
cout<<"               Apakah Anda Ingin Mencetak Struk (y/n)?  ";
cin>>cetak;
}

//untuk cetak struk
if (cetak == 'y'||cetak == 'Y')
{
cetak_struk(kode, porsi, harga, total, totalharga, uang, kembalian, totalbyr, d, p, kas, pes, menu);
}
}

void cetak_struk(int kode, int porsi[10], int harga[10], int total, int totalharga, int uang, int kembalian, int totalbyr, int d,
int p, string kas, string pes, string menu[10])
{
ofstream file;//Berfungsi untuk membuka file dalam mode menulis
http://file.open("cetak_struk.txt");//Berfungsi untuk menunjuk ke sebuah nama file
file<<"              ***********************************************************************"<<endl;
file<<"              |                           Bukti Pemesanan                           |"<<endl;
file<<"              |                         AYAM GEPREK SENTOSA                         |"<<endl;
file<<"              |                  Jl. Nanas No.12 Malang,Jawa Timur                  |"<<endl;
file<<"              ***********************************************************************"<<endl;
file<<"               "<<dt;
file<<"               Nama Kasir   : "<<kas<<endl;
file<<"               Nama Pemesan : "<<pes<<endl;
file<<"              ======================================================================="<<endl;

totalharga = 0;
for(int a=1; a<=p; a++)
{
file<<"               "<<porsi[a];
file<<"    "<<menu[a];
total = porsi[a]*harga[a];
file<<"  "<<total<<endl;
cout<<endl;
totalharga = totalharga + total;
}
cout<<endl;
file<<"              ***********************************************************************"<<endl;

    if(totalharga>=65000 && totalharga<99000)
{
d = totalharga * 10/100;
totalbyr = totalharga - d;
file<<"               Selamat Anda Mendapatkan Diskon 10%"<<endl;
    file<<"              ***********************************************************************"<<endl;
    file<<"                                                             Total Bayar  : Rp "<<totalbyr<<endl;
}
    else if(totalharga >= 100000)
    {
   d = totalharga * 20/100;
   totalbyr = totalharga - d;
   file<<"               Selamat Anda Mendapatkan Diskon 20%"<<endl;
   file<<"              ***********************************************************************"<<endl;
   file<<"                                                             Total Bayar  : Rp "<<totalbyr<<endl;
    } 
else
{
totalbyr = totalharga;
file<<"               Maaf Anda Tidak Mendapatkan Diskon       "<<endl;
file<<"              ***********************************************************************"<<endl;
file<<"                                                             Total Bayar  : Rp "<<totalbyr<<endl;
}

file<<"                                                             Uang Bayar   : Rp "<<uang;
kembalian = uang - totalharga;
file<<"                                                             Uang Kembali : Rp "<<kembalian<<endl;
    file<<"              ***********************************************************************"<<endl;
file<<"                                   Terimakasih atas kunjungan Anda^^                 "<<endl;
    file<<"              ***********************************************************************"<<endl;
file.close();
system("cetak_struk.txt");
}

//fungsi utama
int main() 
{
system("cls");
system("color 0e");
loading();
tampil_menu();
}
