#include <stdio.h>

int main() {
    int tahanan1, tahanan2, tahanan3, totalTahanan;
    printf("Masukkan nilai tahanan 1: ");
    scanf("%d", &tahanan1);
    printf("Masukkan nilai tahanan 2: ");
    scanf("%d", &tahanan2);
    printf("Masukkan nilai tahanan 3: ");
    scanf("%d", &tahanan3);
    if(tahanan1 >= 0 && tahanan2 >= 0 && tahanan3 >= 0) {
        totalTahanan = tahanan1 + tahanan2 + tahanan3;
        printf("Total tahanan dalam seri adalah: %d", totalTahanan);
    }
    else {
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;
}
