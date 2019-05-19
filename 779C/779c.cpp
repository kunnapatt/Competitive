#include <bits/stdc++.h>

using namespace std ;
#define FOR(i, a, b) for( int i = a ; i < b ; i++ )
#define vi vector<int>

bool sortsec(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
    if ( a.second.first > a.first && b.second.first > b.first )
        return a.second.first - a.first < b.second.first - b.second.first ;
    else if ( a.second.first < a.first && b.second.first < b.first )
        return a.first - a.second.first < b.first - b.second.first ;
    else return a.first - a.second.first < b.first - b.second.first ;
}

int main() {
    int n, m ;
    //freopen("test.in", "r", stdin) ;
    cin >> n >> m ;
    vi de1(n) ;
    vector<pair<int, pair<int, int>>> a(n) ;
    int suma = 0, couma = 0 ;
    FOR(i, 0, n) {
        cin >> de1[i] ;
        a[i].first = de1[i];
    }
    vi de2(n) ;
    FOR(i, 0, n) {
        cin >> de2[i] ;
        a[i].second.first = de2[i] ;
    }
    vi sum(n) ;
    FOR(i, 0, n) {
        sum[i] = de2[i] - de1[i] ;
        a[i].second.second = sum[i] ;
    }
    sort(a.begin(), a.end(), sortsec) ;
    FOR (i, 0, n) {
    //    cout << a[i].first << ", " << a[i].second.first << ", " << a[i].second.second << endl ;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i].second.first < a[i].first && m<=0)
            suma+=a[i].second.first ;

        else
        {
            suma+=a[i].first;
            m--;
            couma++ ;
        }
    }

    cout << suma << endl ;
    return 0 ;
}
