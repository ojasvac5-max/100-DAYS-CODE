// Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>


void printKMax(int arr[], int n, int k) {
    int deque[n]; 
    int front = 0, rear = 0;

    for (int i = 0; i < k; i++) {
        while (rear > front && arr[i] >= arr[deque[rear - 1]])
            rear--;
        deque[rear++] = i;
    }

    for (int i = k; i < n; i++) {
        printf("%d ", arr[deque[front]]);

        
        while (rear > front && deque[front] <= i - k)
            front++;

        
        while (rear > front && arr[i] >= arr[deque[rear - 1]])
            rear--;

    
        deque[rear++] = i;
    }

    
    printf("%d\n", arr[deque[front]]);
}

int main() {

    int arr1[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int k1 = 3;
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printKMax(arr1, n1, k1);
    
    int arr2[] = {5, 1, 3, 4, 2};
    int k2 = 1;
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printKMax(arr2, n2, k2);
    

    return 0;
}
