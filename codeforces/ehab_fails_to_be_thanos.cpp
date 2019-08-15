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
    int n;
    cin>>n;
    int a[2n];
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	sum1+= a[i];
    }
    for(int i=n;i<2*n;i++){
    	cin>>a[i];
    	sum2+=a[i];
    }
    int ans = 0;
    if(sum1!=sum2){
    	for(int i=0;i<2*n;i++)
    		cout<<a[i];
    }
    else{
    	while((2*n)--){
    		for(int i=0;i<n;i++){
    			sum1+=
    		}
    	}
    }
	return 0;
}