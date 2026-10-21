# ProgrammingPractice

My competitive-programming and data-structures practice, in C++. About 120 solutions to problems from Codeforces, LeetCode and HackerRank.

## Contents

| Folder | What is in it |
|---|---|
| `codeforces_ladder/` | Codeforces problems by rating bucket: `800` (the most), `900`, `1000`, `1100`, `1200`, `1300`, `1500`, plus `contest/` with solutions written during contests (about 70 files) |
| `Leetcode/` | Trees (balanced tree, diameter, right view, top view, vertical order, max path sum, symmetric tree, minimum depth), tries (longest common prefix, k-th smallest in lexicographic order), dynamic programming (longest palindromic substring), and daily questions |
| `HackerRank/` | Problem-solving practice and certification-style problems |
| `Data Structure/` | Linked list and recursion implementations from scratch |
| `.vscode/` | Editor build and debug configuration |

## Topics covered

Trees and traversals, tries, dynamic programming, recursion and linked lists, plus the general Codeforces problem set across ratings 800 to 1500.

## Style

Each file is a standalone C++ solution. Many start from a small shared template (`bits/stdc++.h`, fast-I/O and a few macros) typical of competitive programming.

## Build one solution

```bash
g++ -std=c++17 -O2 -o sol "codeforces_ladder/800/LineTrip.cpp"
./sol
```

## Notes

Files with `TLE` in the name (for example in `HackerRank/`) are attempts that hit the time limit, kept for reference.

## Next steps

Add a problem-index table with links, notes on the idea behind each solution, and a section for graph and DP problems.
