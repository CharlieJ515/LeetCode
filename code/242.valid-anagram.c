// Category: algorithms
// Level: Easy
// Percent: 68.82792%



// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// 
//  
// Example 1:
// 
// 
// Input: s = "anagram", t = "nagaram"
// 
// Output: true
// 
// 
// Example 2:
// 
// 
// Input: s = "rat", t = "car"
// 
// Output: false
// 
// 
//  
// Constraints:
// 
// 
// 	1 <= s.length, t.length <= 5 * 10⁴
// 	s and t consist of lowercase English letters.
// 
// 
//  
// Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>
#include <math.h>

// start_marker
bool isAnagram(char* s, char* t) {
	if(strlen(s) != strlen(t)) return false;
	int cnt[26] = {0};

	for(char *ch=s; *ch; ch++) {
		cnt[*ch-'a']++;
	}
	for(char *ch=t; *ch; ch++) {
		if(--cnt[*ch-'a'] < 0) return false;
	}
	
	return true;
}
// end_marker
