#include <stdio.h>

int main (){

    // int number[3][2] = {{1,2,},{2,2},{2,4}};
    
    // for (int i = 0; i < 3; i++){ 
    //     for (int j = 0; j < 2; j++){
    //         printf ("%d", number[i][j]);
    //     }
    //     printf ("\n"); 
    // }


    // int myNumbers[] = {10, 25, 50, 75};
    // printf("%lu", sizeof(myNumbers));

    // int myNumbers[] = {25, 50, 75, 100, 200,900}; // 6 * 4 = 24
    // int length = sizeof(myNumbers) / sizeof(myNumbers[0]); // 24/4= 6
    // int i;
    
    // for (i = 0; i < length; i++) {
    // printf("%d\n", myNumbers[i]);
    // }

    int n = 0;
    int data[100];
    int hasil = 0;

    printf ("Masukkan ukuran array: ");
    scanf ("%d", &n);

    for (int i = 0; i < n; i++){
        scanf ("%d", &data[i]);
    }

    for (int i = 0; i < n; i++){
        hasil += data[i];
    }

    printf ("%d", hasil);


}