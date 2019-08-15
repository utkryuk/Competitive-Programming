#include<bits/stdc++.h> 
using namespace std; 
#define lli long long int
#define MOD 1000000007
// Using SieveOfEratosthenes to find smallest prime 
// factor of all the numbers. 
// For example, if N is 10, 
// s[2] = s[4] = s[6] = s[10] = 2 
// s[3] = s[9] = 3 
// s[5] = 5 
// s[7] = 7 
void sieveOfEratosthenes(int N, int s[]) 
{ 
    // Create a boolean array "prime[0..n]" and 
    // initialize all entries in it as false. 
    vector <bool> prime(N+1, false); 
  
    // Initializing smallest factor equal to 2 
    // for all the even numbers 
    for (int i=2; i<=N; i+=2) 
        s[i] = 2; 
  
    // For odd numbers less then equal to n 
    for (int i=3; i<=N; i+=2) 
    { 
        if (prime[i] == false) 
        { 
            // s(i) for a prime is the number itself 
            s[i] = i; 
  
            // For all multiples of current prime number 
            for (int j=i; j*i<=N; j+=2) 
            { 
                if (prime[i*j] == false) 
                { 
                    prime[i*j] = true; 
  
                    // i is the smallest prime factor for 
                    // number "i*j". 
                    s[i*j] = i; 
                } 
            } 
        } 
    } 
} 
  
// Function to generate prime factors and its power 
int generatePrimeFactors(int N) 
{ 
    // s[i] is going to store smallest prime factor 
    // of i. 
    int s[N+1]; 
  
    // Filling values in s[] using sieve 
    sieveOfEratosthenes(N, s); 
  
    //printf("Factor Power\n"); 
  
    int curr = s[N];  // Current prime factor of N 
    int cnt = 1;   // Power of current prime factor 
  
    // Printing prime factors and their powers 
    int mmax = 0;
    int num = 0;
    while (N > 1) 
    { 
        N /= s[N]; 
  
        // N is now N/s[N].  If new N als has smallest 
        // prime factor as curr, increment power 
        if (curr == s[N]) 
        { 
            cnt++; 
            continue; 
        } 
  
        //printf("%d\t%d\n", curr, cnt); 
        if(cnt>mmax){
            mmax = cnt;
            num = curr;
        }
  
        // Update current prime factor as s[N] and 
        // initializing count as 1. 
        curr = s[N]; 
        cnt = 1; 
    }
    return num;
}
lli binaryExponentiation(lli x,lli n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return binaryExponentiation(x*x,n/2);
    else                             //n is odd
        return x*binaryExponentiation(x*x,(n-1)/2);
}
int main(){
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("//home//ryuk//Desktop//cp//input.txt", "r", stdin);
    // for writing output to output.txt
    //this can be opted out if you want to print the output to the sublime console
    freopen("//home//ryuk//Desktop//cp//output.txt", "w", stdout);
    #endif
    lli n,l;
    cin>>n>>l;
    lli a[n];
    vector <int> v;
    v.push_back(2);
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=2;i<=l;i++){
        int x = generatePrimeFactors(i);
        //cout<<x<<" ";
        int chk = x%i;
        if(chk%2==0)
            v.push_back(1);
        else
            v.push_back(2);
    }
   // cout<<harm<<" "<<ben<<"\n";
    sort(a,a+n);
    //a[n-1] = ((a[n-1]%MOD)*(binaryExponentiation(2,ben)%MOD))%MOD;
    //cout<<a[n-1]<<"\n";
    for(int i=0,j=n-1;i<n;i++){
        if(a[i]!=0){
            if(v[i]==1){
                while(a[i])
            }
        }
        while(a[i]!=0){
            a[i] = a[i]/2;
            harm--;
          //  cout<<i+1<<"index and value="<<a[i]<<"\n";
            if(harm<=0)
                break;
        }
        if(harm==0)
            break;
    }
    lli k=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0)
            k++;
    }
    cout<<k<<"\n";
    for(int i=0;i<n;i++){
        if(a[i]!=0)
            cout<<a[i]<<" ";
    }
    return 0;
}