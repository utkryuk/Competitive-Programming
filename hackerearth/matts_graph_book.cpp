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
void dfs(int u,vector <int> v[],vector <bool> &visited){
		//cout<<u<<"\n";
		visited[u] = true;
		for(int i=0;i<v[u].size();i++){
			if(visited[v[u][i]]==false){
				dfs(v[u][i],v,visited);
		}
	}
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
	int n;
	cin>>n;
	vector <int> v[n];
	int k;
	cin>>k;
	int x,y;
	for(int i=0;i<k;i++){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int vertex_del;
	cin>>vertex_del;
/*	for(int i=0;i<v[vertex_del].size();i++){
	 	v[vertex_del][i] = -1;
	}*/
	vector <bool> visited(n,false);
	v[vertex_del].clear();
	visited[vertex_del] = 1;
	int connectedComponents = 0;
	for(int i=0;i<n;i++){
		if(visited[i]==false){
			dfs(i,v,visited);
			connectedComponents++;
		}
	}
	if(connectedComponents==1)
		cout<<"Connected\n";
	else{
		cout<<"Not Connected\n";
	}
/*	for(int i=0;i<n;i++){
		cout<<i<<" ";
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j]<<" ";
		}
		cout<<"\n";
	}*/
return 0;
}