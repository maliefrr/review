#include "iostream"
using namespace std;

main(){
	int a[] = {5,3,12,2,7,98,1};
	int i,j,min,temp,n;
	// mencari panjang array
	n = sizeof(a) / sizeof(a[0]);
	
	// menampilkan data array yang belum di urutkan
	cout<<"data array sebelum diurutkan: ";
	for(i=0;i<n;i++)cout<< " " << a[i];
	
	// algoritma sorted array
	for(i=0;i<n-1;i++){
		min = i;
		for(j=i+1;j<n;j++)
			if(a[j]<a[min])
				min=j;
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	// menampilkan data array yang telah diurutkan
	cout<<endl<<"data array yang sudah di urutkan: ";
	for(i=0;i<n;i++)cout<<" "<<a[i];
}
