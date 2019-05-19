#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
//#define long long long
bool isPrime(long n){
    for(int i = 2 ; i * i <= n ; i++){
        if ( n % i == 0 ){
            return false ;
        }
    }
    return true ;
}

int main(){
    string str ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> str ){
        long sum = 0 ;
        FOR(i, 0, str.length()){
            if ( str[i] >= 'A' && str[i] <= 'Z' ){
                sum += (str[i] - '@' + 26) ;
            }else if ( str[i] >= 'a' && str[i] <= 'z' ){
                sum += (str[i] - '`') ;
            }
        }
        if ( isPrime(sum) ){
            cout << "It is a prime word.\n" ;
        }else {
            cout << "It is not a prime word.\n" ;
        }
    }
    return 0 ;
}


