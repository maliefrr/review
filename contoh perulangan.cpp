#include <iostream>
using namespace std;

int main(){
	int i , j;
	for(i=0;i<3;i = i + 1){
		for(j=0;j<=i;j = j + 1){
			cout<<"* ";
		}
		cout<<endl;
	}	
	
	/*   
		memory                           output
		int i , j
		i = 0 
		0 < 3 True
		j = 0
		0 <= 0 True                     *
		j = 0 + 1
		j = 1
		1 <= 0 False
		i = 0 + 1
		i = 1
		1 < 3 ? True
		j = 0
		0 <= 1 True                     * * 
		j = 0 + 1                       
		j = 1 
		1 <= 1 ??? True
		j = 1 + 1
		j = 2 
		2 <= 1 False
		i = 1 + 1 = 2
		i = 2
		2 < 3 ?? True
		j = 0
		0 <= 2 ?? True                   * * *
		j = 0 + 1 
		j = 1 
		1 <= 2 ?? True
		j = 1 + 1
		j = 2
		2 <= 2 ?? True
		j = 2 + 1
		j = 3
		3 <= 2 ?? False
		i = 2 + 1
		i = 3
		3 < 3 ?? False                   
		
	*/



}







/*	int i,hasil ,nilai,n;
	cout<<"Masukkan Nilai";cin>>nilai;
	for(i=1;i <= nilai ; i += 1)
	{
		cout<<"nilai ke"<<i<<":";
		          
		
		
		cin>>n;
		hasil = hasil + n;
	}
	cout<<hasil;
	return 0; 

		       Memory                                     Output
		       
		        hasil=1                                   Masukkan Nilai2
		        nilai = 2
		        i = 1   
		        i <= nilai / i=2  1 <= 2 ? True          nilai ke1:1
				hasil = 1 + 1 = 2
				i = i + 1 = 1 + 1 = 2
				i = 2 
				2 <= 2 ? True                            nilai ke2:2
				hasil = 2 + 2 = 4 
				i = 2 / 4 i = 3
				i = 3 
				3 <= 2 False                            4
		       	
		       	
		       	i++ --> i += 1 -->  i = i + 1 */
