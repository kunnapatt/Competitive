#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int v[5] = {1, 5, 10, 25, 50} ;

int counttheway(int coin,int type){
    if ( coin == 0 ){
        return 1 ;
    }else if ( type == 0 ){
        return 1 ;
    }else if ( coin < 0 ){
        return 0 ;
    }
    return counttheway(coin - v[type], type) + counttheway(coin, type - 1) ;
}

int main() {
    int n ;
    while ( cin >> n ){
        int indx = -1 ;
        FOR(i, 0, 5){
            if ( v[i] <= n ){
                indx = i ;
            }
        }
        int a = counttheway(n, indx) ;
        if ( a != 1 ){
            cout << "There are " << a << " ways to produce " << n << " cents change." << endl ;
        }else {
            cout << "There is only " << a << " way to produce " << n << " cents change." << endl ;
        }
    }
    return 0 ;
}





