class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st = 0, ed = nums.size() - 1;
        int adsda = 0;
        vector<int> res(2, -1);

        // Find first occurrence
        while (st <= ed) {
            adsda = ed - (ed - st) / 2;

            if (nums[adsda] == target) {
                if (adsda == 0 || nums[adsda - 1] != target) {
                    res[0] = adsda;
                    break;
                } else {
                    ed = adsda - 1;
                }
            } else if (nums[adsda] < target) {
                st = adsda + 1;
            } else {
                ed = adsda - 1;
            }
        }

        st = 0;
        ed = nums.size() - 1;

        // Find last occurrence
        while (st <= ed) {
            adsda = ed - (ed - st) / 2;

            if (nums[adsda] == target) {
                if (adsda == nums.size() - 1 || nums[adsda + 1] != target) {
                    res[1] = adsda;
                    break;
                } else {
                    st = adsda + 1;
                }
            } else if (nums[adsda] < target) {
                st = adsda + 1;
            } else {
                ed = adsda - 1;
            }
        }

        return res;
    }
};