# 2. Add Two Numbers

![Accepted](https://img.shields.io/badge/Status-Accepted-brightgreen?style=flat-square)  ![Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=flat-square)

| | |
|---|---|
| **Problem** | [2. Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) |
| **Language** | cpp |
| **Verdict** | Accepted |
| **Runtime** | 4 ms |
| **Memory** | 77.1 MB |
| **Difficulty** | Medium |
| **Topics** | `Linked List` `Math` `Recursion` |
| **Date** | July 1, 2026 |

## Problem Statement

> See [problem.md](problem.md) for the full problem description, or [view on LeetCode](https://leetcode.com/problems/add-two-numbers/).

## Solution

The solution is in [`solution.cpp`](solution.cpp).

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* tail = dummyHead;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int digit1 = (l1 != nullptr) ? l1->val : 0;
            int digit2 = (l2 != nullptr) ? l2->val : 0;

            int sum = digit1 + digit2 + carry;
            int digit = sum % 10;
            carry = sum / 10;

            ListNode* newNode = new ListNode(digit);
            tail->next = newNode;
            tail = tail->next;

            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }

        ListNode* result = dummyHead->next;
        delete dummyHead;
        return result;
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