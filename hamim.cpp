#include<iostream>
using namespace::std;


main(){
int jl,jumlah, harga[10], total=5, jumbar, ketemu, jumlahsemua;
string  member, nomor[5]={"A001","A002","A003","A007","A008"};
string nabarang,data,nama[5]={"Bayu","irvan","Susiati","Diana","Roni"};
double diskon;



cout<<"=======SELAMAT DATANG DI MINIMARKET ALGORITMA=======";
cout<<"\n Apakah anda member (iya/tidak) = ";                             cin>>member;
if(member=="iya"||member=="IYA")
{
    cout<<"\n Masukan nomor identitas = ";                                cin>>data;
    ketemu=0;
    for(int i=0; i<5; i++)
    {
        if(data==nomor[i]){
            ketemu=1;
            cout<<"===Selamat datang Member===";
    cout<<"\n*Nama anda = "<<nama[i];cout<<endl;}}
    cout<<"\n*Berapa banyak jumlah barang yang ingin anda beli = ";     cin>>jumlah;
    for(int i=1;i<=jumlah; i++){
    cout<<"\n*Barang ke "<<i<<" = ";                                    cin>>nabarang;
    cout<<"*Harga barang Rp. ";                                         cin>>harga[i];
    cout<<"*Jumlah barang = ";                                          cin>>jumbar;

    total=total+(harga[i]*jumbar);}
    cout<<"\nTotal semua belanja yang anda beli Rp. "<<total;
    diskon=total*0.05;
    cout<<"\n=Karena anda member maka anda dapat potongan sebesar Rp."<<diskon;
    jumlahsemua=total-diskon;
    cout<<"\n=Jadi total semuanya adalah Rp. "<<jumlahsemua;}




    else if(member=="tidak"||member=="Tidak")
        {

    cout<<"\n*Nama Pelanggan = ";                                   cin>>nama[5];
    cout<<"\n*Berapa banyak jumlah barang yang ingin anda beli = "; cin>>jumlah;
    for(int i=1;i<=jumlah; i++){
    cout<<"\n*Barang ke "<<i<<" = ";                                cin>>nabarang;
    cout<<"*Harga barang Rp. ";                                       cin>>harga[i];
    cout<<"*Jumlah barang = ";                                      cin>>jumbar;

    total=total+(harga[i]*jumbar);}
    cout<<"\n Total semua belanja yang anda beli Rp. "<<total;

        }

for (int b=jumlah-2; b>=0; b--){
    for (int i=0; i<=b; i++){
        if (harga[i]>harga[i]+1){
           jl=harga[i];
           harga[i]=harga[i]+1;
           harga[i+1]=jl;
        }}}
        cout<<"\n\nUrutran harga barang setelah di sorting";
    for (int a=1; a<=jumlah; a++){
        cout<<"\nHarga barang ke-"<<a<<"=Rp. "<<harga[a];
        cout<<endl<<endl;
    }
    for(int i=1;i<=jumlah; i++)

 {
   // cout<<"Nama Pembeli = "<<nama[i];
   cout<<"\n*Barang ke  = "<<nabarang;
   cout<<"\n*Harga barang Rp. " <<harga[i];
   cout<<"\n*Jumlah barang = "<<jumbar;
 }
    }


