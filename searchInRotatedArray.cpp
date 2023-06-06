int binary(int arr[],int target,int start,int end){
        while(start<=end){
            int mid = start+(end-start)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]<target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return -1;
    }
int minIndex( int arr[], int target, int n){
        int start = 0;
        int end = n-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            int next = (mid+1)%n;
            int prev = (mid+n-1)%n;
            if(arr[mid]<arr[next] && arr[mid]<arr[prev]){
                return mid;
            }
            else if(arr[mid]<arr[end]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return 0;
    }
int search(int* arr, int n, int target) {
        int min = minIndex(arr,target,n);
        int leftSearch = binary(arr,target,0,min-1);
        int rightSearch = binary(arr,target,min,n-1);
        if(leftSearch!=-1){
            return leftSearch;
        }
        if(rightSearch!=-1){
            return rightSearch;
        }
        return -1;
}
