#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n, m ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n >> m ){
            int tmp = m;
        while (n > m && (m > 1 && n > 1)) m = m * tmp;
        if (m != n || (m < 2 || n < 2)) {
          puts("Boring!");
        } else {
          printf("%d", m);
          while (m > 1) printf(" %d", (m = m / tmp));
          puts("");
        }
  }
  return 0;
}




