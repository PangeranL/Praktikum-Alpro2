#include <stdio.h>

int main() {
    int nomorHari;
    printf("Masukkan nomor hari: ");
    if(scanf("%d", &nomorHari) == 1) {
        if(nomorHari >= 1 && nomorHari <= 7) {
            switch(nomorHari) {
                case 1:
                    printf("Hari ke-%d adalah Hari Senin", nomorHari);
                    break;
                case 2:
                    printf("Hari ke-%d adalah Hari Selasa", nomorHari);
                    break;
                case 3:
                    printf("Hari ke-%d adalah Hari Rabu", nomorHari);
                    break;
                case 4:
                    printf("Hari ke-%d adalah Hari Kamis", nomorHari);
                    break;
                case 5:
                    printf("Hari ke-%d adalah Hari Jumat", nomorHari);
                    break;
                case 6:
                    printf("Hari ke-%d adalah Hari Sabtu", nomorHari);
                    break;
                case 7:
                    printf("Hari ke-%d adalah Hari Minggu", nomorHari);
                    break;
            }
        }
        else {
            printf("Masukan nomor hari tidak tepat");
        }
    }
    else {
        printf("Masukan nomor hari tidak tepat");
    }
    return 0;
}
