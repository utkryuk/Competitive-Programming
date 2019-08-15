

    #include<bits/stdc++.h>
    #define loop(i,n) for(int i=0;i<n;i++)
    #define loop1(i,n) for(int i=1;i<=n;i++)
    #define MAX 100005
    #define INF 1e9
    #define pb push_back
    #define pii pair<int,int>
    #define ll long long
    #define lc 2*node+1
    #define rc 2*node+2
    #define PRINT(z) loop(e,z.size())cout<<z[e]<<" "
    #define nw cout<<endl
    using namespace std;
     
     
     
    int main(){
        //freopen("A-large.in", "r", stdin);
        //freopen("A-large.out", "w", stdout);
     #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("//home//ryuk//Desktop//cp//input.txt", "r", stdin);
    // for writing output to output.txt
    //this can be opted out if you want to print the output to the sublime console
    freopen("//home//ryuk//Desktop//cp//output.txt", "w", stdout);
    #endif
        int T,ANS=1e9;T=1;
        vector<int> A;
        loop(t,T){
            vector<int> a,b;
            map<vector<int> ,bool> done;
            map<vector<int> ,int> dp;
            int n,x;cin>>n;A.pb(0);
            loop(i,n){
                cin>>x;
                A.pb(x);
            }
            cout<<"A=";
            for(auto it=A.begin();it!=A.end();it++){
                cout<<*it<<" ";
            }
            cout<<"\n";
            a=A;sort(A.begin(),A.end());
            cout<<"A changed=";
            for(auto it=A.begin();it!=A.end();it++){
                cout<<*it<<" ";
            }
            cout<<"\n";
            cout<<"a=";
            for(auto it=a.begin();it!=a.end();it++){
                cout<<*it<<" ";
            }
            cout<<"\n";
            queue<vector<int> > q;
            q.push(A);
            cout<<q.front()[3];
            cout<<"\n";

            done[A]=1;dp[A]=0;int ans=-1;
            if(a==A){
                cout<<0<<endl;continue;
            }
            int it = 0;
            while(!q.empty()){
                cout<<"it="<<it<<"\n";
                it++;
                vector<int> x=q.front(),y;q.pop();y.pb(0);
                cout<<x[2]<<" ";
                //cout<<"IN front : ";PRINT(x);nw;
                //cout<<"has child "<<endl;

                for(int i=2;i<x.size();i++){y.clear();y.pb(0);
                    for(int j=1;j<=i;j++){
                        y.pb(x[i-j+1]);
                    }
                    for(int j=i+1;j<x.size();j++)
                        y.pb(x[j]);
                    /// created a reversed vector
                  //  PRINT(y);nw;
                    if(!done[y]){
                        dp[y]=dp[x]+1;
                        q.push(y);
                        done[y]=1;
                        if(y==a){
                            ans=dp[y];break;
                        }
                    //    cout<<" is never done ! so pushed! "<<endl;
                    }
                    //cout<<"done already "<<endl;
                }if(ans!=-1)break;
            }
            cout<<ans<<endl;
        }
    }
     
