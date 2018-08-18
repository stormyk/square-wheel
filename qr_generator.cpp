#include <vector>
#include <iomanip>
#include <iostream>

using namespace std;


vector <size_t> primes(size_t max){
	vector <size_t> result;
	result.resize(max+1);
	for(size_t i=0;i<max;i++){
		result[i]=i;
	}
	for (size_t i=2;i*i<=max;i++){
		for(size_t j=max/i;j>i;j--){
			result[i*j]=0;
		}
	}
	return result;
}



int main(){

	vector <size_t> x=primes(100000000);
	for(size_t i=0;i<x.size();i++){
		if (x[i]<1) continue;
		cout << x[i] << endl;
	}
}
