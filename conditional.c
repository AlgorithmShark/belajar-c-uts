#include <stdio.h>

int main () {
    // int nilai = 0;

    // printf ("Masukkan nilai dari 1 - 100: ");
    // scanf ("%d", &nilai);

    // if (nilai >= 90 && nilai <= 100){
    //     printf ("A");
    // }
    // else if (nilai >= 80 && nilai <= 89){
    //     printf ("B");
    // }
    // else if (nilai >= 70 && nilai <= 79){
    //     printf ("C");
    // }
    // else if (nilai >= 60 && nilai <= 69){
    //     printf ("D");
    // }
    // else if (nilai >= 50 && nilai <= 59){
    //     printf ("E");
    // }
    // else if (nilai < 0 || nilai > 100){
    //     printf ("Input yang bener woi!");
    // }
    // else {
    //     printf ("Tidak lulus");
    // }

    // int agama = 0;

    // printf ("Apakah agamamu sama? \n");
    // printf ("Ketik 1 jika sama Ketik 0 Jika tidak\n");
    // scanf ("%d", &agama);

    // if (agama == 1){
    //     printf ("Selamat kamu bisa bersatu");
    // }
    // else if (agama == 0){
    //     printf ("Kamu TIDAK akan bisa bersatu");
    // }
    // else {
    //     printf ("INPUT YANG BENER WOI!");
    // }

    // int nilai = 0;

    // printf ("Masukkan nilai dari 1-100: ");
    // scanf ("%d", &nilai);

    // if (nilai <= 100 && nilai >= 90){
    //     printf ("A");
    // }
    // else if (nilai <= 89 && nilai >= 80){
    //     printf ("B");
    // }
    // else if (nilai <= 79 && nilai >= 70){
    //     printf ("C");
    // }
    // else if (nilai < 0 || nilai > 100){
    //     printf ("inputan ini tidak valid");
    // }
    // else {
    //     printf ("D");
    // }

    // int kartu = 0;
    // int umur = 18;

    // if (umur >= 18){
    //     if (kartu){
    //         printf ("Selamat kamu boleh masuk dan dapat diskon");
    //     }
    //     else {
    //         printf ("Kamu boleh masuk tapi gak dapet diskon");
    //     }
    // }

    int hari = 0;

    scanf ("%d", &hari);

    switch (hari){
    case 1:
        printf ("Senin");
        break;
    case 2:
        printf ("Selasa");
        break;
    case 3:
        printf ("Rabu");
        break;
    default:
        printf ("Please enter 1-3");
        break;
    }
}