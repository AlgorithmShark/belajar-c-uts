#include <stdio.h>

int main (){

    int angka = 0;

    do {
        printf ("=== MENU PILIHAN ===\n");
        printf ("1. Cek Saldo\n");
        printf ("2. Deposit\n");
        printf ("3. Keluar\n");
        printf ("Pilih angka 1-3\n");
        scanf ("%d", &angka);
        
        switch (angka){
        case 1:
            printf ("Saldo kamu Rp 15.000.000 aamiin\n");
            break;
        case 2:
            printf ("Kamu memasukkan Rp 1.000.000.000 aamiin\n");
            break;
        case 3:
            printf ("Good bye\n");
            break;
        default:
            printf ("Pilih 1-3\n");
            break;
        }
    } while (angka != 3);
}