#include <stdio.h>

int main (){
    
    char huruf = 'A'; 
    char Huruf = 'B';
    short  angka = 10;
    int a = 20;
    long b = 30;
    long long c = 40;
    float d = 3.14;
    double e = 2.71828;


    printf("Character: %c\n", huruf);
    printf("Short: %hd\n", angka);
    printf("Integer: %d\n", a);
    printf("Long: %ld\n", b);
    printf("Long Long: %lld\n", c);
    printf("Float: %.2f\n", d);
    printf("Double: %.2lf\n", e);

    printf("\n");

    printf("Size of char: %zu bytes\n", sizeof(huruf));
    printf("Size of short: %zu bytes\n", sizeof(angka));
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of long: %zu bytes\n", sizeof(b));
    printf("Size of long long: %zu bytes\n", sizeof(c));
    printf("Size of float: %zu bytes\n", sizeof(d));
    printf("Size of double: %zu bytes\n", sizeof(e));

    return 0;
}