#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int res = 0;
	for(int i=0;i<n-1;i++){
		int a;
		cin>>a;
		res = res^a^(i+1);
	}
	res = res^n;
	cout<<res;
	return 0;
}