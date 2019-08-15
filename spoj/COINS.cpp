/******************************************
* AUTHOR : UTKARSH GUPTA *
* NICK : not_a_cp_coder *
* INSTITUTION : BIT MESRA *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second
map <ll , ll > m;
ll dp(ll n){
	if(n==1||n==0)
		return n;
	if(m[n])  //this works as map initializes starting value as 0
		return m[n]; 
	m[n] = dp(n/2)+dp(n/3)+dp(n/4);
	m[n] = max(n,m[n]);
	return m[n];
}
int main() {

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("//home//ryuk//Desktop//cp//input.txt", "r", stdin);
    // for writing output to output.txt
    //this can be opted out if you want to print the output to the sublime console
    freopen("//home//ryuk//Desktop//cp//output.txt", "w", stdout);
	#endif
	ll n;
	m[0] = 0;
	m[1]= 1;
    while(scanf("%lld",&n)!=EOF){
    	ll ans = dp(n);
    	cout<<ans<<"\n";
    } 
return 0;
}