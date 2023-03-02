#include <stdio.h>

int main() {
    int i;
    printf("Masukkan sebuah bilangan: ");
    if(scanf("%d", &i) == 1) {
        if(i > 0) {
            printf("%d adalah bilangan bulat positif", i);
        }
        else if(i < 0) {
            printf("%d adalah bilangan bulat negatif", i);
        }
        else {
            printf("Bilangan yang dimasukkan adalah 0");
        }
    }
    else {
        printf("Bukan termasuk sebuah bilangan");
    }
    return 0;
}
