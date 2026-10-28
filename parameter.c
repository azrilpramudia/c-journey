#include <stdio.h>

int hitungLuas(int panjang, int lebar) {
  int luas = panjang * lebar;
  return luas;
}

int main() {
  int p = 10;
  int l = 5;

  int hasil = hitungLuas(p, l);

  printf("Luas persegi panjang (%d x %d) adalah: %d\n", p, l, hasil);

  return 0;
}
