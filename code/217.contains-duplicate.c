// Category: algorithms
// Level: Easy
// Percent: 64.85148%



// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
// 
//  
// Example 1:
// 
// 
// Input: nums = [1,2,3,1]
// 
// Output: true
// 
// Explanation:
// 
// The element 1 occurs at the indices 0 and 3.
// 
// 
// Example 2:
// 
// 
// Input: nums = [1,2,3,4]
// 
// Output: false
// 
// Explanation:
// 
// All elements are distinct.
// 
// 
// Example 3:
// 
// 
// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// 
// Output: true
// 
// 
//  
// Constraints:
// 
// 
// 	1 <= nums.length <= 10⁵
// 	-10⁹ <= nums[i] <= 10⁹
// 
 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>
#include <math.h>

// start_marker
static int cmp(const void *a, const void *b) {
	int x = *(int*)a, y = *(int*)b;
	return (x>y) - (x<y);
}

bool containsDuplicate(int* nums, int numsSize) {
	int *arr = malloc(numsSize * sizeof *nums);
	memcpy(arr, nums, numsSize * sizeof *arr);

	bool duplicate = false;
	qsort(arr, numsSize, sizeof nums[0], cmp);
	for(int i=1; i<numsSize; i++) {
		if(arr[i-1] == arr[i]) {
			duplicate = true;
			break;
		}
	}

	free(arr);
	return duplicate;
}
// end_marker
