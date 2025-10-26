// Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array. 
// /* Sample Test Cases: 
// Input 1: nums1 = [2,7,11,15] nums2 = [4,8,10] 
// Output 1: 2 4 7 8 10 11 15 
// Input 2: nums1 = [1,2,7] nums2 = [9,10,17]
//  Output 2: 1 2 7 9 10 17 
//  Input 3: nums1 = [-10,-2,7] nums2 = [-3, -1, 7] 
//  Output 3: -10 -3 -2 -1 7 7

#include <stdio.h>

 int main() {
    int m, n;

    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter size of second array: ");
    scanf("%d", &n);

    int nums1[m], nums2[n], merged[m + n];

    printf("Enter %d sorted elements for first array:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter %d sorted elements for second array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    while (i < m) {
        merged[k++] = nums1[i++];
    }

    while (j < n) {
        merged[k++] = nums2[j++];
    }

    printf("Merged sorted array:\n");
    for (int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }

    printf("\n");
    return 0;
}
