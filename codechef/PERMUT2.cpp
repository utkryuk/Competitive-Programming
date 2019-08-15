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
int perm(int n){
	int a[n],b[n],i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		b[a[i]-1]=i+1;
	}
	for(i=0;i<n;i++){
		if(a[i]!=b[i])
			return 0;
	}
	return 1;

}
int main(){
	
	#ifndef ONLINE_JUDGE
    
    // for getting input from input.txt
    freopen("C:\\Users\\Ezone\\Desktop\\cp\\input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("C:\\Users\\Ezone\\Desktop\\cp\\output.txt", "w", stdout);
	#endif
	int n;
	while(1){
		cin>>n;
		if(n==0)
			break;
		else
			{
				int x = perm(n);
				if(x==0)
					cout<<"not ambiguous\n";
				else if(x==1)
					cout<<"ambiguous\n";
			}
	}	

	return 0;

}