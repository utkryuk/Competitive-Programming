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
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    /*
    int start = 0,end = n-1;
    while(start<end){
    	int temp = a[start];
    	a[start] = a[end];
    	a[end] = temp;
    	start++;
    	end--;
    }
    int ans = start+ (n-1);
    cout<<ans<<"\n";
    int i,count=1;
    for(i=n;i>0;i--){
    	int j=0;
    	if(n == a[i])
    		while(i-1>=0){
    			if(n-j-1==a[i-1]){
    				j++;
    				i--;
    				count++;
    			}
    			else{
    				//cout<<a[i-1]<<" ";
    				break;
    			}
    		}
    }
    cout<<n-count<<"\n";
    */
    int end = n;
    for(int i=n;i>=1;i--){
    	if(a[i]==end)
    		end--;
    }
    cout<<end<<"\n";
return 0;
}