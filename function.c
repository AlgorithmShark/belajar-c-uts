#include <stdio.h>

int y = 10;  // global variable

void printHello(void); // function declaration
int tambah(int a, int b); // function declaration

int luasPersegiPanjang(int panjang, int lebar){
    int luas = panjang * lebar;
    return luas;
}

void increment(int x){  // function definition --> sudah memiliki body of function
    x = x + 1;
    printf("Nilai X dalam fungsi : %d\n", x);
}

void cetakY(){
    printf("Nilai Y: %d\n", y);
    y = y + 1;
}

void printY(){
    printf("Nilai Y: %d\n", y);
}

int main(){

    printHello();
    int hasil = tambah(5,4);
    printf("Hasil penjumlahan: %d\n", hasil);

    int x = 10;
    printf("Nilai X dalam main : %d\n", x);
    increment(x);
    printf("Nilai X dalam main : %d\n", x);

    cetakY();
    printY();

    return 0;
}

int tambah(int a, int b){
    int c = a + b;
    return c;
}

void printHello(void){  // function definition 
    printf("Hello World from a function.\n");
}