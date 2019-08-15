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


int getMinsteps(int n,int *memo,int k){
	if(n==1)
		return 0;
	if(memo[n]!=-1)
		return memo[n];
	int res  =getMinsteps(n-1,memo,k);
	if(n%k==0)
		res = min(res,getMinsteps(n/k,memo,k));
	memo[n] = 1+res;
	return memo[n]; 
}
int memoinit(int n,int k){
	int memo[n+1];
	for(int i=0;i<=n;i++)
		memo[i] = -1;
	return getMinsteps(n,memo,k);
}
int main(){
	
	#ifndef ONLINE_JUDGE
    
    // for getting input from input.txt
    freopen("C:\\Users\\Ezone\\Desktop\\cp\\input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("C:\\Users\\Ezone\\Desktop\\cp\\output.txt", "w", stdout);
	#endif
    long long int t;
    cin>>t;/*
    while(t--){
    	long long int n,k,sum=0;
    	cin>>n>>k;
    	while(n){
    		if(n%k==0&&n!=1){
    			n = n/k;
    			sum++;
    		}
    		else{
    			n--;
    			sum++;
    		}
    	}
    	cout<<sum<<"\n";
    }*/
    while(t--){
    	long long int n,k,sum =0;
    	cin>>n>>k;
    	long long int ans  =memoinit(n,k);
    	cout<<ans<<"\n";
    }
	return 0;
}