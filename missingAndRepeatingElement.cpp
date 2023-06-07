#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	vector<int> hash(n+1,0);
	for(int i=0;i<n;i++){
		hash[arr[i]]++;
	}
	int missing = -1;
	for(int i=1;i<n+1;i++){
		if(hash[i]==0){
			missing = i;
			break;
		}
	}
	int repeated = -1;
	for(int i=0;i<n;i++){
		if(hash[i]==2){
			repeated = i;
			break;
		}
	}
	return make_pair(missing,repeated);
	
}
