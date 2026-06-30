class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
  int l = 0;
        int r = numbers.size() - 1;
        while (l < r) {
            int sum = numbers[l] + numbers[r];
            if (sum < target) { // sum is too small, move left up
                l++;
            } else if (sum > target) { // sum is too large, move right down
                r--;
            } else {
                return {l + 1, r + 1}; // found, return immediately
            }
        }
        return {};
    }
};
