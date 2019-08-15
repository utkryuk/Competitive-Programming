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
    int t,n,i,flag=1;
    cin>>t;
    while(t--){
    	cin>>n;
    	int a[n];
    	for(i=0;i<n;i++){
    		cin>>a[i];
    	}
    	for(i=0;i<n-1;i++){
    		int temp = a[i];
    		if(a[i+1]==temp || a[i+1]== temp+1 || a[i+1] == temp-1){
    			continue;
    		}
    		else{
    			flag=0;
    			break;
    			}
    		}
    		if(a[n-1]!=1)
    			flag=0;
    	if(flag==0)
    		cout<<"no\n";
    	else
    		cout<<"yes\n";
    	flag =1;

    	}
	return 0;

}