#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define lli long long int

bool comp(pair<lli,lli> a,pair<lli,lli> b){
    if(a.first==b.first){
        if(a.second<b.second)
            return true;
        else
            return false;
    }
    else if(a.first>b.first)
        return false;
    else if(a.first<b.first)
        return true;

}
int main(){
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("//home//ryuk//Desktop//cp//input.txt", "r", stdin);
    // for writing output to output.txt
    //this can be opted out if you want to print the output to the sublime console
    freopen("//home//ryuk//Desktop//cp//output.txt", "w", stdout);
    #endif
    lli t;
    scanf("%lld",&t);
    while(t--){
        lli n;
        scanf("%lld",&n);
        lli v[n];
        pair <lli,lli> a[n];
        rep(i,n) scanf("%lld",&v[i]);
        rep(i,n){
            lli cnt = 0;
            lli x = v[i];
            while(x){
                cnt+= (x)&1;
                x = (x)>>1;
            }
            a[i].first = cnt;
            a[i].second = i;
        }
        sort(a,a+n,comp);
        for(int i=0;i<n;i++){
            cout<<v[a[i].second]<<" ";
        }
        printf("\n");
    }
    return 0;
}