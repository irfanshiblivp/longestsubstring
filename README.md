# Longest Substring Without Repeating Characters (C Implementation)

This repository contains a C program that solves the classic coding problem:  
**"Find the length of the longest substring without repeating characters."**

## 🚀 Problem Statement

Given a string `s`, find the length of the longest substring without repeating characters.

### Examples

| Input       | Output | Explanation         |
|-------------|--------|---------------------|
| `"abcabcbb"`| `3`    | `"abc"`             |
| `"bbbbb"`   | `1`    | `"b"`               |
| `"pwwkew"`  | `3`    | `"wke"` (not `"pwke"`, which is a subsequence) |

## 📌 Constraints

- `0 <= s.length <= 5 * 10^4`
- `s` consists of English letters, digits, symbols, and spaces.

---

## 💡 Approach

The solution uses the **sliding window technique** with a character index map to track the last seen positions of characters efficiently.

- Time Complexity: **O(n)**
- Space Complexity: **O(256)** for ASCII characters

---

## 📁 Files

- `main.c` – Contains the full working code.
- `README.md` – This documentation.

---

## 🧪 Sample Output

```bash
Input: "abcabcbb" → Output: 3
Input: "bbbbb"    → Output: 1
Input: "pwwkew"   → Output: 3
