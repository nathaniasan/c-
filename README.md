// PROGRAM KELAS C
// program yang akan membedakan bilangan untuk dimasukan kedalam dua himpunan yang berbeda.
// ANGKA KELIPATAN 3 DAN 7, 3, 7

#include <iostream>

using namespace std;

int main (){
	
	int a, b;
	cin>>a;
	cin>>b;
	cout<<endl;
	int h [b];
	int i [b];
	int j [b];
	
	cout << "Bagi tujuh dan tiga: \n\n";
	for(int x=a;x<=b;x++) {
	if(x%3==0&&x%7==0) {
	h[x]=x;
	
	cout << i <<endl;
}	
	
}	

	cout << "Bagi tiga: \n";
	for(int y=a;y<=b;y++) {
	if(y%3==0) {
	i[b]=y;	
	cout << y <<endl;
}	
}
	cout << endl;
	cout << "Bagi tujuh: \n";
	for(int z=a;z<=b;z++) {
	if(z%7==0) {
	j[b]=z;
	
	cout << z <<endl;		
}	
	
}

}
