#include <iostream>
#include <conio.h>
#include<cstdlib>
using namespace std;

struct loc{
    string depan, belakang;
};
struct data{
    loc identitas;
    string nama, alamat, telp;
    data*next;
};
data* head= NULL; data* tail= NULL; data* temp;

void push(int a){
    string name, add, telpon;

    cin.ignore();
    cout << "antrian ke : " << a << endl;
    cout << "Masukkan nama anda : ";
    getline(cin,name);
    cout << "Masukkan alamat anda : ";
    getline(cin,add);
    cout << "Masukkan nomor telepon anda : ";
    getline(cin,telpon);
    cout << endl;

    if (tail == NULL)
    {
        tail = new data;
        tail->next=NULL;
        tail->nama=name;
        tail->alamat=add;
        tail->telp=telpon;
        head=tail;
    } else {
        temp = new data;
        tail->next=temp;
        temp->nama=name;
        temp->alamat=add;
        temp->telp=telpon;
        tail->next=NULL;
        tail=temp;
        
    }
    
}
void pop(){
    temp = head;
    if (head == NULL)
    {
        cout << "Belum ada antrian";
        return;
    }
    else if (temp->next != NULL)
    {
        temp = temp->next;
        cout << "Antrian yang harus dihapus dari list : ";
        cout << head->nama << endl;
        delete head;
        head=temp;
    }
    else{
        cout << "Antrian telah dihapus\n";
        delete head ;
        head = NULL;
        tail = NULL;
    }}
void display()
{
    temp = head;
    if ((head==NULL) && (tail==NULL))
    {
        cout << "antrian masih kosong !\n";
        return;
    }

    cout << " ANTRIAN KE : \n";

    while (temp != NULL)
    {
        cout << "\n NAMA PEMESAN : " << temp->nama << "\n";
        cout << "ALAMAT PEMESAN : " << temp->alamat << "\n";
        cout << "\n NOMOR TELEPON PEMESAN : " << temp->telp << "\n\n";
        temp=temp->next;
    }
    
}
void menu(){
             cout   << "\n=========================================="
                    << "\n  LOBBY ANRIAN PESANAN SISA RASA BAKERY"
                    << "\n=========================================="
                    << "\n1. Pesan dan masuk antrian"
                    << "\n2. Hapus antrian"
                    << "\n3. Tampilkan semua antrian"
                    << "\n4. Keluar program\n"
                    << "Masukkan Pilihan Anda : ";
                    
}



int main()
{
    int pilihan, antrian=1;

    do
    {
        system("cls");
        menu();
        cin >> pilihan   ;
        switch (pilihan)
        {
        case 1:
            push(antrian);
            antrian++;
            cout << " klik sembarang tombol untuk kembali\n";
            break;
        case 2:
            pop();
            cout << " klik sembarang tombol untuk kembali\n";
            getch();
            break;
        case 3 :
            display();
            cout << " klik sembarang tombol untuk kembali\n";
            getch();
            break;
        case 4 : 
        exit;
        default:
            cout << "pilihan anda salah\n";
            getch();
            break;}
    } while (pilihan!=4);
    
    return 0;
}



