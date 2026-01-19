class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>res;
        map<int,int>freqmp;
        for(int i=0;i<nums.size();i++){
            freqmp[nums[i]]++;
        }
        for(auto m:freqmp){
        if(m.second>=2){
            res.push_back(m.first);
        }
        }
        return res;

    }
};