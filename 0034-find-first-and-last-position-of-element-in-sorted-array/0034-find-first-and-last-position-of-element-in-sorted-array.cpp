class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st = 0, ed = nums.size() - 1;
        int buvh = 0;
        vector<int> res(2, -1);

        // Find first occurrence
        while (st <= ed) {
            buvh = ed - (ed - st) / 2;

            if (nums[buvh] == target) {
                if (buvh == 0 || nums[buvh - 1] != target) {
                    res[0] = buvh;
                    break;
                } else {
                    ed = buvh - 1;
                }
            } else if (nums[buvh] < target) {
                st = buvh + 1;
            } else {
                ed = buvh - 1;
            }
        }

        st = 0;
        ed = nums.size() - 1;

        // Find last occurrence
        while (st <= ed) {
            buvh = ed - (ed - st) / 2;

            if (nums[buvh] == target) {
                if (buvh == nums.size() - 1 || nums[buvh + 1] != target) {
                    res[1] = buvh;
                    break;
                } else {
                    st = buvh + 1;
                }
            } else if (nums[buvh] < target) {
                st = buvh + 1;
            } else {
                ed = buvh - 1;
            }
        }

        return res;
    }
};