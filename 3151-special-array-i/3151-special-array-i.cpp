class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
       int n=nums.size();
       if(n==1){
        return true;
       }
       int i=0;
       int j=1;
       while(n>j){
        if((nums[i]%2==0 && nums[j]%2!=0 || nums[i]%2!=0 && nums[j]%2==0)){
            i++;
            j++;
        }
        else{
            return false;
        }
       } 
       return true;
    }
};