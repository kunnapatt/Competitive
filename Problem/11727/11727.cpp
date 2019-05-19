#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

int main(){
    int n ;
    //freopen("test.in", "r", stdin) ;
    cin >> n ;
    string str[n] ;
    int ans[n] ;
    cin.ignore() ;
    FOR(i, 0, n){
        getline(cin, str[i]) ;
        int pos = str[i].find(" ") ;
        string sub1 = str[i].substr(0, pos) ;
        string sub23 = str[i].substr(pos+1) ;
        int pos1 = sub23.find(" ") ;
        string sub2 = sub23.substr(0, pos1) ;
        string sub3 = sub23.substr(pos1+1) ;
        int num1 = stoi(sub1), num2 = stoi(sub2), num3 = stoi(sub3) ;
        int test[3] ;
        test[0] = num1 ;
        test[1] = num2 ;
        test[2] = num3 ;
        sort(test, test+3) ;
        //cout << test[0] << ", " << test[1] << ", " << test[2] << endl ;
        float avg = (num1+num2+num3)/3 ;
        if ( avg <= test[0] ) {
            ans[i] = test[0] ;
        }else if ( avg > test[0] && avg < test[2] ){
            ans[i] = test[1] ;
        }else if ( avg >= test[2] ) {
            ans[i] = test[2] ;
        }
    }
    FOR(i, 0, n){
        cout << "Case " << i+1 << ": " << ans[i] << endl ;
    }

    return 0 ;
}
