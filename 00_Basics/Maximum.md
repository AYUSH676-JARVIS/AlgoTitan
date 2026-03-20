Find Minimum and Maximum in Array

Problem Statement
Given an array of integers, find the minimum and maximum elements in the array.

Approach: Linear Traversal

We iterate through the array once and maintain two variables:
	•	minVal → stores the smallest element
	•	maxVal → stores the largest element

Steps:
	1.	Initialize minVal = INT_MAX and maxVal = INT_MIN
	2.	Traverse the array from index 0 to n - 1
	3.	For each element:
	•	Update minVal if current element is smaller
	•	Update maxVal if current element is larger
	4.	Return both values

Complexity Analysis
Type                                Complexity 
Time Complexity                        O(n)
Space Complexity                       O(1)

Key Concepts
	•	Linear traversal
	•	Comparison-based optimization
	•	Use of INT_MAX and INT_MIN
	•	Efficient single-pass solution

Conclusion
The linear traversal approach efficiently finds both minimum and maximum values in a single pass, making it an optimal solution with minimal time and space usage.

Author
Ayush Tripathi