#include <stdio.h>

int main() {
  int pilihan;

  do {
    printf("\n--- MENU ---\n");
    printf("1. Ulangi menu\n");
    printf("0. Keluar\n");
    printf("Pilih angka: ");
    scanf("%d", &pilihan);
  } while (pilihan != 0);

  printf("Program selesai!\n");
  return 0;
}  
