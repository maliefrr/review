#include "iostream"
using namespace std;

main(){
	int a[] = {4,8,6,2,3,1,7,5};
	int i,j,min,temp,panjang;
	
	panjang = sizeof(a) / sizeof(a[0]);
	
	for (i = 0 ; i< panjang - 1; i++){
		min = i ;
		for (j = i + 1 ; j < panjang ; j++)
			if (a[j] < a[min] )
				min = j;
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;		 
	}
	
	cout<<"data yang telah diurutkan : ";
	for(i=0;i<panjang;i++) cout<<" "<<a[i];
}
