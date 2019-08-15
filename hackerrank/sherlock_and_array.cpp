/******************************************
* AUTHOR : UTKARSH GUPTA *
* NICK : not_a_cp_coder *
* INSTITUTION : BIT MESRA *
******************************************/
/*
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
    int t,n;
    cin>>t;
    while(t--){
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    		cin>>a[i];
    	int pre[n];
    	pre[0] = a[0];
    	for(int i=1;i<n;i++)
    		pre[i] = a[i] + pre[i-1];
    	int lsum=0,rsum=0;
    	bool ans = false;
    	for(int i=0;i<n;i++){
    		if(n==0)
    			break;
    		else{
    			lsum = pre[i] - a[i];
    			rsum = pre[n-1] - pre[i];
    			if(lsum==rsum){
    				ans = true;
    				break;
    			}
    			else
    				continue;
    		}
    	}
    	if(ans==false)
    		cout<<"NO\n";
    	else
    		cout<<"YES\n";
    }
return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	vector <int> a[10]={0,1,1,2,23,4,4,5,56,7};
	for(auto it=a.begin();it!=a.end();it++){
		cout<<*it<<" ";
	}
	return 0;
}