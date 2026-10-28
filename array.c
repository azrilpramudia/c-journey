#include <stdio.h>

int main() {
  int nilai[5] = {80, 90, 75, 85, 95};

  printf("Nilai pertama: %d\n", nilai[0]);
  printf("Nilai ketiga: %d\n", nilai[2]);

  nilai[0] = 100;

  printf("Tampilkan Semua Nilai\n");
  for (int i = 0; i < 5; i++) {
    printf("Nomor ke-%d: %d\n", i + 1, nilai[i]);
  }

  return 0;
}
