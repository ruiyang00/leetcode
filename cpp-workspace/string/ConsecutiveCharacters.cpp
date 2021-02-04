class Solution {
public:
    //time:O(n)
    //space:O(1)
    int maxPower(string s) {
        int res = 1;
        int running = 1;
        for(int i = 1; i < s.size(); ++i) {
            if(s[i] == s[i-1]){
                ++running;
                res = max(res, running);
            } else {
                running = 1;
            }
        }    
        return res;
    }
};
