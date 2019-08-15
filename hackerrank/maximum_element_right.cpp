#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("//home//ryuk//Desktop//cp//input.txt", "r", stdin);
    // for writing output to output.txt
    //this can be opted out if you want to print the output to the sublime console
    freopen("//home//ryuk//Desktop//cp//output.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    vector <ll> v;
    stack <ll> s;
    //cout<<t<<"\n";
    while(t--){
        //cout<<"t="<<t<<"\n";
        ll n;
        cin>>n;
        //cout<<n<<"\n";
        if(n==1){
            ll x;
            cin>>x;
      //      cout<<x<<"\n";
            s.push(x);
            v.push_back(x);
        }
        else if(n==2){
            s.pop();
            v.erase(v.end()-1);
        }
        else if(n==3){
            ll mmax = 0;
            for(auto it =v.begin();it!=v.end();it++){
                if(*it>=mmax){
                    mmax = *it;
                }
            }
            cout<<mmax<<"\n";
        }
    }
    return 0;
}