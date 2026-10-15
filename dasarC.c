#include <stdio.h>

int main() {
    
    int x = 5;
    int y = 2;
    int hasil, hasil2;
    //pre increment 
    hasil = ++x + 2; // x = 6
    hasil2 = x + 8; // x = 6

    printf ("%d\n", hasil);
    printf ("%d\n", hasil2);

    //post increment 
    hasil = x++ + 2; // x = 5
    hasil2 = x + 8; // x = 6

    printf ("%d\n", hasil);
    printf ("%d", hasil2);
    return 0;
}