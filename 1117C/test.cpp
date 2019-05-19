#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

char s[100005];
long sumx[100005],sumy[100005];

int main(){
    long x1,x2,y1,y2,n ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> x1 >> y1 >> x2 >> y2>> n ){
        cin>>s;
        for(int i=1;i<=n;++i){
            sumx[i]=sumx[i-1] ;
            sumy[i]=sumy[i-1] ;
            if(s[i-1]=='U')
                sumy[i]++ ;
            else if(s[i-1]=='D')
                sumy[i]-- ;
            else if(s[i-1]=='L')
                sumx[i]-- ;
            else
                sumx[i]++ ;
        }
        long  l=1,r=1e18,nn,ans=-1,dstx,dsty ;
        while(l<=r){
            long mid = (l+r)/2 ;
            dstx = x1+mid/n*sumx[n]+sumx[mid%n] ;
            dsty = y1+mid/n*sumy[n]+sumy[mid%n] ;
            nn = abs(x2-dstx)+abs(y2-dsty) ;
            if(mid >= nn){
                r = mid-1;
                ans = mid;
            }else{
                l = mid+1;
            }
        }
        cout << ans << endl;
        return 0;
    }
}
