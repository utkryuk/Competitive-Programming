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
bool subsetsum(int a[],int sum,int n){
	bool dp[n+1][sum+1];
	for(int i=0;i<n+1;i++)
		dp[i][0]=true;
	for(int i=1;i<sum+1;i++)
		dp[0][i] = false;
	for(int i=1;i<n+1;i++){
		for(int j=1;j<sum+1;j++){
			if(j<a[i-1])
				dp[i][j] = dp[i-1][j];
			if(j>=a[i-1])
				dp[i][j] = dp[i-1][j]||dp[i-1][j-a[i-1]];

		}
	}/*
      // uncomment this code to print table 
	 for (int i = 0; i <n+1; i++){ 
       	for (int j = 0; j <sum+1; j++) 
          	printf ("%4d", dp[i][j]); 
       	printf("\n"); 
    }
    */
	return dp[n][sum];
}
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
    	int n,k;
    	cin>>n>>k;
    	int a[n];
    	for(int i=0;i<n;i++)
    		cin>>a[i];
        bool ans = subsetsum(a,k,n);
        if(ans)
        	cout<<"Yes\n";
        else
        	cout<<"No\n";
	}
	return 0;
}