#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector <int> v[n];
    int x,y,a;
    int lastAnswer = 0;
    for(int i=0;i<q;i++){
        cin>>a>>x>>y;
        if(a==1){
            //cout<<(x^lastAnswer)%n<<" "<<y<<"\n";
            v[(x^lastAnswer)%n].push_back(y);
            //cout<<v[(x ^ lastAnswer) % n].size()<<" ";
        }
        else{
            int ab = (x ^ lastAnswer) % n;
            //cout << ab << "\n";
            int z = v[ab].size()-1;
            lastAnswer = v[ab][z];
            cout << lastAnswer << "\n";
        }
    }
}
