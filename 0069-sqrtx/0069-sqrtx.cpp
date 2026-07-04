class Solution {
public:
    int mySqrt(int x) {
        // For special cases when x is 0 or 1, return x.
        if (x == 0 || x == 1)
            return x;
        
        // Initialize the search range for the square root.
        int start = 1;
        int endless = x;
        int mid = -1;
        
        // Perform binary search to find the square root of x.
        while (start <= endless) {
            // Calculate the middle point using "start + (endless - start) / 2" to avoid integer overflow.
            mid = start + (endless - start) / 2;
            
            // Convert mid to long to handle large values without overflow.
            long long square = static_cast<long long>(mid) * mid;
            
            // If the square of the middle value is greater than x, move the "endless" to the left (mid - 1).
            if (square > x)
                endless = mid - 1;
            else if (square == x)
                // If the square of the middle value is equal to x, we found the square root.
                return mid;
            else
                // If the square of the middle value is less than x, move the "start" to the right (mid + 1).
                start = mid + 1;
        }
        
        // The loop ends when "start" becomes greater than "endless", and "endless" is the integer value of the square root.
        // However, since we might have been using integer division in the calculations,
        // we round down the value of "endless" to the nearest integer to get the correct square root.
        return static_cast<int>(std::round(endless));
    }
};