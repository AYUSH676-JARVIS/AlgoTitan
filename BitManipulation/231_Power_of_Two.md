#

Problem: Power of Two

Problem Understanding

The problem asks us to check whether a given number n is a power of two or not.

A number is considered a power of two if it can be written in the form:

2^x

where x ≥ 0.

Examples of powers of two:

2^0 = 1
2^1 = 2
2^2 = 4
2^3 = 8
2^4 = 16

So numbers like 1, 2, 4, 8, 16, 32… are all powers of two.

If the given number n matches any of these values, we return true.
If it does not match any of them, we return false.

⸻

Approach / Intuition

When I first thought about this problem, I asked myself a simple question:

“How can I generate all powers of two and check if any of them is equal to n?”

Since powers of two follow the pattern:

2^0, 2^1, 2^2, 2^3, …

I can simply loop through possible powers and check if any of them equals n.

Now the next question was:
“How far should I check?”

For integers, the value 2^30 is already larger than most numbers within the integer range used in problems like this. So checking powers from 0 to 30 is enough.

So the plan becomes:
	1.	Start a loop from 0 to 30.
	2.	Calculate 2^i for each value of i.
	3.	Compare it with n.
	4.	If any value matches n, return true.
	5.	If the loop ends and nothing matched, return false.
    #
    
