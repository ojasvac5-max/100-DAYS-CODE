// Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
#include <stdio.h>

int findFirstOccurrence(int nums[], int n, int target) {
    int left = 0, right = n - 1, first = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (nums[mid] == target) {
            first = mid;
            right = mid - 1;  
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return first;
}

int findLastOccurrence(int nums[], int n, int target) {
    int left = 0, right = n - 1, last = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (nums[mid] == target) {
            last = mid;
            left = mid + 1; 
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return last;
}

int main() {
    int nums[] = {5, 7, 7, 8, 8, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target;

    target = 8;
    int first = findFirstOccurrence(nums, n, target);
    int last = findLastOccurrence(nums, n, target);
    printf("%d,%d\n", first, last);  

    target = 6;
    first = findFirstOccurrence(nums, n, target);
    last = findLastOccurrence(nums, n, target);
    printf("%d,%d\n", first, last);  

    target = 10;
    first = findFirstOccurrence(nums, n, target);
    last = findLastOccurrence(nums, n, target);
    printf("%d,%d\n", first, last); 

    return 0;
}
