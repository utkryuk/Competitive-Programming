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
    while(t--){
        char a[4][4];
        int i,j;
        for(i=0;i<4;i++)
            for(j=0;j<4;j++)
                cin>>a[i][j];
        bool ans= false;
        for(i=0;i<4;i++)
            for(j=0;j<2;j++){
                if(a[i][j]=='x'&&a[i][j+1]=='.'&&a[i][j+2]=='x')
                    ans = true;
                if(a[i][j]=='.'&&a[i][j+1]=='x'&&a[i][j+2]=='x')
                    ans = true;
                if(a[i][j]=='x'&&a[i][j+1]=='x'&&a[i][j+2]=='.')
                    ans = true;
            }
        for(i=0;i<2;i++)
            for(j=0;j<4;j++){
                if(a[i][j]=='x'&&a[i+1][j]=='.'&&a[i+2][j]=='x')
                    ans = true;
                if(a[i][j]=='.'&&a[i+1][j]=='x'&&a[i+2][j]=='x')
                    ans = true;
                if(a[i][j]=='x'&&a[i+1][j]=='x'&&a[i+2][j]=='.')
                    ans = true;
            }
        for(i=0;i<2;i++)
            for(j=0;j<2;j++){
                if(a[i][j]=='x'&&a[i+1][j+1]=='.'&&a[i+2][j+2]=='x')
                    ans = true;
                if(a[i][j]=='.'&&a[i+1][j+1]=='x'&&a[i+2][j+2]=='x')
                    ans = true;
                if(a[i][j]=='x'&&a[i+1][j+1]=='x'&&a[i+2][j+2]=='.')
                    ans = true;
            }
        for(i=0;i<2;i++)
            for(j=2;j<4;j++){
                if(a[i][j]=='x'&&a[i+1][j-1]=='.'&&a[i+2][j-2]=='x')
                    ans = true;
                if(a[i][j]=='.'&&a[i+1][j-1]=='x'&&a[i+2][j-2]=='x')
                    ans = true;
                if(a[i][j]=='x'&&a[i+1][j-1]=='x'&&a[i+2][j-2]=='.')
                    ans = true;
            }
        if(ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}