/******************************************
* AUTHOR : UTKARSH GUPTA *
* NICK : not_a_cp_coder *
* INSTITUTION : BIT MESRA *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second

int main() {
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
//ios_base& scientific (ios_base& str);

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("//home//ryuk//Desktop//cp//input.txt", "r", stdin);
    // for writing output to output.txt
    //this can be opted out if you want to print the output to the sublime console
    freopen("//home//ryuk//Desktop//cp//output.txt", "w", stdout);
	#endif
    int t;
    cin>>t;
    while(t--){
		ll n;
    	cin>>n;
    	/*
    	LL max = INT_MIN;
    	for(int i=1;i<=sqrt(n);i++){
    		if(n%i==0&&i%2==1){
    			if(n/i>=i&&n/i>max)
    				max = i;
    			//else if(n/i<i&&i>max)
    			//	max = i;
    		}
    	}
    	*/
    	if(n%2)
    		n= n;
    	else
    		while(n%2==0){
    			n = n/2;
    		}
    	int count=0;
    	//cout<<"Case "<<count<<": "<<ans<<"\n";
    	printf("Case %d: %lld\n",count++,n);
    }
return 0;
}