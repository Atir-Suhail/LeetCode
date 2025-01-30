class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt=0;
        while(x>0||y>0){
            if(y%2!=x%2){
                cnt++;
            }
            y=y/2;
            x=x/2;
        }
        return cnt;
    }
};