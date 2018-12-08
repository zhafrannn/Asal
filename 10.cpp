#include<iostream>
using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		int a=1, n, jumlah,i;
		
		cout<< "Masukan jumlah bilangan : ";
		cin>> n;
		i=1;
		
		while(i<n){
			cout << a << " ";
			a=a+2;
			jumlah=jumlah+a;
			i++;
		}
		cout<< "Jumlah bilangan ganjil : " <<jumlah<<endl;
		
		cout<< "Apakah anda ingin mengulang program(y/n) : ";
	cin>> opsi;	
	}while(opsi=='Y'||opsi=='y');	
	

}

