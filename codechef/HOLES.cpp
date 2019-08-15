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
#define sci(i) scanf("%d",&i)
#define scl(i) scanf("%ld",&i)
#define scll(i) scanf("%lld",&i)
#define for(n) for(int i = 0; i < n; ++i)
#define loop(x,y) for(int i = x; i < y; ++i)
int max (int a, int b) { return a > b ? a : b;}
int min (int a, int b) { return a < b ? a : b;}
ll gcd(ll a, ll b){ return (b==0)? a : gcd(b, a%b);}
int main(){
	
	#ifndef ONLINE_JUDGE
    
    // for getting input from input.txt
    freopen("C:\\Users\\Ezone\\Desktop\\cp\\input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("C:\\Users\\Ezone\\Desktop\\cp\\output.txt", "w", stdout);
	#endif
    int t;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	int ans  =0;
    	for(s.length()){
    		if(s[i]=='A'||s[i]=='D'||s[i]=='O'||s[i]=='P'||s[i]=='R'||s[i] =='Q')
    			ans++;
    		else if(s[i]=='B')
    			ans = ans+2;
    		else
    			continue;
    	}
    	cout<<ans<<"\n";
    }
	return 0;
}