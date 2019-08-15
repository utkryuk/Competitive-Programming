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
    	int n= s.length();
    	int pre[n]={0};
    	if(s[0]=='L')
    		pre[0]=1;
    	for(int i=1;i<s.length();i++){
    		pre[i] = pre[i-1];
    		if(s[i]=='L')
    			pre[i]++;
    	}
    	long long int ans =0;
    	for(int i=0;i<s.length();i++){
    		if(s[i]=='O'){
    			ans = ans+ pre[i]*(pre[s.length()-1]-pre[i]);
    		}
    	}
    	cout<<ans<<"\n";
    }
	return 0;
}