#include <map>
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
LL T, a[N], x, n = 85;

LL read() {
  LL s = 0, f = 0; char ch = getchar();
  while (!isdigit(ch)) f |= (ch == '-'), ch = getchar();
  while (isdigit(ch)) s = s * 10 + (ch ^ 48), ch = getchar();
  return f ? -s : s;
}

int main() {
  a[1] = a[2] = 1;
  for (int i = 3; i <= n; i++)
    a[i] = a[i - 1] + a[i - 2];
  T = read();
  while (T--) {
    x = read();
    int ans = 0;
    while (x) {
      for (int i = n; i >= 1; i--)
        if (x >= a[i]) {
          x -= a[i], ans++;
          break;
        }
    }
    cout << ans << "\n";
  }
  return 0;
}