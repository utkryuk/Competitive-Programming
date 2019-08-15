#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int c =0;
void merge(int a[],int l,int mid, int r){
    int x = l, y = mid+1;
    int v[r-l+1], z = 0;
    rep1(i,l,r){
        if(x>mid){
            v[z++] = a[y++];
        }
        else if(y>r){
            v[z++] = a[x++];
        }
        else if(a[x]<a[y]){
            v[z++] = a[x++];
        }
        else if(a[x]>a[y]){
            c+= mid - x+1;
            v[z++] = a[y++];
        }
        else if(a[x]==a[y]){
        	v[z++] = a[y++];
        }
    }
    rep(i,z){
        a[l++] = v[i];
    }
}
void mergesort(int a[],int l,int r){
    if(l<r){
        int mid = (r-l)/2 + l;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("//home//ryuk//Desktop//cp//input.txt", "r", stdin);
    // for writing output to output.txt
    //this can be opted out if you want to print the output to the sublime console
    freopen("//home//ryuk//Desktop//cp//output.txt", "w", stdout);
	#endif
    int n;
    cin>>n;
    int a[n];
    rep(i,n) cin>>a[i];
    mergesort(a,0,n-1);
    rep(i,n) cout<<a[i]<<" ";
    cout<<c<<"\n";
    return 0;
}