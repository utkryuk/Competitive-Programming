#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long int fac[100001];
long long int fact(long long int n){
    if(n==0)
        return 1;
    if(fac[n])
        return fac[n];
    fac[n] = ((n%MOD)*fact(n-1)%MOD)%MOD;
    return fac[n];
}
int main(){

    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("//home//ryuk//Desktop//cp//input.txt", "r", stdin);
    // for writing output to output.txt
    //this can be opted out if you want to print the output to the sublime console
    freopen("//home//ryuk//Desktop//cp//output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int ans = fact(n);
        cout<<ans<<"\n";
    }
    return 0;
}