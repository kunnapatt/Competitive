#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
tuple<vi,vi> func(vi,vi);
void printt(vi);
int main() {
    int n ;
    freopen("test.in", "r", stdin) ;
    cin >> n ;
    vi a(9) ;
    vi a2(9) ;
    vi a3(9);
    map<int, int> mapp ;
    int mi = 100000001 ;
    int pos = 0 ;
    for(int i = 0 ; i < 9 ; i++){
        int in ;
        cin >> in ;
        a[i] = in ;
        mapp[i] = in ;
        a2[i] = i+1;
        mi = min(mi, mapp[i]) ;
        if ( mi == mapp[i] ){
            pos = i ;
        }
    }
    if ( n == 0 || mi > n ){
        cout << -1 << endl ;
        return 0 ;
    }

    int remain = n%mi ;
    int devid = n/mi ;

    //cout << remain << ", " << devid << endl ;
    tie(a3,a2) = func(a,a2);
    printt(a);
    printt(a3);
    printt(a2);

    vi b(devid,a2[0]) ;
    printt(b);
    int checksum;
    cout<<b.size()<<endl;
    for (int i = 0 ; i < 9; i++){
        for(int j = 0 ; j < b.size() - i ; j++){
            if(j <= b.size() - 1){
                cout<<remain<<" "<<a3[i]<<" "<<a[b[j] - 1 ]<<" "<<abs(a3[i] - a[b[j]])<<endl;
                printt(b);
                checksum = remain - abs(a3[i] - a[b[j] - 1]);
                if(checksum >= 0){
                    remain = remain - abs(a3[i] - a[b[j] - 1]);
                    b[j] = a2[i];
                }
            }
        }
    }
    printt(b);
    //for( auto ma:mapp){
    //    cout << ma.first << ", " << ma.second << endl ;
    //}

    return 0 ;
}
tuple<vi,vi> func(vi a,vi b){
    //printt(a);
    //printt(b);
    int temp1,temp2;
    for(int i = 0 ;i < 8;i++){
        for(int j = 0; j < 8 - i;j++){
            if(a[j] >= a[j+1]){
                temp1 = a[j];
                temp2 = b[j];
                a[j] = a[j+1];
                a[j+1] = temp1;
                b[j] = b[j+1];
                b[j+1] = temp2;
            }
        }
    }
    //printt(a);
    //printt(b);

    return make_tuple(a,b);
}

void printt(vi a){
    for(int i = 0 ; i < a.size() ; i++){
        cout << a[i] <<"," ;
    }
    cout<<endl;
}
