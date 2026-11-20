// Category: algorithms
// Level: Medium
// Percent: 40.138348%



// Given a string s, find the length of the longest substring without duplicate characters.
// 
//  
// Example 1:
// 
// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
// 
// 
// Example 2:
// 
// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
// 
// 
// Example 3:
// 
// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
// 
// 
//  
// Constraints:
// 
// 
// 	0 <= s.length <= 10⁵
// 	s consists of English letters, digits, symbols and spaces.
// 
 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>
#include <math.h>

// start_marker
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int lengthOfLongestSubstring(char* s) {
	int max = 0;
	char *head=s, *tail=s;

	while(*tail != '\0') {
		for(char* c=head; c<tail; c++) {
			if(*c != *tail) continue;

			max = MAX(tail-head, max);
			head = c+1;
			break;
		}

		tail++;
	}
	max = MAX(tail-head, max);

	return max;
}
// end_marker
