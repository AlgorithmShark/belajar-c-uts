#include <stdio.h>

// void: menghitung dan mencetak, tapi tidak mengembalikan nilai
void tambahVoid(int a, int b) {
    int hasil = a + b;          // angka tetap bisa disimpan di dalam
    printf("Di dalam void: %d\n", hasil);
}

// int: menghitung dan mengembalikan nilai
int tambahInt(int a, int b) {
    int hasil = a + b;
    return hasil;               // dikirim keluar
}

int main() {
    // Memanggil void: hanya menjalankan aksi
    tambahVoid(3, 4);

    // Memanggil int: hasilnya bisa disimpan dan dipakai lagi
    int x = tambahInt(3, 4); 
    printf("Hasil dari int: %d\n", x);
    printf("Hasil x dikali 10: %d\n", x * 10);

    // Ini akan ERROR jika di-uncomment:
    // int y = tambahVoid(3, 4);

    return 0;
}