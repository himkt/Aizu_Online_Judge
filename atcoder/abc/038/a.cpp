# include <algorithm>
# include <cassert>
# include <cctype>
# include <cstdio>
# include <cstdlib>
# include <cstring>
# include <cmath>
# include <iostream>
# include <map>
# include <queue>
# include <set>
# include <sstream>
# include <stack>
# include <string>
# include <vector>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)

// N is size of row
// M is size of column
// vector<vector<int>> Matrix(N, vector<int>(M, -1));
// vector<type> A(num_element, value);

using namespace std;
const int INF = 1e8;

int factorial(int i) {
  if (i < 1) return 1;
  return i * factorial(i-1);
}

int permutation(int k, int c) {
  return factorial(k) / factorial(k - c);
}

int combination(int k, int c) {
  return factorial(k) / (factorial(c) * factorial(k - c));
}

string S;

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> S;

  if (S[S.size() - 1] == 'T') {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}
