#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	unordered_set<int> s;
	for(int i=0;i<n;i++){
		if(s.find(arr[i])!=s.end()){
			return arr[i];
		}
		s.insert(arr[i]);
	}
}
