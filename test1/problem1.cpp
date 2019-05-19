#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main(){
    long long n, m ;
    freopen("test.in", "r", stdin) ;
    cin >> n >> m ;
    //vi a(m) ;
    long long sum = 0 ;
    double a ;
    FOR(i, 0, m){
        long long in ;
        cin >> in ;
        //cout << sum << ", " << in << ", " << pow(n, m-i-1) << " = " << in*pow(n, m-i-1)  << endl ;
        a += in*pow(n, m-i-1) ;
        //cout << a << endl ;
    }
    //sum+=1 ;
    cout << a << endl ;
    if ( long(a) % 2 == 0){
        cout << "Even" ;
    }else {
        cout << "Odd" ;
    }
    return 0 ;
}
