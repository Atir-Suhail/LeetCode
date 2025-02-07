class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans=0;
        int n=gifts.size();
        while(k--){
            int maxi=INT_MIN;
            int index=-1;
            for(int i=0;i<gifts.size();i++){
                if(maxi<gifts[i]){
                    maxi=gifts[i];
                    index=i;
                }
            }
            gifts[index]=sqrt(gifts[index]);
        }
        for(int i=0;i<n;i++){
            ans+=gifts[i];
        }
        return ans;
    }
};