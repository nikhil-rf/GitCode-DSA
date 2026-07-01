# 1. Two Sum

![Accepted](https://img.shields.io/badge/Status-Accepted-brightgreen?style=flat-square)  ![Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=flat-square)

| | |
|---|---|
| **Problem** | [1. Two Sum](https://leetcode.com/problems/two-sum/) |
| **Language** | cpp |
| **Verdict** | Accepted |
| **Runtime** | 2 ms |
| **Memory** | 15 MB |
| **Difficulty** | Easy |
| **Topics** | `Array` `Hash Table` |
| **Date** | July 1, 2026 |

## Problem Statement

> See [problem.md](problem.md) for the full problem description, or [view on LeetCode](https://leetcode.com/problems/two-sum/).

## Solution

The solution is in [`solution.cpp`](solution.cpp).

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int num = nums[i];
            int moreNeeded = target - num;
            if(mpp.find(moreNeeded) != mpp.end()){
                return {mpp[moreNeeded], i};
            }
            mpp[num] = i;
        }
        return{-1, -1};
    }
};
```

## Approach

> _Write your approach, algorithm, and complexity analysis here._

### Time Complexity

- 

### Space Complexity

- 

## Notes

- 

---
*Auto-synced on July 1, 2026 by [LeetCode GitHub Sync](https://github.com)*