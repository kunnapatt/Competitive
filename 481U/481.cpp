#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long
#define MAX 100000

int n[MAX];
int pos[MAX];
int cnt;
vector<int> l;
int LIS() {
  if (!cnt) return 0;


  l.push_back(n[0]);
  pos[0] = 1;

  for (int i = 1; i < cnt; i++) {
    if (n[i] > l.back()) {
      l.push_back(n[i]);
      pos[i] = l.size();
    } else {
      pos[i] = lower_bound(l.begin(), l.end(), n[i]) - l.begin() + 1;
      *lower_bound(l.begin(), l.end(), n[i]) = n[i];
    }
  }

  return l.size();
}

int main() {
    //freopen("test.in", "r", stdin) ;
    int tmp;
  cnt = 0;
  while (EOF != scanf("%d", &tmp)) {
    n[cnt++] = tmp;
  }

  int size = LIS();
  printf("%d\n", size);
  printf("-\n");

  int ans[MAX] = {};
  int j = 0;

  for (int i = cnt-1, index = size; i >= 0; i--)
    if (pos[i] == index) {
      ans[j++] = n[i];
      index--;
    }

  for (int i = j-1; i >= 0; i--)
    printf("%d\n", ans[i]);

  return 0;
}
