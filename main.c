/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#include <stdio.h>

int main() {
    float panjang, lebar, luas, keliling;

    printf("Masukkan panjang: ");
    scanf("%f", &panjang);

    printf("Masukkan lebar: ");
    scanf("%f", &lebar);

    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);

    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}