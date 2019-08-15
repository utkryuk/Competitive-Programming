/******************************************
* AUTHOR : UTKARSH GUPTA *
* NICK : not_a_cp_coder *
* INSTITUTION : BIT MESRA *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
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
    	int n,a,b,x,y,z;
    	cin>>n>>a>>b>>x>>y>>z;
    	priority_queue <int> c;
    	int uk;
    	for(int i=0;i<n;i++){
    		cin>>uk;
    		c.push(uk);
    	}
    	int tot=z,ans = 0;
    	uk = floor((z-b)/y);
    	//cout<<uk;
    	if(z%(b+uk*y)!=0){
    		tot = tot - (a+uk*x);
    		while(tot>=0){
    			//cout<<c.top();
    			int rem = c.top();
    			tot = tot - rem;
    			ans++;
    			c.pop();
    			c.push(floor(rem/2));
    			if(c.top()==0){
    				ans = 0;
    				break;
    			}
    		}
    	}
    	else{
    		tot = tot - (a+(uk-1)*x);
    		while(tot>=0){
    			//cout<<c.top();
    			int rem = c.top();
    			tot = tot - rem;
    			ans++;
    			c.pop();
    			c.push(floor(rem/2));
    			if(c.top()==0){
    				ans = 0;
    				break;
    			}
    		}
    	}
    	if(ans)
    		cout<<ans<<"\n";
    	else
    		cout<<"RIP\n";
    }
return 0;
}