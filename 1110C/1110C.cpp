#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

void solve(int x) {
    if(x==3) puts("1");
    if(x==7) puts("1");
    if(x==15) puts("5");
    if(x==31) puts("1");
    if(x==63) puts("21");
    if(x==127) puts("1");
    if(x==255) puts("85");
    if(x==511) puts("73");
    if(x==1023) puts("341");
    if(x==2047) puts("89");
    if(x==4095) puts("1365");
    if(x==8191) puts("1");
    if(x==16383) puts("5461");
    if(x==32767) puts("4681");
    if(x==65535) puts("21845");
    if(x==131071) puts("1");
    if(x==262143) puts("87381");
    if(x==524287) puts("1");
    if(x==1048575) puts("349525");
    if(x==2097151) puts("299593");
    if(x==4194303) puts("1398101");
    if(x==8388607) puts("178481");
    if(x==16777215) puts("5592405");
    if(x==33554431) puts("1082401");
}
int main() {
    int n;
    for(scanf("%d",&n);n--;) {
        int x;
        scanf("%d",&x);
        int cnt=0,tp=0;
        for(int i=0;i<=24;++i) {
            if(x&(1<<i)) tp=i,++cnt;
        }
        if(cnt==tp+1) solve(x);
        else printf("%d\n",(1<<(tp+1))-1);
    }
    return 0;
}
