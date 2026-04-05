class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st = 0, ed = nums.size() - 1;
        int mid = 0;
        vector<int> res(2, -1);

        // Find first occurrence
        while (st <= ed) {
            mid = ed - (ed - st) / 2;

            if (nums[mid] == target) {
                if (mid == 0 || nums[mid - 1] != target) {
                    res[0] = mid;
                    break;
                } else {
                    ed = mid - 1;
                }
            } else if (nums[mid] < target) {
                st = mid + 1;
            } else {
                ed = mid - 1;
            }
        }

        st = 0;
        ed = nums.size() - 1;

        // Find last occurrence
        while (st <= ed) {
            mid = ed - (ed - st) / 2;

            if (nums[mid] == target) {
                if (mid == nums.size() - 1 || nums[mid + 1] != target) {
                    res[1] = mid;
                    break;
                } else {
                    st = mid + 1;
                }
            } else if (nums[mid] < target) {
                st = mid + 1;
            } else {
                ed = mid - 1;
            }
        }

        return res;
    }
};