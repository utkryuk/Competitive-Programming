#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("//home//ryuk//Desktop//cp//input.txt", "r", stdin);
    // for writing output to output.txt
    //this can be opted out if you want to print the output to the sublime console
    freopen("//home//ryuk//Desktop//cp//output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    vector <string> v;
    string s="";
    v.push_back(s);
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            string s1;
            cin>>s1;
            s = s+s1;
            //cout<<s<<"\n";
            v.push_back(s);
        }
        else if(n==2){
            int k;
            cin>>k;
/*            for(int i=s.length()-1;i>=n-k;i--){
                s.erase(i);
            }*/
            s.erase(s.end()-k,s.end());
            v.push_back(s);
        }
        else if(n==3){
            int k;
            cin>>k;
            cout<<s[k-1]<<"\n";
        }
        else{
        	//cout<<v.size()<<"\n";
            s = v[v.size()-2];
            v.erase(v.end()-1);
        }
    }
    return 0;
}