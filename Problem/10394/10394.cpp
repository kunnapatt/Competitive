#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

bool isprime(int n){
    for(int i = 2 ; i*i <= n ; i++){
        if ( n%i == 0 ){
            return false ;
        }
    }
    return true ;
}

int main(){
    int cou = 0 ;
    vi a(100001, 0) ;
    for (int i = 3; i <= 20000000 && cou < 100000; i+=2) {
        bool prime = true;
        //if (i%10==3 || i%10==5) continue;
        for (int j = 3; j*j <= i+2 && prime; j+=2) {
            if (i%j==0 || (i+2)%j==0)
                prime = false;
        }

        if (prime) {
            a[cou++] = i ;
        }
    }
    while ( cin >> cou ){
        cout << "(" << a[cou-1] << ", " << a[cou-1]+2 << ")\n" ;
    }
    /*
    for(int i = 2 ; i <= 20000000 ; i++){
        if ( isprime(i) && isprime(i+2) ){
            a[cou++] = i ;
        }
    }
    FOR(i, 0, cou){
        cout << i << ", " << cou << endl ;
    }
    */
    return 0 ;
}


