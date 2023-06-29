#include <stdio.h>
#include <string.h>

int main() {
  char palavra[] = "algoritmos";
  int i = 0;
  while(palavra[i] != '\0') {
    i++;
  }
  printf("%d", i);
}