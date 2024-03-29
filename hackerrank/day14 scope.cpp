#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    Difference(vector <int> elements){
        this->elements = elements;
    }
    void computeDifference(){
        int mmin = 101,mmax = 0;
        for(int i=0;i<elements.size();i++){
            mmin = min(elements[i],mmin);
            mmax= max(elements[i],mmax);
        }
        maximumDifference = mmax - mmin;
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}