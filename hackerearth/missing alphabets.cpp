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
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
//comparator function for desc order sort
bool comp(ll a,ll b){
    	return a>b;
}
map <char,int> mp;
bool sort_dict(string a,string b){
	int len = min(a.length(),b.length());
	for(int i=0;i<len;i++){
		if(mp[a[i]]>mp[b[i]])
			return false;
		else if(mp[a[i]]<mp[b[i]])
			return true;
		else if(mp[a[i]]==mp[b[i]])
			continue;
	}
	 //if equal strings upto maximum matched length then whose string length is min that comes first.
	if(a.length()>b.length()){
		return false;
	}
	else
		return true;
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
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++){
			mp[s[i]]=i+1;
		}
		/*for(auto it=mp.begin();it!=mp.end();it++)
			cout<<it->second<<" ";*/
		int n;
		cin>>n;
		vector <string> v;
		rep(i,n){
			string t;
			cin>>t;
			v.push_back(t);
		}
		sort(v.begin(),v.end(),sort_dict);
		for(auto it:v)
			cout<<it<<"\n";
		mp.clear();
	}
return 0;
}