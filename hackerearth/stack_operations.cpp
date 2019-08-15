#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("//home//ryuk//Desktop//cp//input.txt", "r", stdin);
    // for writing output to output.txt
    //this can be opted out if you want to print the output to the sublime console
    freopen("//home//ryuk//Desktop//cp//output.txt", "w", stdout);
	#endif
    int n;
    cin>>n;
    ll k,a[n];
    cin>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    ll m = LLONG_MIN;
    ll top = 0;
    if(k==1)
    	top = -1;
    else{
    	if(n==1&&k%2==0)
    		top = a[0];
    	else if(n==1&&k%2!=0)
    		top = -1;
		else if(k>=n){
		    for(int i=0;i<n;i++){
		        m = max(m,a[i]);
		    }
		   	top = m;
		}
		else if(k<n&&k%2==0){
		    for(int i=0;i<=k;i+=2){
		        m = max(m,a[i]);
		    }
		    top = m;
		}
		else if(k<n&&k%2!=0){
			for(int i=1;i<=k;i+=2)
				m = max(m,a[i]);
			top = m;
		}
	}
	cout<<top<<"\n";
    return 0;
}