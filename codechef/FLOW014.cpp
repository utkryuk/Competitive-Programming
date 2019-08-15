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
    int t;
    float h,c,ts;
    cin>>t;
    while(t--){
    	cin>>h>>c>>ts;
    	if(h>50 && c<0.7 && ts>5600)
    		cout<<"10\n";
    	else if(h>50 && c<0.7 && ts<=5600)
    		cout<<"9\n";
    	else if(h<=50 && c<0.7 && ts>5600)
    		cout<<"8\n";
    	else if(h>50 && c>=0.7 && ts>5600)
    		cout<<"7\n";
    	else if(h>50 || c<0.7 || ts>5600)
    		cout<<"6\n";
    	else if(h<=50 && c>=0.7 && ts<=5600)
    		cout<<"5\n";
    }
	return 0;

}