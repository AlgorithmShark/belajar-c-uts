#include <stdio.h>

int main() {
    
    int a = 5;
    int b = 5;
    int hasil_pre, hasil_post;

    // PRE-INCREMENT (++a):
    // Nilai 'a' dinaikkan dulu menjadi 6, lalu dihitung (6 + 10 = 16)
    hasil_pre = a++ + 10;
    printf ("%d\n", hasil_pre);

    hasil_pre = a + 20;

    printf ("%d", hasil_pre);

    return 0;
}