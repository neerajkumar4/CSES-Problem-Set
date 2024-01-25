#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> nums;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		nums.push_back(a);
	}
	vector<int> temp;
	temp.push_back(nums[0]);
	int l = 1;
	for(int i=1;i<n;i++){
		if(nums[i]>temp.back()){
			temp.push_back(nums[i]);
			l++;
		}else{
			int ind = lower_bound(temp.begin(),temp.end(),nums[i])-temp.begin();
			temp[ind] = nums[i];
		}
	}
	cout<<l;
//	vector<int> dp(n,1),hash(n);
//	int ans = 1;
//	int last = 0;
//	for(int ind =0;ind<n;ind++){
//		hash[ind]=ind;
//		for(int prev = 0;prev<ind;prev++){
//			if(nums[prev]<nums[ind] && 1+dp[prev]>dp[ind]){
//				dp[ind] = 1+dp[prev]; 
//				hash[ind] = prev;
//			}
//		}
//		if(dp[ind]>ans){
//			ans = dp[ind];
//			last = ind;
//		}
//	}
//	cout<<ans<<endl;
//	vector<int> temp;
//	temp.push_back(nums[last]);
//	while(hash[last]!=last){
//		last = hash[last];
//		temp.push_back(nums[last]);
//	}
//	reverse(temp.begin(),temp.end());
//	for(int i=0;i<ans;i++){
//		cout<<temp[i]<<" ";
//	}
	return 0;
}
