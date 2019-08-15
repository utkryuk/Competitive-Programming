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
#define for1(n) for(int i = 0; i < n; ++i)
#define loop(x,y) for(int i = x; i < y; ++i)
int max (int a, int b) { return a > b ? a : b;}
int min (int a, int b) { return a < b ? a : b;}
ll gcd(ll a, ll b){ return (b==0)? a : gcd(b, a%b);}
int main(){
    int t;
    cin>>t;
    while(t--){
    	int n,k,x;
    	cin>>n>>k;
    	map <int,int> m;
    	for1(n){
    		cin>>x;
    		x = x%(k+1);
    		m[x]++;
    	}
    	int cnt= 0;
    	for(auto it = m.begin();it!=m.end();it++){
    		//cout<<it->second<<" ";
    		if(it->second>=n-1){
    			cnt++;
    			break;
    		}
    	}
    	if(cnt)
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
    }
	return 0;
}