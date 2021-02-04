#include "stdio.h"


main(){
	int a[3] = {3,6,1},temp;
	for(int i = 1 ;i<=3;i++){
		if(a[i-1]>a[i]){
			temp = a[i-1];
			a[i] = a[i-1];
			a[i] = temp;
		}
	for(i = 0;i<3;i++){
		printf("%d , ",a[i]);
	}	
	}
}
