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
ll int s(ll int n){
	ll int sum=0;
	while(n){
		sum = sum+ n%10;
		n = n/10;
	}
	return sum;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
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
   		ll int n;
   		cin>>n;
   		//ll int m=n;
   		//ll int sum=0;
   		/*while(1){
   			ll int m=n;
   			while(n){
   				sum = sum+ n%10;
   				n = n/10;
   				}
   			if(m%sum==0){
   				cout<<m<<endl;
   				break;
   				}
   			m++;
   			break;
   		}*/
   		ll int m = n;
   		while(1){
   			ll int sum = s(m);
   			if(m%sum==0){
   				cout<<m<<endl;
   				break;
   			}
   			else
   			{
   				m++;
   			}
   		}
   	}

return 0;
}