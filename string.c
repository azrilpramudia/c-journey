#include <stdio.h>

int main() {
  char name[50];

  printf("Masukan nama lengkap anda: ");

  fgets(name, sizeof(name), stdin);

  printf("Hello, %s", name);

  return 0;
}
