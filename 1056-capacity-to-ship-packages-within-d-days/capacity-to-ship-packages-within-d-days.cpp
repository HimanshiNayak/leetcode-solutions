
 class Solution {
public:
    int noofdays(vector<int>& weights, int maxwt) {
        int n = weights.size();
        int day = 1, load = 0;
        for (int i=0;i<n;i++ ) {
            if (load + weights[i] <= maxwt) {
                load += weights[i]; // Accumulate weight for the current day
            } else {
                day++;          // Start a new day
                load = weights[i];  // Reset load for the new day
            }
        }
        return day;
    }

    
    int shipWithinDays(vector<int>& weights, int days) {
        if (weights.empty()) return 0; // empty weights array

        int low = *max_element(weights.begin(), weights.end()); // Minimum capacity
        int high = accumulate(weights.begin(), weights.end(), 0); // Maximum capacity
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int neededDays = noofdays(weights, mid);

            if (neededDays <= days) { // Can ship within given days
                ans = mid;  // Update answer
                high = mid - 1; // Try for a smaller capacity
            } else {
                low = mid + 1; // Increase capacity
            }
        }
        return ans;
    }
};
