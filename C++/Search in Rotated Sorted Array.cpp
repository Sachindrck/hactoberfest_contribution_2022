class Solution {
public:
     int search(vector<int>& nums, int target) {
        int b = 0;
        int l = nums.size()-1;
        return Helper(nums, target, b,l);
    }
     int Helper(vector<int>& nums, int target,int i,int j){
        int mid = (i+j)/2;
        if(i>j){
            return -1;
        }
        if(nums[mid]==target){
           return mid;
        }
        if(nums[i]<=nums[mid]){
            if(target>=nums[i] and target<=nums[mid]){
                return Helper(nums,target,i,mid-1);
            }
            else{
               return  Helper(nums,target,mid+1,j);
            }
        }
        if(target>nums[mid] and target<=nums[j]){
           return Helper(nums,target,mid+1,j);
        }
        return   Helper(nums,target,i,mid);
    }
};
