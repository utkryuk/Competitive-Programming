/******************************************
* AUTHOR : UTKARSH GUPTA *
* NICK : RYUK *
* INSTITUTION : BIT MESRA *
******************************************/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
ll gcd(ll a,ll b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main(){
	
	#ifndef ONLINE_JUDGE
    
    // for getting input from input.txt
    freopen("C:\\Users\\Ezone\\Desktop\\cp\\input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("C:\\Users\\Ezone\\Desktop\\cp\\output.txt", "w", stdout);
	#endif
    ll t,a,b;
    cin>>t;
    while(t--){
    	cin>>a>>b;
    	ll ans = gcd(a,b);
    	cout<<ans<<" "<<(a*b)/ans<<"\n";
    }

	return 0;
}