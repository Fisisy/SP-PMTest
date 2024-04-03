#include <stdio.h>
#include <stdlib.h>
#define SWAP(a,b) a^=b^=a^=b
int a[4];

int main() {
  for (int i = 1; i <= 3; i++) scanf("%d", &a[i]);
  for (int i = 1; i <= 3; i++)
    for (int j = 1; j <= 2; j++)
      if (a[j] > a[j + 1]) SWAP(a[j], a[j + 1]);
  printf("%d->%d->%d", a[1], a[2], a[3]);
  return 0;
}