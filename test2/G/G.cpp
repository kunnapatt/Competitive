#include <iostream>
#include <map>
#include <cstdio>
using namespace std;
int n,m,ma=1000000000;
map<int,int> sum;
int lowbit(int t) {
    return t&(-t);
}
void update(int x) {
    while(x <= ma) {
        sum[x] ++;
        x += lowbit(x);
    }
}
int getans(int x) {
    int ans = 0;
    while(x > 0) {
        ans += sum[x];
        x -= lowbit(x);
    }
    return ans;
}
int main() {
    int d;
    scanf("%d",&n);
    for(int i = 0;i < n;i ++) {
        scanf("%d",&d);
        update(d);
    }
    scanf("%d",&m);
    for(int i = 0;i < m;i ++) {
        scanf("%d",&d);
        printf("%d\n",getans(d));
    }
}
