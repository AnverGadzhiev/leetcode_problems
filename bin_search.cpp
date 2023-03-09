#include "bin_search.h"

int Solution::search(const std::vector<int> &nums, const int &target) {
    int l = 0, r = nums.size() - 1;
    
    while (l <= r) {
        int mid = (l + r) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[mid] < target) {
            l = mid;
        } else {
            r = mid;
        }
    }
    return -1;
}