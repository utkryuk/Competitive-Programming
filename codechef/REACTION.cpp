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
    int t,r,c;
    cin>>t;
    while(t--){
    	cin>>r>>c;
    	int a[r][c];
    	for(int i=0;i<r;i++){
    		for(int j=0;j<c;j++)
    			cin>>a[i][j];
    	}
    	int ans = 1;
    	for(int i=0;i<r;i++){
    		for(int j=0;j<c;j++){
    			if((i==0&&j==0)||(i==r-1&&j==0)||(i==0&&j==c-1)||(i==r-1&&j==c-1)){
    				if(a[i][j]>1){
    					ans = 0;
    					break;
    				}    						
	    		}
	    		else if(i==0||i==r-1||j==0||j==c-1){
	    			if(a[i][j]>2){
	    				ans = 0;
	    				break;
	    			}
	    		}
	    		else{
	    			if(a[i][j]>3){
	    				ans = 0;
	    				break;
	    			}
	    		}
    		}
    	}
    	if(ans==0)
    		cout<<"Unstable\n";
    	else
    		cout<<"Stable\n";
    }
	return 0;
}