#include <iostream>
using namespace std;

int main(){
	
	//simpanan pokok : T
	//bunga : bunga
	//lama simpanan : n
	
	int T, bunga, n, Tn;
	
	cout << "SIMPANAN POKOK   : "; cin >> T;
	cout << "BUNGA PER BULAN  : "; cin >> bunga;
	cout << "LAMA SIMPANAN    : "; cin >> n;	
	
	cout << "SIMPANAN POKOK   : " << T << endl;
	
	int i=1;
	
	while (i<=n){
	Tn = T + (T*bunga/100);
	cout<<"Tabungan Bulan ke- " << i << " =     " << Tn << "\n";
	T=Tn;
	i++;
	}
	
	

	
	
	
	return 0;
}
