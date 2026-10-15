#include <stdio.h>

int y = 1;

int luasPersegiPanjang(int a, int b){
    int hasil = a * b;
    return hasil*y;
}

int main (){

    int a = 5;
    int b = 6;
    int hasil;

    hasil = luasPersegiPanjang(a,b);

    printf ("%d\n", y);

    printf ("%d", hasil);
    
}

