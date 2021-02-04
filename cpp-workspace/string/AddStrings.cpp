class Solution {
public:
    //time:O(max(num1.size(), num2.size()))
    //space:O(max(num1.size(), num2.size()))
    string addStrings(string num1, string num2) {
        string res = "";
        int num1_index = num1.size() - 1, num2_index = num2.size() - 1, carry = 0;    
        while(num1_index >= 0 || num2_index >= 0) {
            cout<<num1_index<<'\n';
            cout<<num2_index<<'\n';
            int p = num1_index >= 0 ? num1[num1_index--] - '0' : 0;
            int q = num2_index >= 0 ? num2[num2_index--] - '0' : 0;
            
            int sum = p + q + carry;
            res = to_string(sum % 10) + res;
            carry = sum / 10;
        }    
        return carry != 0 ? to_string(carry) + res : res;
    }
};
