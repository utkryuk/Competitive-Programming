// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int a[26]={0},;
//     string s;
//     cin>>s;
//     int b[s.length()];
//     for(int i=0;i<s.length();i++){
//         a[(int)s[i]-97]++;
//         b[i] = 
//     }
//     char ans[100];
//     int j=0,sum=0;
//     for(int i=0;i<26;i++){
//         if(a[i]%2){
//             ans[j] = (char)(i+97);
//             j++;
//             sum++;
//         }
//     }
//     if(sum==0)
//         cout<<"Empty String\n";
//     else{
//         for(int i=0;i<j;i++){
//             cout<<ans[i];
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

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
    stack <int> st;
    for(int i=0;i<s.length();i++){
        if(!st.empty()&&st.top()==s[i]){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    for (int i = 0; i<st.size(); ++i){
        char q = st.top();
        st.pop();
        cout<<q;
    }
    if(!st.size())
        cout<<"Empty String\n";
    else{
        char ans[st.size()];
        for(int i=st.size()-1;i>=0;i--){
            ans[i] = st.top();
            st.pop();
        }
        for(int i=0;i<st.size();i++)
            cout<<ans[i];
    }
    return 0;
}
