class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int n = nums.size();
        int k =0;

        for(int i = 0;i<n;i++)
        {
            if(nums[i]!=val)
            {
                nums[k] = nums[i];
                k++;
            }
            else
            {
                
            }
        }
        return k;
        
    }
};

//basically, the ans is very easy, made the code myslef, it was in my brain the entire timr
//maybe decrease execution time of my brain, to solve in less time!