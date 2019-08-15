/******************************************
* AUTHOR : UTKARSH GUPTA *
* NICK : not_a_cp_coder *
* INSTITUTION : BIT MESRA *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define N 100005
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

int main() {
//ios_base& scientific (ios_base& str);

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("//home//ryuk//Desktop//cp//input.txt", "r", stdin);
    // for writing output to output.txt
    //this can be opted out if you want to print the output to the sublime console
    freopen("//home//ryuk//Desktop//cp//output.txt", "w", stdout);
	#endif
    ll n,q;
    int VMAX = 100001;
    scanf("%lld",&n);
    ll a[n];
    ll b[VMAX];
    for(ll i=0;i<n;i++){
        scanf("%lld",&a[i]);
        b[a[i]]++;
    }
    scanf("%lld",&q);
    ll que;
    while(q--){
        scanf("%lld",&que);
        if (b[que]>0)
            printf("%lld\n",b[que]);
        else
            printf("NOT PRESENT\n");
    }
return 0;
}

/******************************************
* AUTHOR : UTKARSH GUPTA *
* NICK : not_a_cp_coder *
* INSTITUTION : BIT MESRA *
******************************************/
/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define N 100005
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
 
int main() {
    ll n,q;
    scanf("%lld",&n);
    ll a[n];
    ll b[n];
    memset(b,0,sizeof(b));
    for(ll i=0;i<n;i++){
        scanf("%lld",&a[i]);
        b[a[i]]++;
    }
    scanf("%lld",&q);
    ll que;
    while(q--){
        scanf("%lld",&que);
        if (b[que]>0)
            printf("%lld\n",b[que]);
        else
            printf("NOT PRESENT\n");
    }
return 0;
}
*/