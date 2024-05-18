#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int found = 0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==x){
				cout<<i+1<<" "<<j+1<<endl;
				found = 1;
				break;
			}
		}
	}
	if(found == 0){
		cout<<"IMPOSSIBLE"<<endl;
	}
	return 0;
}
