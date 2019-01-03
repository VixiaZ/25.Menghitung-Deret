#include <iostream>

using namespace std;

int main ()
{
	int a=0,b,c, jumlah=0,i,n;
	
	cout << "Perogram Penhitung Deret ke 'n'"<<endl;
	cout << "-------------------------------"<<endl<<endl;
	
	cout << "\nMasukan Bilangan/angka pertama = ";
	cin >>a;
	
	cout << "\nMasukan beda tiap bilangan = ";
	cin >>b;
	
	cout << "\nMasukan bilangan ke 'n' yang ingin di cari = ";
	cin >>n;
	
	cout <<"Total Dari Bilangan Deret "<<n<<";";
	cout <<a<<",";
	jumlah=jumlah+a;
	for(i=0; i<n-1;i++){
		c=a+b;
		a=c;
		cout<<c<<",";
		jumlah=jumlah+c;
	}
	
	cout <<"\n\n Hasil dari total deret tersebut adalah = "<<n<<" : ";
	cout << jumlah;
	
	return 0;
}

