#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	vector<int> ans;
	int start1 = 0;
	int start2 = 0;
	while(arr1[start1]!=0 && start2<n ){
		if(arr1[start1]<=arr2[start2]){
			ans.push_back(arr1[start1]);
			start1++;
		}
		else{
			ans.push_back(arr2[start2]);
			start2++;
		}
	}
	while(start1<m){
		if(arr1[start1]==0){
			break;
		}
		ans.push_back(arr1[start1]);
		start1++;
	}
	while(start2<n){
		ans.push_back(arr2[start2]);
		start2++;
	}
	return ans;
}
