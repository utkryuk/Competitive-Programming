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
ll int sumOfDigits(ll int n){
	ll int sum = 0;
	while(n){
		int x = n%10;
		sum = sum + x;
		n = n/10;
	}
	//<<sum<<"\n";
	return sum;
}
ll int binaryExponentiation(ll int x,ll int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return binaryExponentiation(x*x,n/2);
    else                             //n is odd
        return x*binaryExponentiation(x*x,(n-1)/2);
}
int main(){
	
	#ifndef ONLINE_JUDGE
    
    // for getting input from input.txt
    freopen("C:\\Users\\Ezone\\Desktop\\cp\\input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("C:\\Users\\Ezone\\Desktop\\cp\\output.txt", "w", stdout);
	#endif
 	ll n,a,b;
     cin>>n;
     ll m=n,k=9;
     while(m>=k)
     {
         k=k*10+9;
     }
     //cout<<k<<"\n";
     k/=10;
     //cout<<k<<endl;
     a=k;
     b=n-k;
     ll sum=0;
     while(a)
     {
         sum+=a%10;
         a/=10;
     }
     while(b)
     {
         sum+=b%10;
         b/=10;
     }
     cout<<sum<<endl;
	return 0;
}