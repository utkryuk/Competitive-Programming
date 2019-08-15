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
    string s;
    cin>>s;
    int n = s.length();
    int a[n];
    int cnt= 0;
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++){
        if(((int)s[i]-48)%2==0){
            cnt++;
        }
    }
    for(int i=0;i<n;i++){
        a[i] = cnt;
      //  cout<<a[i]<<" ";
    }
    //cout<<"\n";
    for(int i=1;i<s.length();i++){
        if(((int)(s[i])-48)%2==0){
        	if(((int)s[i-1]-48)%2==0){
        		a[i]= a[i-1];
        		a[i]--;
        	}
        	else{
            //a[i] += a[i-1];
            //a[i] += 1;
	            a[i] = a[i-1];
	        }
        }
        else{
        	if(((int)s[i-1]-48)%2==0){
        		a[i] = a[i-1];
        		a[i]--;
        	}
        	else{
            a[i] = a[i-1];
            //a[i] +=a[i-1];
            //a[i] = cnt-a[i];
        	}
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}