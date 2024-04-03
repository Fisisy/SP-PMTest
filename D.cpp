#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#define N 100010
#define M 1010
using namespace std;
int a, b, n, x, k;

int read() {
  int s = 0, f = 0; char ch = getchar();
  while (!isdigit(ch)) f |= (ch == '-'), ch = getchar();
  while (isdigit(ch)) s = s * 10 + (ch ^ 48), ch = getchar();
  return f ? -s : s;
}

int main() {
  n = read(), k = read();
  for (int i = 1; i <= n; i++) {
    x = read();
    a ^= x;
  }
  if (k == 1) {
    cout << a;
    return 0;
  } else {
    
  }
}