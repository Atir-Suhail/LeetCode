class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int  res=0;
        int n=nums.size()/2;
        map<int,int>freqmp;
        for(int i=0;i<nums.size();i++){
              freqmp[nums[i]]++;
        }
        for(auto m:freqmp){
            if(m.second>n){
               res=m.first;
               
               cout<<m.first<<" "<<m.second<<endl;
            }
        }
        return res;
    }
};