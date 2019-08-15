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
#define sci(i) scanf("%d",&i)
#define scl(i) scanf("%ld",&i)
#define scll(i) scanf("%lld",&i)
#define loop(x,y) for(int i = x; i < y; ++i)
int max (int a, int b) { return a > b ? a : b;}
int min (int a, int b) { return a < b ? a : b;}
ll gcd(ll a, ll b){ return (b==0)? a : gcd(b, a%b);}
int* arr(int n){
	int* a=new int[6];
	for(int i=0;i<6;i++)
		a[i] = 0;
	int h = n/(60*60);
	int m = (n/(60))%60;
	int s = n%60;
	if(h/10<1&&h!=10){
		a[1] = h;
	}
	else{
		a[0] = h/10;
		a[1] = h%10;
	}
	if(m/10<1&&m!=10){
		a[1] = m;
	}
	else{
		a[0] = m/10;
		a[1] = m%10;
	}
	if(s/10<1&&s!=10){
		a[1] = s;
	}
	else{
		a[0] = s/10;
		a[1] = s%10;
	}
	return a;
}
int main(){
	
	#ifndef ONLINE_JUDGE
    
    // for getting input from input.txt
    freopen("C:\\Users\\Ezone\\Desktop\\cp\\input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("C:\\Users\\Ezone\\Desktop\\cp\\output.txt", "w", stdout);
	#endif
    int q;
    cin>>q;
    int n = 86400;
    int a[n]={0};
    a[0] = 1;
   	for(int i=1;i<n;i++){
   		a[i] = a[i-1];
   		int* s= arr(i);
   		if((s[0]==s[5])&&(s[1]==s[4])&&(s[2]==s[3])){
   			a[i]++;
   		}
   	}
   	while(q--){
   		string x,y;
   		cin>>x>>y;
   		int xnum=0,ynum=0;
   		for(int i=0;i<8;i++){
   			if(x[i]!=':')
   				
   		}
   		xnum = (x[1] + x[0]*10)*60*60;
   		ynum = (y[1] + y[0]*10)*60*60;
   		xnum +=(x[3] + x[2]*10)*60;
   		ynum +=(y[3] + y[2]*10)*60;
   		xnum +=(x[5] + x[4]*10);
   		ynum +=(y[5] + y[4]*10);
   		cout<<xnum<<" "<<ynum<<"\n";
   		int ans=0;
   		ans = a[ynum]-a[xnum];
   		cout<<ans<<"\n";
   	}
	return 0;
}