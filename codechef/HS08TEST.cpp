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

	int x;
	float y;
	cin>>x>>y;
	cout.precision(2);
	if(x%5==0){
		if(y-x-0.5>=0)
			cout<<std::fixed<<y-x-0.5;
		else
			cout<<std::fixed<<y;
	}
	else
		cout<<std::fixed<<y;
	  
	return 0;

}