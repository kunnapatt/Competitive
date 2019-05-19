#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int func(int n){
    int cou = 0 ;
    while ( n != 1 ){
        if ( n % 2 != 0 ){
            n = 3*n + 1 ;
        }else {
            n/=2 ;
        }
        cou++ ;
    }
    return cou ;
}

int main(){
    int star, en, tem ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> star >> en ){
        int orstar = star ;
        int oren = en ;
        if ( star > en ){
            tem = en ;
            en = star ;
            star = tem ;
        }
        int ans = func(star) ;
        int ma = -1 ;
        for (int i = star+1 ; i <= en ; i++){
            ma = func(i) ;
            ans = max(ans, ma) ;
        }
        cout << orstar << " " << oren << " " << ans+1 << endl ;
    }
    return 0 ;
}


