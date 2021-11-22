#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	double fungsi;
	
	int a, b, c, x;
	
	cout << "Menghitung nilai fungsi ax^2 + bx + c"<<endl;
	
	cout << "MASUKKAN a :  "; cin >> a;
	cout << "MASUKKAN b :  "; cin >> b;
	cout << "MASUKKAN c :  "; cin >> c;
	cout << "MASUKKAN x :  "; cin >> x;
	
	fungsi = a * pow(x,2) + b*x + c;
	
	cout << fungsi <<endl;
	

	
	
	
	return 0;
	
}
