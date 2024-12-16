#include <stdio.h>

int main() {
    int pilihan;
    float angka1, angka2, hasil;

    // Menu utama
    printf("=== Kalkulator Sederhana ===\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Hasil Bagi (Pembagian Bulat)\n");
    printf("Pilih operasi (1-5): ");
    scanf("%d", &pilihan);

    // Meminta input angka
    printf("Masukkan angka pertama: ");
    scanf("%f", &angka1);
    printf("Masukkan angka kedua: ");
    scanf("%f", &angka2);

    switch (pilihan) {
        case 1: // Penjumlahan
            hasil = angka1 + angka2;
            printf("Hasil Penjumlahan: %.2f\n", hasil);
            break;
        case 2: // Pengurangan
            hasil = angka1 - angka2;
            printf("Hasil Pengurangan: %.2f\n", hasil);
            break;
        case 3: // Perkalian
            hasil = angka1 * angka2;
            printf("Hasil Perkalian: %.2f\n", hasil);
            break;
        case 4: // Pembagian
            if (angka2 != 0) {
                hasil = angka1 / angka2;
                printf("Hasil Pembagian: %.2f\n", hasil);
            } else {
                printf("Error: Pembagian dengan nol!\n");
            }
            break;
        case 5: // Hasil Bagi (Pembagian Bulat)
            if (angka2 != 0) {
                int hasil_bagi = (int)angka1 / (int)angka2; // Pembagian bulat
                printf("Hasil Bagi: %d\n", hasil_bagi);
            } else {
                printf("Error: Pembagian dengan nol!\n");
            }
            break;
        default:
            printf("Pilihan tidak valid!\n");
            break;
    }

    return 0;
}