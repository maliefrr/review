#include <iostream>
using namespace std;

main(){
	int i,j,ngulang,start;
	cout<<"masukkan tinggi segitiga\t: ";cin>>ngulang;
	for(i=1;i<=ngulang;i++){
		start = i;
		if(i == 1)cout<<1;
		for(j=2;j<=i;j++){
			cout<<start<<" ";
			start = start + ngulang - j ;
		}
		cout<<endl;
	}
}
