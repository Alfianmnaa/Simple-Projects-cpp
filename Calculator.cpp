#include <iostream>
using namespace std;

int tambah (float a, float b){
	return ( a + b );
	}

int kurang (float a, float b ){
	return ( a - b );
	}

int kali (float a, float b ){
	return ( a * b );
	}

int bagi (float a, float b ){
	return (a / b );
	}
	
int sisa (int a, int b ){
	return (a % b );
	}

int kuadrat (float a){
	return (a * a );
	}
	
int main (){
int bil1, bil2;
char pilihan;

cout<<" ========================================"<<endl;
cout<<" |	Alfian Calculator 		|"<<endl;
cout<<" ========================================"<<endl;
cout<<endl;
cout<<" ========================================"<<endl;
cout<<" |	     Masukan Pilihan		|"<<endl;
cout<<" ========================================"<<endl;
cout<<" |					|"<<endl;
cout<<" |	(A) Tambah	(B) Kurang	|"<<endl;
cout<<" |	(C) Kali	(D) Bagi	|"<<endl;
cout<<" |	(E) Modulus	(F) Kuadrat		|"<<endl;
cout<<" ========================================"<<endl;
cout<<" Masukan Pilihan		: ";cin>>pilihan;
cout<<endl;

if ( pilihan == 'A' || pilihan == 'a' ) {

	cout<<" ========================================"<<endl;
	cout<<" |	     Masukan Bilangan		|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" |					|"<<endl;
	cout<<" | Masukan Bilangan pertama : ";cin>>bil1;
	cout<<" | Masukan Bilangan kedua : ";cin>>bil2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<<tambah(bil1,bil2)<<"			|"<<endl;
	cout<<" ========================================"<<endl;

}
else if ( pilihan == 'B' || pilihan == 'b' ) {

	cout<<" ========================================"<<endl;
	cout<<" |	     Masukan Bilangan		|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" |					|"<<endl;
	cout<<" | Masukan Bilangan pertama : ";cin>>bil1;
	cout<<" | Masukan Bilangan kedua : ";cin>>bil2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<<kurang(bil1,bil2)<<"			|"<<endl;
	cout<<" ========================================"<<endl;

}
else if ( pilihan == 'c' || pilihan == 'C' ) {

	cout<<" ========================================"<<endl;
	cout<<" |	     Masukan Bilangan		|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" |					|"<<endl;
	cout<<" | Masukan Bilangan pertama : ";cin>>bil1;
	cout<<" | Masukan Bilangan kedua : ";cin>>bil2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<<kali(bil1,bil2)<<"			|"<<endl;
	cout<<" ========================================"<<endl;
}
else if ( pilihan == 'D' || pilihan == 'd' ) {

	cout<<" ========================================"<<endl;
	cout<<" |	     Masukan Bilangan		|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" |					|"<<endl;
	cout<<" | Masukan Bilangan pertama : ";cin>>bil1;
	cout<<" | Masukan Bilangan kedua : ";cin>>bil2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<<bagi(bil1,bil2)<<"			|"<<endl;
	cout<<" ========================================"<<endl;
}
else if ( pilihan == 'E' || pilihan == 'e' ) {

	cout<<" ========================================"<<endl;
	cout<<" |	     Masukan Bilangan		|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" |					|"<<endl;
	cout<<" | Masukan Bilangan pertama : ";cin>>bil1;
	cout<<" | Masukan Bilangan kedua : ";cin>>bil2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<<sisa(bil1,bil2)<<"			|"<<endl;
	cout<<" ========================================"<<endl;
}
else if ( pilihan == 'F' || pilihan == 'f' ) {

	cout<<" ========================================"<<endl;
	cout<<" |	     Masukan Bilangan		|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" |					|"<<endl;
	cout<<" | Masukan Bilangan : ";cin>>bil1;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<<kuadrat(bil1)<<"			|"<<endl;
	cout<<" ========================================"<<endl;
}
	cout<<endl;
	cout<<" ================================================"<<endl;
	cout<<" | 22106050058, Alfian Maulana. Informatika B 	|"<<endl;
	cout<<" ================================================"<<endl;
	cout<<" ";
}

