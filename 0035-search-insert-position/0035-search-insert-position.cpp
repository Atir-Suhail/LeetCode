class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans =n;
        int start=0;
        int end=n-1;
        while(start<=end){
            int mid=start + (end-start)/2;
           
            if (nums[mid]>=target){
                ans=mid;
                end=mid-1;
            }
             else{
                start=mid+1;
            }
            
        }
        return ans;
    }
};