Two Sum - LeetCode Solution
Problem Description
Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to the target.
Constraints:
	•	Each input has exactly one solution
	•	You cannot use the same element twice
	•	Return indices in any order
Approach: Brute Force (Nested Loop)
 This is a straightforward approach where we check every possible pair.
    Steps:
	1.	Iterate through each element using index i
	2.	For each element, iterate through the remaining elements using index j
	3.	Check if: nums[i] + nums[j] == target
    4.	If condition is satisfied → return {i, j}
Complexity Analysis
     Type                          Complexity
     Time Complexity               O(n²)
     Space Complexity              O(1)
Limitations
	•	Inefficient for large datasets
	•	Time complexity is quadratic
	•	Not suitable for optimized coding interviews
Optimized Approach (Hash Map)
To improve efficiency, we can use a Hash Map:
Idea:
	•	Store elements in a map while traversing
	•	Check if (target - current element) already exists
Complexity:
	•	Time: O(n)
	•	Space: O(n)
Learning Outcomes
	•	Understanding array traversal
	•	Concept of pair searching
	•	Importance of time optimization
	•	Introduction to hashing techniques

Author
Ayush Tripathi