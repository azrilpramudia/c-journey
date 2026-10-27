#include <stdio.h>

int main() {
  int nilai;

  printf("Masukan nilai ujian (0-100): ");
  scanf("%d", &nilai);

  if (nilai >= 85) {
    printf("Grade: A (Sangat Baik)\n");
  } else if (nilai >= 70) {
    printf("Grade: B (Baik)\n");
  } else if (nilai >= 55) {
    printf("Grade: C (Cukup Baik)\n");
  } else {
    printf("Grade: D (Perlu Belajar Lagi)\n");
  }

  return 0;
}
