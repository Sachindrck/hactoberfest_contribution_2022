

class Solution{

    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int res=arr[0];
        int tempsum=arr[0];
        for(int i=1;i<n;i++)
        {
            tempsum=Math.max(arr[i],arr[i]+tempsum);
            res=Math.max(res,tempsum);
        }
        return res;
    }
    
}