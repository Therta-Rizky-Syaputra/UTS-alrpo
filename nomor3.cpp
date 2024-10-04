#include <iostream>
using namespace std;

int main (){
    int pilihan;
    float Hasil;
    int x,y;
cout<<"Pilih Cara Menghitung yang ingin digunakan: "<<endl;
    cout<<"1. Penjumahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<"Masukkan Pilihan (1/2/3/4)"<<endl;
    cin>>pilihan;

 switch (pilihan){
    case 1:

     cout<<"Masukkan Angka Pertama dan Angka Kedua!"<<endl;
     cout<<"Angka Pertama: ";
     cin>>x;
     cout<<"Angka Kedua: ";
     cin>>y;
     Hasil= x+y;
     cout<<"Hasil Penjumlahan dari "<<x<<"dengan"<<y<<"="<<Hasil<<endl;
     break;

    case 2:

     cout<<"Masukkan Angka Pertama dan Angka Kedua!"<<endl;
     cout<<"Angka Pertama: ";
     cin>>x;
     cout<<"Angka Kedua: ";
     cin>>y;
     Hasil= x-y;
     cout<<"Hasil Pengurangan dari "<<x<<"dengan"<<y<<"="<<Hasil<<endl;
     break;

    case 3:

     cout<<"Masukkan Angka Pertama dan Angka Kedua!"<<endl;
     cout<<"Angka Pertama: ";
     cin>>x;
     cout<<"Angka Kedua: " ;
     cin>>y;
     Hasil= x*y;
     cout<<"Hasil Perkalian dari "<<x<<"dengan"<<y<<"="<<Hasil<<endl;
     break;

    case 4:

     cout<<"Masukkan Angka Pertama dan Angka Kedua!"<<endl;
     cout<<"Angka Pertama: ";
     cin>>x;
     cout<<"Angka Kedua: " ;
     cin>>y;
     Hasil= x/y;
     cout<<"Hasil Pembagian dari "<<x<<"dengan"<<y<<"="<<Hasil<<endl;
     break;
 }
   return 0;
 }
