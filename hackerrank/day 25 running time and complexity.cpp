#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = 0;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                ans = 1;
                break;
            }
        }
        if(ans)
        cout<<"Not prime\n";
        else
        cout<<"Prime\n";
    }  
    return 0;
}
