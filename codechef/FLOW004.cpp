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
	int n,t,temp=0;
	cin>>t;
	while(t--){
	    cin>>n;
	    temp = n%10+temp;
	    while(n){
	        n = n/10;
	        if(n%10==n)
	            temp = n+ temp;
	    }
	    cout<<temp<<"\n";
	    temp= 0;
	}
	return 0;
}