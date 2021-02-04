#include <iostream>
using namespace std;

int luas(int panjang ,int lebar){
	//code 
	return panjang * lebar;
}

int luas(int sisi){
	return sisi * sisi;
}



void test(int angka){
	cout <<" nilai yang ditampilkan adalah: "<<angka<<endl;
	
}

int pangkat(int a, int b){
	if(b <= 1){
		return a;
	}
	else{
		return a * pangkat(a,b-1);
	}
}

int faktorial(int n){
	if(n <= 1){
		return 1;	
	}
	else {
		return n * faktorial(n-1);
	}
}
int main(){
	int a[4];
	
	for(int i=0 ; i<4;i++){
		a[i] = i + 2;
	}
	
	for(int j=0 ; j < 4 ; j++){
		cout << a[j]<<endl;
	}
	
}
