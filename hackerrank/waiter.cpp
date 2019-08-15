/******************************************
* AUTHOR : UTKARSH GUPTA *
* NICK : not_a_cp_coder *
* INSTITUTION : BIT MESRA *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define ulli unsigned long long int
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
//binary exponentiation
ll binaryExponentiation(ll x,ll n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return binaryExponentiation(x*x,n/2);
    else                             //n is odd
        return x*binaryExponentiation(x*x,(n-1)/2);
}
//modular exponentiation
ll modularExponentiation(ll x,ll n,ll m)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%m,n/2,m);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%m,(n-1)/2,m))%m;
}
//euclid algo
ll gcd(ll a, ll b) {
    if(b==0)
        return a;
    else
        return gcd(b, a % b);
}
//Extended euclid algo
ll d, x, y;
void extendedEuclid(ll A, ll B) {
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        ll temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}
ll modInverse(ll A, ll M){
    extendedEuclid(A,M);
    return (x%M+M)%M;    //x may be negative
}
//sieve
void sieve(int N) {
        bool isPrime[N+1];
        for(int i = 0; i <= N;++i) {
            isPrime[i] = true;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i * i <= N; ++i) {
             if(isPrime[i] == true) {                    //Mark all the multiples of i as composite numbers
                 for(int j = i * i; j <= N ;j += i)
                     isPrime[j] = false;
            }
        }
}
//comparator function for desc order sort
bool comp(ll a,ll b){
    	return a>b;
}

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
	int n,q;
	cin>>n>>q;
	stack <int> ai;
	stack <int> ai1;
	stack <int> b1;
	stack <int> b2;
	int x;
	//int *ptr = sieve();
	for(int i=0;i<n;i++){
		cin>>x;
		ai.push(x);
	}

	int na = 20000;
	bool isprime[na+1];
	for(int i=0;i<=na;i++){
		isprime[i] = true;
	}
	isprime[0] = false;
	isprime[1] = false;
	for(int i=2;i*i<=na;i++){
		if(isprime[i]==true){
			for(int j=i*i;j<=na;j+=i){
				isprime[j] = false;
			}
		}
	}
	int cntprime = 0;
	for(int i=0;i<=na;i++){
		if(isprime[i]==true)
			cntprime++;
	}
	int a[cntprime];
	a[0] = 0;
	int j=1;
	for(int i=2;i<=na;i++){
		if(isprime[i]==true){
			a[j] = i;
			j++;
		}
	}
	cout<<ai.top()<<" "<<a[1]<<"\n";
	int div = 1;
	for(int i=1;i<=q;i++){
		div = a[i];
		if(i%2==1){
			while(1){
				if(ai.top()%div==0){
					b1.push(ai.top());
					ai.pop();
					if(ai.empty())
						break;
				}
				else{
					ai1.push(ai.top());
					ai.pop();
					if(ai.empty())
						break;
				}
			}
		}
		else{
			while(1){
				if(ai1.top()%div==0){
					b2.push(ai1.top());
					ai1.pop();
					if(ai1.empty())
						break;
				}
				else{
					ai.push(ai1.top());
					ai1.pop();
					if(ai1.empty())
						break;
				}
			}
		}
	if(q%2==0){
		while(1){
			cout<<b2.top()<<"\n";
			b2.pop();
			if(b2.empty())
				break;
		}
		while(1){
			cout<<ai.top()<<"\n";
			ai.pop();
			if(ai.empty())
				break;
		}
	}
	else{
		while(1){
			cout<<b1.top()<<"\n";
			b1.pop();
			if(b1.empty())
				break;
		}
		while(1){
			cout<<ai1.top()<<"\n";
			ai1.pop();
			if(ai1.empty())
				break;
		}
	}
}
return 0;
}