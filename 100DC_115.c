// Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>

void checkAnagram(char *s, char *t) {

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return;
    }

    int freq[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return;
        }
    }

    printf("Anagram\n");
}

int main() {

    char s1[] = "anagram";
    char t1[] = "nagaram";
    checkAnagram(s1, t1);  


    char s2[] = "rat";
    char t2[] = "car";
    checkAnagram(s2, t2);  

    return 0;
}
