// Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/
#include <stdio.h>

int findCeilIndex(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    int result = -1;  

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] >= x) {
            result = mid;      
            right = mid - 1;  
        } else {
            left = mid + 1;    
        }
    }

    return result;
}

int main() {
    int arr1[] = {1, 2, 8, 10, 11, 12, 19};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int x1 = 5;
    printf("%d\n", findCeilIndex(arr1, n1, x1));  

    int arr2[] = {1, 2, 8, 10, 11, 12, 19};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int x2 = 20;
    printf("%d\n", findCeilIndex(arr2, n2, x2));  

    int arr3[] = {1, 1, 2, 8, 10, 11, 12, 19};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int x3 = 0;
    printf("%d\n", findCeilIndex(arr3, n3, x3));  
    int arr4[] = {1, 1, 2, 8, 10, 11, 12, 19};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    int x4 = 2;
    printf("%d\n", findCeilIndex(arr4, n4, x4));  

    return 0;
}
