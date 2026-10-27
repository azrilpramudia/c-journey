#include <stdio.h>

int main() {
  int nilai;

  printf("Masukan nilai ujian anda (0-100): ");
  scanf("%d", &nilai);

  if (nilai >= 75) {
    printf("Selamat! Anda LULUS.\n");
  } else {
    printf("Maaf, Anda BELUM LULUS.\n");
  }

  return 0;
}
