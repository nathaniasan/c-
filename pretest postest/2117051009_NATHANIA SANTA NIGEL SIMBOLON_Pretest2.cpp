#include <iostream>


using namespace std;

int main() {
	
	/* NAMA : NATHANIA SANTA NIGEL SIMBOLON
	   KELAS : A
	   NPM   : 2117051009
	*/
	
	
	cout<<"CICILAN PERBULAN"<<endl<<endl<<endl;
	cout <<"Silakan isi data anda"<<endl<<endl;
	cout <<"------------------------------------------------"<<endl;
	
	string nama;
	int jumlah, bungaa, cicilan_akhir, total ;
	float bunga, lama ;
	
	

	cout<<"Nama		:";
	getline(cin, nama);
	cout<<"Jumlah Peminjam	 : Rp. ";
	cin>> jumlah;
	cout<<"Lama Peminjaman (tahun)		: ";
	cin>>lama;
	cout<<"Suku Bunga per-tahun	% : ";
	cin>>bunga;
	
	
	cout << "-------------------------------------"<< endl<<endl;
	
	//rumuscicilan//
	
	
	bungaa = (jumlah * bunga/100) / 12;
	
	cicilan_akhir = jumlah/12 ;
	
	total = cicilan_akhir + bungaa;
	
	
	//output//
	cout <<" Nama	: "<< nama << endl;
	cout << "Cicilan per-bulan : Rp.  " << total;
	
	return 0;
	

	
	
	
	 
	
	
	
	
	
	
	
	
}
