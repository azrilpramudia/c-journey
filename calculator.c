#include <stdio.h>

int main() {
  int angka1, angka2;
  int hasilTambah, hasilKurang, hasilKali;
  float hasilBagi;

  printf("Masukan angka pertama: ");
  scanf("%d", &angka1);

  printf("Masukan angka kedua: ");
  scanf("%d", &angka2);

  hasilTambah = angka1 + angka2;
  hasilKurang = angka1 - angka2;
  hasilKali =   angka1 * angka2;

  hasilBagi = (float)angka1 / angka2;

  printf("\n--- Result ---\n");
  printf("%d + %d = %d\n", angka1, angka2, hasilTambah);
  printf("%d - %d = %d\n", angka1, angka2, hasilKurang);
  printf("%d * %d = %d\n", angka1, angka2, hasilKali);
  printf("%d / %d = %.2f\n", angka1, angka2, hasilBagi);

  return 0;
}
