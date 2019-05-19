#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n ;
    cin >> n ;
    FOR(i, 0, n){
        int L, W, H ;
        cin >> L >> W >> H ;
        if ( L <= 20 && W <= 20 && H <= 20 ){
            cout << "Case " << i+1 << ": good\n" ;
        }else {
            cout << "Case " << i+1 << ": bad\n" ;
        }
    }
    return 0 ;
}
