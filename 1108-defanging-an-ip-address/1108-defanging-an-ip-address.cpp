class Solution {
public:
    string defangIPaddr(string address) {
        int start=0;
        int end=address.size()-1;
        string ans;
        while(start<=end){
            if(address[start]=='.')
                ans=ans+"[.]";

            
            else
                ans+=address[start];
            
            start++;
        }
        return ans;
    }
    
};