#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> vec;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		vec.push_back(a);
	}
	sort(vec.begin(),vec.end());
	int i=0,j=1,count=1;
	while(j<n){
		if(vec[i]==vec[j]){
			j++;
		}else{
			count++;
			i=j;
			j++;
		}
	}
	if(n==0){
		cout<<0;
	}else{
		cout<<count;
	}
	return 0;
}
