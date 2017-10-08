# Two-Sum-2-sorted-array
[LeetCode] Two Sum II - Input array is sorted
Given an array of integers that is already sorted in ascending order, find two numbers such 
that they add up to a specific target number.
The function twoSum should return indices of the two numbers such that they add up to the target, 
where index1 must be less than index2. Please note that your returned answers (both index1 and index2)
are not zero-based.
You may assume that each input would have exactly one solution.
Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2 

File 2sumsorted.c used method of bisection，and the time complexity is O(nlgn),File 2sumsortedversion2.c used two pointer
points the head and the tail of the array.
