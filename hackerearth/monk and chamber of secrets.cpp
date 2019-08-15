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
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
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
//depth first search
void dfs(int u,vector <int> v[],vector <bool> &visited){
	//cout<<u<<"\n";
	visited[u] = true;
	for(int i=0;i<v[u].size();i++){
		if(visited[v[u][i]]==false){
			dfs(v[u][i],v,visited);
		}
	}
}
//breadth first search
queue <int> q;
void bfs(int u,vector<int> v[],vector <bool>&visited, vector <int>&distance){
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(int i = 0;i<v[x].size();i++){
			if(visited[v[x][i]]==false){
				q.push(v[x][i]);
				visited[v[x][i]]=true;
				distance[v[x][i]] = distance[x]+1;
			}
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
	fast;
	int n,x;
	cin>>n>>x;
	pair <int,int> v[n];
	queue <int> q;
	rep(i,n){
		int a;
		cin>>a;
		v[i].first = a;
		v[i].second = i;
		q.push(a);
	}
	int a[x];
	int k = 0;
	rep(i,x){
		int mmax = -1;
		if(q.size()>=x){
			for(int j=0;j<x;j++){
				a[k] = q.front();
				q.pop();
				k++;
				mmax = max(a[k],mmax);
				cout<<a[k-1]<<" ";
			}
			//cout<<mmax<<"\n";
			//rep(i,k) cout<<a[k]<<" ";
			cout<<endl<<"\n";
			for(int j=0;j<v.size();j++){
				if(v[j]==mmax){
					cout<<j+1<<" ";
					break;
				}
			}
			bool ans = false;
			for(int j=0;j<k;j++){
				if(a[j]==mmax&&ans==false){
					ans = true;
					continue;
				}
				else{
					if(a[j]>0){
						a[j]--;
						q.push(a[j]);
					}
					else if(a[j]==0){
						q.push(a[j]);
					}
				}
			}
		}
		else if(q.size()<x){			
			for(int j=0;j<q.size();j++){
				a[k] = q.front();
				q.pop();
				k++;
				mmax = max(a[k],mmax);
				cout<<a[k-1]<<" ";
			}
			for(int j=0;j<v.size();j++){
				if(v[j]==mmax){
					cout<<j+1<<" ";
					break;
				}
			}
			for(int j=0;j<k;j++){
				if(a[j]==mmax){
					continue;
				}
				else{
					if(a[j]>0){
						a[j]--;
						q.push(a[j]);
					}
					else if(a[j]==0){
						q.push(a[j]);
					}
				}
			}
		}
		k = 0;
	}
return 0;
}