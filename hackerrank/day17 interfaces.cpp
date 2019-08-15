#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};
class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        int sum =0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if(n/i==i)
                    sum+=n/i;
                else
                    sum+=n/i+i;
            }
        }
        return sum;
        return 0;
    }
};

int main(){