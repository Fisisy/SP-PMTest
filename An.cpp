#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#define N 100010
#define M 1010
#define LL long long

using namespace std;
const LL mod = 1000000007;
LL a, b, ans, A;
//lhq ak ioi
LL read() {
  LL s = 0, f = 0; char ch = getchar();
  while (!isdigit(ch)) f |= (ch == '-'), ch = getchar();
  while (isdigit(ch)) s = s * 10 + (ch ^ 48), ch = getchar();
  return f ? -s : s;
}

int main() {
  A = read();
  for (LL i = 1; i * i <= A; ++i) {
    a = sqrt(A - i * i);
    a = (2 * a + 1) % mod;
    b = (i * i) % mod;
    ans = (ans + a * b) % mod;
  }
  cout << ans * 4 % mod;
  return 0;
}
