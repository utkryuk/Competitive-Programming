#include <bits/stdc++.h>

using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("//home//ryuk//Desktop//cp//input.txt", "r", stdin);
    // for writing output to output.txt
    //this can be opted out if you want to print the output to the sublime console
    freopen("//home//ryuk//Desktop//cp//output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++)
        cin>>str[i];
    //char s[]="hackerearth";
    int a[7];
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++){
        if(str[i]=='h')
            a[0]++;
        if(str[i]=='a')
            a[1]++;
        if(str[i]=='c')
            a[2]++;
        if(str[i]=='k')
            a[3]++;
        if(str[i]=='e')
            a[4]++;
        if(str[i]=='r')
            a[5]++;
        if(str[i]=='t')
            a[6]++;
    }
    a[0]= a[0]/2;
    a[1] = a[1]/2;
    a[4] = a[4]/2;
    a[5] = a[5]/2;
    // for(int i=0;i<6;i++)
    // cout<<a[i]<<" ";
    int min1 = INT_MAX;
    for(int i=0;i<6;i++){
        min1 = min(min1,a[i]);
        //cout<<min1<<" ";
    }
    if(min1==0)
        cout<<"0";
    else
        cout<<min1;
    return 0;
}
