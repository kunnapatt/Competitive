#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n ;
    cin >> n ;
    FOR(i, 0, n){
        int m ;
        cin >> m ;
        char ch[30] ;
        int inst = 0 ;
        int ans = 0 ;
        int a[m+1] ;
        FOR(j, 1, m+1){
            scanf("%s", ch) ;
            if ( strcmp(ch, "LEFT") == 0 ){
                ans-- ;
                a[j] = -1 ;
            }else if ( strcmp(ch, "RIGHT") == 0 ){
                ans++ ;
                a[j] = 1 ;
            }else {
                string str ;
                cin >> str >> inst ;
                ans += a[inst] ;
                a[j] = a[inst] ;
            }
        }
        cout << ans << endl ;
    }
    return 0;
}
