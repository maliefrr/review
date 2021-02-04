#include "iostream"
using namespace std;

main(){
	int a[] = {30,10,78,22,97},panjang,i,j,temp,posAwal;
	panjang = sizeof(a) / sizeof(a[0]);
	cout << "data array yang asli adalah :";
	for(i=0;i<panjang;i++){
		cout<<" "<<a[i];
	}
	cout<<endl<<"data array yang telah di urutkan";
	for(i=0;i<panjang-1;i++){
		posAwal = i;
		for(j=i;j<panjang;j++)
			if(a[j]<a[posAwal])
				posAwal = j;
				temp = a[i];
				a[i] = a[posAwal];
				a[posAwal] = temp;
		}
		
	for(i=0;i<panjang;i++)cout<< " " << a[i];
	
}
