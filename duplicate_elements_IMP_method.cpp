class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }
        return false;
    }
};



/*The default std::sort function in the C++ Standard Library typically uses an implementation of the introsort algorithm. Introsort is a hybrid sorting algorithm that combines quicksort, heapsort, and insertion sort.*/

//this question could be solved using two for loops for finding the duplicate elements
//however it has more time complexity that the method that i have used above
