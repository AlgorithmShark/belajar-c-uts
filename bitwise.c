#include <stdio.h>

int main() {
    // a = 12 dalam biner: 0000 1100
    // b = 25 dalam biner: 0001 1001
    unsigned char a = 12;
    unsigned char b = 25;

    printf("Nilai awal:\n");
    printf("a = %3d (0000 1100)\n", a);
    printf("b = %3d (0001 1001)\n\n", b);

    // 1. Bitwise AND (&)
    // Menghasilkan 1 hanya jika kedua bit bernilai 1
    printf("a & b  = %3d (0000 1000)\n", a & b);

    // 2. Bitwise OR (|)
    // Menghasilkan 1 jika salah satu atau kedua bit bernilai 1
    printf("a | b  = %3d (0001 1101)\n", a | b);

    // 3. Bitwise XOR (^)
    // Menghasilkan 1 jika kedua bit berbeda nilainya
    printf("a ^ b  = %3d (0001 0101)\n", a ^ b);

    // 4. Bitwise Complement (~)
    // Membalik semua bit (0 jadi 1, 1 jadi 0)
    printf("~a     = %3d (1111 0011)\n", (unsigned char)~a);

    // 5. Shift Left (<<)
    // Menggeser bit ke kiri sebanyak 2 posisi (sama dengan dikali 2^2 = 4)
    printf("a << 2 = %3d (0011 0000)\n", a << 2);

    // 6. Shift Right (>>)
    // Menggeser bit ke kanan sebanyak 2 posisi (sama dengan dibagi 2^2 = 4)
    printf("a >> 2 = %3d (0000 0011)\n", a >> 2);

    return 0;
}