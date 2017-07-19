//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int x, y, s;
  while (cin >> x >> y >> s, x && y && s) {
    int ans = 0;

    for (int o1=1; o1<s; o1++) {
      for (int o2=1; o2<s; o2++) {

        int p1 = o1 * (100+x) / 100.0;
        int p2 = o2 * (100+x) / 100.0;

        if (p1+p2 != s) continue;

        int n1 = o1 * (100+y) / 100;
        int n2 = o2 * (100+y) / 100;

        ans = max(ans, n1+n2);

      }
    }

    cout << ans << endl;
  }
  return 0;
}
