class Solution {
public:
    //time:O(max(a.size(), b.size()));
    //space:O(max(a.size(), b.size()));
    string addBinary(string a, string b) {
        string res = "";
        int carry = 0;
        int a_index = a.size() - 1, b_index = b.size() - 1;    
        while(a_index >= 0 || b_index >= 0) {
            int num1 = a_index >= 0 ? a[a_index--] - '0' : 0;
            int num2 = b_index >= 0 ? b[b_index--] - '0' : 0;
            
            int sum = num1 + num2 + carry;
            res = to_string(sum % 2) + res;
            carry = sum / 2;
        } 
        return carry == 1 ? "1" + res : res;
    }
};
