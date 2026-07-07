# Two Pointers

## Definition
- Use two indices/pointers to traverse an array or string.
- Helps reduce time complexity from O(n²) to O(n) in many problems.

---

## When to Use
- Sorted arrays
- Pair sum / Triplet sum problems
- Palindrome checking
- Remove duplicates
- Merging sorted arrays
- Sliding Window problems(same direction two pointers)

---

## Types

### 1. Opposite Direction
```cpp
left = 0;
right = n - 1;
```

- Usually used on sorted arrays.
- Move pointers based on conditions.
- Examples:
  - Two Sum II
  - 3Sum
  - Valid Palindrome
  - Container With Most Water

### 2. Same Direction (Sliding Window)
```cpp
left = 0;
right = 0;
```

- Both pointers move forward.
- Used for subarray/substring problems.
- Examples:
  - Longest Substring Without Repeating Characters
  - Maximum Sum Subarray of Size K

---

## Complexity

| Approach | Time | Space |
|-----------|--------|--------|
| Brute Force | O(n²) | O(1) |
| Two Pointers | O(n) | O(1) |

---

## Unsorted Array

### Need Original Indices?
- Use Hash Map
- Time: O(n)
- Space: O(n)

### Indices Not Required?
- Sort + Two Pointers
- Time: O(n log n)
- Space: O(1)

---

