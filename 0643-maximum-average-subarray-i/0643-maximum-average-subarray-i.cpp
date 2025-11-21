
class Solution {
public:
    double findMaxAverage(std::vector<int>& nums, int k) {
        // Calculate the sum of the first 'k' elements
        long current_sum = 0;
        for (int i = 0; i < k; ++i) {
            current_sum += nums[i];
        }
        
        long max_sum = current_sum;
        
        // Slide the window across the rest of the array
        // Start from index k and go up to the end of the array
        for (int i = k; i < nums.size(); ++i) {
            // Add the new element (nums[i]) and remove the element leaving the window (nums[i - k])
            current_sum += nums[i] - nums[i - k];
            // Update the maximum sum found so far
            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
        }
        
        // Return the maximum average (cast one operand to double for floating-point division)
        return static_cast<double>(max_sum) / k;
    }
};