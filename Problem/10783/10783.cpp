#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main() {
    int n ;
    //freopen("test.in", "r", stdin) ;
    cin >> n ;
    int sum = 0 ;
    FOR(i, 0, n){
        int in, in2 ;
        cin >> in >> in2 ;
        if ( in%2 == 0 ) in++ ;
        int sumin = (in2 - in)/2 ;
        //if ( in != in2 ){
            for(int i = in ; i <= in2 ; i+=2){
                //in += 2 ;
                sum += i ;
                //sumin -= 2 ;

            }
        //}else {
            //sum = in ;
        //}

        cout << "Case " << i+1 << ": " << sum << endl ;
        sum = 0 ;
    }
    return 0 ;
}
