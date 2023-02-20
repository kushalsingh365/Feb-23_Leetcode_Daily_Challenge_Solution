class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size();
        int mid = 0;
        while (l != r) {
            mid = (l + r)/2;
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                l = mid + 1;
            }
            else {
                r = mid;
            }
        }
        return l;
    }
};
