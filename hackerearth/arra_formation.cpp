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
    long n;
    cin>>n;
    long a[n];
    stack <int> s;
    queue <int> q;
    long N = 1000001;
    long prime[N];
    for(long i=0;i<N;i++){
    	prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(long i=2;i*i<=N;i++){
        if(prime[i]==1){
            for(long j= i*i;j<=N;j+=i)
                prime[i]=0;
        }
    }
    for(long i=0;i<n;i++){
        cin>>a[i];
        if(prime[a[i]]==0)
            s.push(a[i]);
        else if(prime[a[i]]==1)
            q.push(a[i]);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}