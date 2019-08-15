#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
*    Name: printArray
*    Print each element of the generic vector on a new line. Do not return anything.
*    @param A generic vector
**/

template <typename T>
void printArray(vector <T> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"\n";
    }
}

int main() {
	int n;
	
	cin >> n;
	vector<int> int_vector(n);
	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		int_vector[i] = value;
	}
	
	cin >> n;
	vector<string> string_vector(n);
	for (int i = 0; i < n; i++) {
		string value;
		cin >> value;
		string_vector[i] = value;
	}

	printArray<int>(int_vector);
	printArray<string>(string_vector);

	return 0;
}


		//vector <lli> ae;
		//vector <lli> ao;
		int a[n];
		vector <lli> be;
		vector <lli> bo;
		rep(i,n){
			cin>>a[i];
			//if(x%2==0)
			//	ae.push_back(x);
			//else
			//	ao.push_back(x);
		}
		rep(i,n){
			lli x;
			cin>>x;
			if(x%2==0)
				be.push_back(x);
			else
				bo.push_back(x);
		}
		sort(a,a+n);
		sort(be.begin(),be.end());
		sort(bo.begin(),bo.end());
		for(auto it=ae.begin();it!=ae.end();it++){
			cout<<*it<<"\n";

		}