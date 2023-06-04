#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long sum =0;
    long long maxSum = INT_MIN;
    if(n==0){
        return 0;
    }
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
        maxSum = max(maxSum,sum);
        if(sum<0){
            sum=0;
        }
    }
    if(maxSum<0){
        return 0;
    }
    return maxSum;
}
