#include <stdio.h>

int main (){

    int nilai = 0;

    do {
        printf ("=== Menu Pilihan ===\n");
        printf ("1. Cek Saldo\n");
        printf ("2. Deposit\n");
        printf ("3. Keluar\n");
        scanf ("%d", &nilai);

        switch (nilai){
        case 1:
            printf ("Saldo anda adalah Rp5.000.000.000\n");
            break;
        case 2:
            printf ("Saldo yang anda masukkan Rp9.999.999\n");
            break;
        case 3:
            printf ("Good Bye\n");
            break;
        default:
            printf ("Pilih 1-3\n");
            break;
        }

    } while (nilai !=3);

    // Nested Loop
    // for (int i = 5; i>0; i--){ 
    //     for (int j = 0; j<i; j++){
    //         printf ("* ");
    //     }
    //     printf ("\n");
    // }

    // for (int i = 0; i<5; i++){ 
    //     for (int j = 0; j<5; j++){
    //         printf ("* ");
    //     }
    //     printf ("\n");
    // }

    // int tinggi = 5, i, j;

    // for (i = 1; i <= tinggi; i++) {
    //     // Cetak spasi di sebelah kiri
    //     for (j = 1; j <= tinggi - i; j++) {
    //         printf(" ");
    //     }
    //     // Cetak bintang sebanyak i, dipisah spasi
    //     for (j = 1; j <= i; j++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // int angka = 0;
    // int faktorial = 1;

    // printf ("Enter Factorial Number: ");
    // scanf ("%d", &angka);

    // for (int i = 1; i <= angka; i++){
    //     faktorial *= i;
    // }

    // printf ("Angkanya adalah: %d", faktorial);

    // int angkaRahasia = 3;
    // int angkaTebakan = 0;

    // while (angkaRahasia != angkaTebakan){
    //     printf ("Tebak angka dari 1-10: ");
    //     scanf ("%d", &angkaTebakan);

    //     if (angkaTebakan > angkaRahasia){
    //         printf ("Terlalu besar\n");
    //     }
    //     else if (angkaTebakan < angkaRahasia){
    //         printf ("Terlalu kecil\n");
    //     }
    //     else {
    //         printf ("Selamat kamu benar\n");
    //     }
    // }
    
    return 0;
}