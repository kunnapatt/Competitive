#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

vector< pair<int, int> > adj[1005] ;
vector<bool> visited(1005) ;

int main(){
    long x1, y1, x2, y2 ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> x1 >> y1 >> x2 >> y2 ){
        //cin >> x2 >> y2 ;
        int n ;
        cin >> n ;
        long day[n+10][2] ;
        //pair<int, int> day[n+5] ;
        memset(day, 0, sizeof(day)) ;
        FOR(i, 1, n+1){
            FOR(j, 0, 2){
                day[i][j] = day[i-1][j] ;
            }
            char ch ;
            cin >> ch ;
            //int in = 0 ;
            if ( ch == 'U' ){
                day[i][1]++ ;
                //day[i].push_back(make_pair(0, in++)) ;
            }else if ( ch == 'D' ){
                day[i][1]-- ;
                //day[i].push_back(make_pair(0, in--)) ;
            }else if ( ch == 'L' ){
                day[i][0]-- ;
                //day[i].push_back(make_pair(in--, 0)) ;
            }else if ( ch == 'R' ){
                day[i][0]++ ;
                //day[i].push_back(make_pair(in++, 0)) ;
            }
        }
        long l = -1, r = 1000000007, ans = -1 ;
        while ( l <= r ){
            long mid = (l+r)/2 ;
            long div = mid/n ;
            long remain = mid%n ;
            long calx = x1 + div*day[n][0]+ day[remain][0] ;
            long caly = y1 + div*day[n][1] + day[remain][1] ;
            if ( (abs(calx - x2) + abs(caly - y2)) <= mid ){
                r = mid-1 ;
                ans = mid ;
            }else {
                l = mid + 1 ;
            }
            //cout << day[n][0] << ", " << day[remain][0] << endl ;
        }
        cout << ans << endl ;
    }
    return 0 ;
}

