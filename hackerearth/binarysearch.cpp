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
    int n;
    cin>>n;
    int a[n];
    rep(i,n)
    	cin>>a[i];
    sort(a,a+n);
    int q,x;
    cin>>q;
    while(q--){
    	cin>>x;
    	int low = 0, high = n-1,mid;
    	while(low<=high){
    		mid = (low+high)/2;
    		if(a[mid] == x)
    			break;
    		else if(x>a[mid])
    			low = mid+1;
    		else if(x<a[mid])
    			high = mid-1;
    	}
    	cout<<mid+1<<"\n";
    }
return 0;
}