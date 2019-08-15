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
int main(){
	
	#ifndef ONLINE_JUDGE
    
    // for getting input from input.txt
    freopen("C:\\Users\\Ezone\\Desktop\\cp\\input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("C:\\Users\\Ezone\\Desktop\\cp\\output.txt", "w", stdout);
	#endif
    int t,g,n,i,q,ans;
    cin>>t;
    while(t--){
    	cin>>g;
    	while(g--){
    		cin>>i>>n>>q;
    		if(n%2==0)
    			cout<<n/2<<"\n";
    		else
    			{
    				if(i==1&&q==1)
    					cout<<n/2<<"\n";
    				else if(i==1&&q==2)
    					cout<<(n/2)+1<<"\n";
    				else if(i==2&&q==1)
    					cout<<(n/2)+1<<"\n";
    				else if(i==2&&q==2)
    					cout<<n/2<<"\n";
    			}
    		}
    	}
}