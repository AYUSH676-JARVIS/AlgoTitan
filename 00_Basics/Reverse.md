Reverse Array
Problem Statement:
Given an array of integers, reverse the array in-place without using any extra space.
Approach: Two-Pointer Technique
We use two pointers:
	•	Start → beginning of array
	•	End → last index of array
Steps:
	1.	Initialize start = 0 and end = n - 1
	2.	Swap elements at start and end
	3.	Move:
	•	start++
	•	end--
	4.	Repeat until start < end
 Complexity Analysis
Type                      Complexity
Time Complexity           O(n)
Space Complexity          O(1) (in-place)
Key Concepts
	•	Two-pointer technique
	•	In-place array manipulation
	•	Time-space optimization
Conclusion
The two-pointer approach provides an efficient and optimal way to reverse an array without extra memory usage, making it ideal for performance-critical applications.

Author
Ayush Tripathi
