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
	int t,n,c,sum=0;
	cin>>t;
	while(t--){
		cin>>n>>c;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			sum =sum+ a[i];
		}
		if(sum<=c)
			cout<<"Yes\n";
		else
			cout<<"No\n";
		sum =0;

	}
	return 0;
}