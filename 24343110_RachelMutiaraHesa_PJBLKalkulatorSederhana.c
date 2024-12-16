#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Variabel untuk mencatat waktu mulai dan selesai
    clock_t start_time, end_time;
    double execution_time;

    // Variabel untuk file input dan output serta operasi
    FILE *inputFile, *outputFile;
    char operator;
    double angka_1, angka_2, hasil;

    // Catat waktu mulai
    start_time = clock();

    // Membuka file input_1.txt untuk membaca
    inputFile = fopen("input_1.txt", "r");
    if (inputFile == NULL) {
        printf("File input_1.txt tidak dapat dibuka!\n");
        return 1;
    }

    // Membuka atau membuat file output_1.txt untuk menulis
    outputFile = fopen("output_1.txt", "w");
    if (outputFile == NULL) {
        printf("File output_1.txt tidak dapat dibuat!\n");
        fclose(inputFile);
        return 1;
    }

    // Membaca setiap baris dari file input dan memproses operasinya
    while (fscanf(inputFile, "%lf %c %lf", &angka_1, &operator, &angka_2) != EOF) {
        switch (operator) {
            case '+':
                hasil = angka_1 + angka_2;
                break;
            case '-':
                hasil = angka_1 - angka_2;
                break;
            case '*':
                hasil = angka_1 * angka_2;
                break;
            case '/':
                if (angka_2 != 0) {
                    hasil = angka_1 / angka_2;
                } else {
                    fprintf(outputFile, "Error: Pembagian dengan nol\n");
                    continue;
                }
                break;
            default:
                fprintf(outputFile, "Error: operator tidak valid\n", operator);
                continue;
        }
        // Menulis hasil ke file output
        fprintf(outputFile, "%.2lf %c %.2lf = %.2lf\n", angka_1, operator, angka_2, hasil);
    }

    // Menutup file
    fclose(inputFile);
    fclose(outputFile);

    printf("Proses selesai. Hasil disimpan di output_1.txt\n");

    // Catat waktu selesai
    end_time = clock();

    // Hitung waktu eksekusi dalam detik
    execution_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    // Tampilkan hasil waktu eksekusi
    printf("Waktu eksekusi: %.6f detik\n", execution_time);

    return 0;
}
