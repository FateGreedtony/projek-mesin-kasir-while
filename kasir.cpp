#include <iostream>
#include <cstdio>
using namespace std;

int main(){
        // inisiasi
        int jumBarang = 0;
        int hargaBarang = 0;
        int jumHarga = 0;
        int uang = 0;
        int uangTambahan = 0;

        // logika while
        while(true){
            cout << "masukkan harga barang: ";
            cin >> hargaBarang;
            
            if(hargaBarang > 0){
                jumHarga += hargaBarang;
                ++jumBarang;
            } else {
                break;
            }
        }

        // cout logika
        cout << "jumlah barang: " << jumBarang << endl;
        cout << "total harga: " << jumHarga << endl;

        // konfirmasi pembayar
        cout << "konfirmasi pembayar: ";
        cin >> uang;

        // logika konfirmasi pembayaran
        while(true){
            if (uang < jumHarga){
                cout << "uangnya kurang, tambahkan: ";
                cin >> uangTambahan;            
                uang += uangTambahan;
            } else {
                break;
            }
        }

        // hasil akhir
        puts("pembayaran sedang diproses, Beep Beep Beep...");
        cout << "kembalian: " << uang - jumHarga << endl;
        puts("pembayaran selesai");

        system("pause");
        return 0;
}