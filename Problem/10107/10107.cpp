#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n ;
    vi a ;
    while ( cin >> n){
        a.push_back(n) ;
        sort(a.begin(), a.end()) ;
        if ( a.size() % 2 != 0 ){
            int siz = a.size()/2 ;
            cout << a[siz] << endl ;
        }else {
            int siz = a.size()/2 ;
            cout << (a[siz-1] + a[siz])/2 << endl ;
        }
    }
    return 0 ;
}
