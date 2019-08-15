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
int max (int a, int b) { return a > b ? a : b;}
int min (int a, int b) { return a < b ? a : b;}
ll gcd(ll a, ll b){ return (b==0)? a : gcd(b, a%b);}
int main(){
	
	#ifndef ONLINE_JUDGE
    
    // for getting input from input.txt
    freopen("C:\\Users\\Ezone\\Desktop\\cp\\input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("C:\\Users\\Ezone\\Desktop\\cp\\output.txt", "w", stdout);
	#endif
    int t;
    cin>>t;
    while(t--){
    	int d;
    	cin>>d;
    	string s;
    	cin>>s;
    	float p=0,a=0;
    	for(int i=0;i<d;i++){
    		if(s[i]=='P')
    			p++;
    		else
    			a++;
    	}
    	float actual_p = p;
    	float actual_d = d;
    	int att = (int)((actual_p/actual_d)*100);
    	int ans = 0;
    	//cout<<p<<" "<<a<<" ";
    	//cout<<att<<"\n";
		//double eps = 0.00000000001; 
    	//float x = att;
    	//cout<<x<<" ";
    	//float diff = abs(x -att);
    	if(att>=75){
    		ans = 1;
    	}
    	else{
    		if(d>4){
    			for(int i=2;i<=d-3;i++){
    				if((s[i-1]=='P'||s[i-2]=='P')&&(s[i+1]=='P'||s[i+2]=='P')&&(s[i]=='A')){
    					//s[i]='P';
    					actual_p++;
    					//actual_d--;
    					att = (int)((actual_p/actual_d)*100);
    					//cout<<att<<"\t";
    					if(att>=75){
    						ans = 1;
    						break;
    					}
    				}
    			}
    		}
    		else{
    			if(att>=75){
    				ans = 1;
    			}
    			else
    				ans = 0;
    		}
    	}
    	//cout<<"\n";
    	if(ans>0){
    		//cout<<"p="<<p<<" "<<"actual_p="<<actual_p<<"\n";
    		cout<<actual_p-p<<"\n";
    	}
    	else
    		cout<<"-1\n";
    }
	return 0;
}