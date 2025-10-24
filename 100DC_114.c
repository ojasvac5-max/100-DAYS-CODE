// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int lastIndex[256]; 
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0;
    int start = 0; 

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = s[i];


        if (lastIndex[ch] >= start)
            start = lastIndex[ch] + 1;

        lastIndex[ch] = i; 

        
        int windowLen = i - start + 1;
        if (windowLen > maxLen)
            maxLen = windowLen;
    }

    return maxLen;
}

int main() {
    
    char s1[] = "abcabcbb";
    printf("%d\n", lengthOfLongestSubstring(s1)); 

    
    char s2[] = "bbbbb";
    printf("%d\n", lengthOfLongestSubstring(s2)); 

    
    char s3[] = "pwwkew";
    printf("%d\n", lengthOfLongestSubstring(s3)); 

    return 0;
}
