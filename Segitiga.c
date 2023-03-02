#include <stdio.h>

int main() {
    int sisi1, sisi2, sisi3;
    printf("Masukkan sisi 1: ");
    scanf("%d", &sisi1);
    printf("Masukkan sisi 2: ");
    scanf("%d", &sisi2);
    printf("Masukkan sisi 3: ");
    scanf("%d", &sisi3);
    if(sisi1 <= 0 || sisi2 <= 0 || sisi3 <= 0) {
        printf("Terdapat nilai yang bukan sisi segitiga\n");
    }
    else if(sisi1 == sisi2 && sisi2 == sisi3) {
        printf("Segitiga sama sisi");
    }
    else if(sisi1 == sisi2 || sisi2 == sisi3 || sisi1 == sisi3) {
        printf("Segitiga sama kaki");
    }
    else {
        printf("Segitiga sembarang");
    }
    return 0;
}
