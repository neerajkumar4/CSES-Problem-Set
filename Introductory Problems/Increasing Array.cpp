#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	vector<long long> arr;
	for(long long i=0;i<n;i++){
		long long a;
		cin>>a;
		arr.push_back(a);
	}
	long long count=0;
	for(long long i=1;i<n;i++){
		if(arr[i]<arr[i-1]){
			while(arr[i]<arr[i-1]){
				arr[i]++;
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}
