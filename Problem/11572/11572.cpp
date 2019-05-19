#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int T;
    int A[1000001] ;
    while(cin>>T){
         while(T--){
              int n;
              cin>>n;
              for(int i=0;i<n;i++){
                      cin>>A[i];
              }

              set<int> s;
              int L=0,R=0,ans=0;
              while(R<n){
                   while(R<n&&!s.count(A[R])){
                        s.insert(A[R++]);
                   }

                   ans=max(ans,R-L);

                   s.erase(A[L++]);
              }
              cout<<ans<<endl;
         }
    }
    return 0;
}
