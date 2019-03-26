/*
Nama            : Raissa Amini
NPM             : 140810180073
Tanggal buat    : 26 Maret 2019
*/
#include <iostream>

using namespace std;

struct ElemtList{
    char nama[40];
    char npm[14];
    float ipk;
    ElemtList* next;
};
typedef ElemtList* pointer;
typedef pointer List;

void createList(List& First);
void createElemt(pointer& pBaru);
void insertLast (List& First, pointer pBaru);
void traversal (List First);


int main()
{
    pointer p;
    List mhs;
    int pilih;

    createList(mhs);
    while(1){
        system("cls");
        cout<<"Menu"<<endl;
        cout<<"1. Tambah Data "<<endl;
        cout<<"2. Tampilkan"<<endl;
        cout<<"3. Exit"<<endl;
        cout << "Masukan Pilihan : "; cin >> pilih;
        switch(pilih){
        case 1:
            createElemt(p);
            insertLast(mhs, p);
        break;

        case 2:
            traversal(mhs);
        break;

        case 3:
            return 0;
            break;
        }
        system("pause");
    }
}
void createList(List& First){
    First = NULL;
    }

void createElemt(pointer& pBaru){
    pBaru = new ElemtList;
    cout<<"Nama               : "; cin.ignore();cin.getline(pBaru->nama,40);
    cout<<"NPM                : "; cin>>pBaru->npm;
    cout<<"IPK                : "; cin>>pBaru->ipk;
    pBaru->next=NULL;
}
void traversal(List First){
    cout<<"\nNo\t"<<"\tNama\t\t"<<"NPM\t\t"<<"IPK\t"<<endl;
    pointer pBantu;
    pBantu=First;
    int i=1;
    while(pBantu != NULL){
        cout<<i<<"\t"<<pBantu->nama<<"\t\t\t"<<pBantu->npm<<"\t\t"<<pBantu->ipk<<endl;
        pBantu=pBantu->next;
        i++;
    }
}

void insertLast(List& First, pointer pBaru){
    pointer Last;
    if (First==NULL){
        First=pBaru;
    }
    else {
        Last=First;
        while (Last->next!=NULL){
            Last=Last->next;
        }
        Last->next=pBaru;
    }
}
