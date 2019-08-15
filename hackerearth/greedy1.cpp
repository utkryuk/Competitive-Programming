#include<bits/stdc++.h>
using namespace std;
int main(){
        #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("//home//ryuk//Desktop//cp//input.txt", "r", stdin);
    // for writing output to output.txt
    //this can be opted out if you want to print the output to the sublime console
    freopen("//home//ryuk//Desktop//cp//output.txt", "w", stdout);
    #endif
    int t,n,x;
    cin>>t;
    while(t--){
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int ans=0;
    for(int i=0;i<n;i++){
        if(x>=a[i]){
        x = x- a[i];
        ans++;
        }
    }
    cout<<ans;
    }
    return 0;
}