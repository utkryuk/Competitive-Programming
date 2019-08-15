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
    int t,n;
    cin>>t;
    while(t--){
    	cin>>n;
    	ll int a[n];
    	for(int i=0;i<n;i++)
    		cin>>a[i];
    	ll int diff = 0;
    	if(a[1]-a[0]==a[2]-a[1]){
    		diff = a[1] - a[0];
    		for(int i=0;i<n;i++){
    			cout<<(a[0]+i*diff)<<" ";
    		}
    	cout<<"\n";
    	}
    	else if(a[2]-a[1]==a[3]-a[2]){
    		diff = a[2]-a[1];
    		a[0] = a[1] - diff;
    		for(int i=0;i<n;i++)
    			cout<<(a[0]+i*diff)<<" ";
    		cout<<"\n";
    	}
    	else{
    		diff = (a[3] - a[0])/3;
    		a[0] = a[3] - 3*diff;
    		a[1] = a[3] - 2*diff;
    		a[2] = a[3] - diff;
    		for(int i=0;i<n;i++)
    			cout<<(a[0]+i*diff)<<" ";
    		cout<<"\n";
    	}
    }
	return 0;
}