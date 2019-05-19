#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main(){
    int n, m ;
    freopen("test.in", "r", stdin) ;
    cin >> n >> m ;
    vi a(n) ;
    FOR(i, 0, n){
        cin >> a[i] ;
    }

    int count01 = 0;
    int count02 = 0;
    int count03 = 0;
    for (int j = 0 ;j < n;j++){
        count01 += a[j];
        //cout<<count01<<" "<<j<<endl;
        if(count01 <= m){
            count02++;
            count03 = max(count03,count02);
        }
        else{
            count01 -= a[j - count02];
            count01 -= a[j];
            count02--;
            j--;
        }
    }
    cout<<count03;
    return 0 ;
}
