#include <stdio.h>

int main() {
    int nomorBulan;
    printf("Masukkan nomor bulan: ");
    if(scanf("%d", &nomorBulan) == 1) {
        if(nomorBulan >= 1 && nomorBulan <= 12) {
            switch(nomorBulan) {
                case 1:
                    printf("Bulan ke-%d adalah Januari", nomorBulan);
                    break;
                case 2:
                    printf("Bulan ke-%d adalah Februari", nomorBulan);
                    break;
                case 3:
                    printf("Bulan ke-%d adalah Maret", nomorBulan);
                    break;
                case 4:
                    printf("Bulan ke-%d adalah April", nomorBulan);
                    break;
                case 5:
                    printf("Bulan ke-%d adalah Mei", nomorBulan);
                    break;
                case 6:
                    printf("Bulan ke-%d adalah Juni", nomorBulan);
                    break;
                case 7:
                    printf("Bulan ke-%d adalah Juli", nomorBulan);
                    break;
                case 8:
                    printf("Bulan ke-%d adalah Agustus", nomorBulan);
                    break;
                case 9:
                    printf("Bulan ke-%d adalah September", nomorBulan);
                    break;
                case 10:
                    printf("Bulan ke-%d adalah Oktober", nomorBulan);
                    break;
                case 11:
                    printf("Bulan ke-%d adalah November", nomorBulan);
                    break;
                case 12:
                    printf("Bulan ke-%d adalah Desember", nomorBulan);
                    break;
            }
        }
        else {
            printf("Masukan nomor bulan tidak tepat");
        }
    }
    else {
        printf("Masukan nomor bulan tidak tepat");
    }
    return 0;
}
