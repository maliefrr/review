#include <stdio.h>

#include <conio.h>
int main ()
{
 int Data[8], x;
 printf("Masukkan nilai : \n");
 for(x=0;x<8;x++)
 {
   printf("Nilai data :  ");  
   scanf("%d",& Data[x]);
 }

 int cari; int flag=0;
 printf("Masukkan data yang ingin dicari = ");
 scanf("%d",&cari);
 for(int i=0;i<8;i++)
 {
  if(Data[i] == cari)
  flag=1;
 }
if(flag==1)
printf("Data ada\n");
else
printf("Data tidak ada \n");
}
