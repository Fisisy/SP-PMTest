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
LL n, m, ans1, ans2, A;
double R;

LL read() {
  LL s = 0, f = 0; char ch = getchar();
  while (!isdigit(ch)) f |= (ch == '-'), ch = getchar();
  while (isdigit(ch)) s = s * 10 + (ch ^ 48), ch = getchar();
  return f ? -s : s;
}

int main() {
  cin >> A;
  R = A;
  R = sqrt(R);
  for (LL i = 1; i <= R; i++)
    for (LL j = 1; j <= R; j++) 
      if (i * i + j * j <= A) ans1 += (i * i % mod + j * j % mod) % mod, ans1 %= mod;
      else break;
  //cout << R << " " << A << "\n";
  for (LL i = 1; i * i <= A; i++)
    ans2 += i * i % mod, ans2 %= mod;
  //cout << ans1 << " " << ans2 << "\n";
  cout << (ans1 + ans2) % mod * 4 % mod;
}