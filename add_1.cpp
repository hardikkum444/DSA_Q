//simple solution
//taught me the optimised use of % and /
//also taught me to use stl to make things more cleaner, easier and optimized

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();

        int carry = 1;

        for(int i =n-1;i>=0;i--)
        {
            int sum = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum/10;
        }

        if(carry>0)
        {
            digits.insert(digits.begin(),carry);
        }
    return digits;
    }

};
