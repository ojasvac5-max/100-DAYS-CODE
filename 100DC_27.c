// Q27: Write a program to print the sum of the first n odd numbers.

#include<stdio.h>

int main(){
    int i , n , sum;
    printf("ENTER THE NUMBER : ");
    scanf("%d" , &n);
for(i=0;i<=n;i++){
sum += i;
}
printf("THE SUM IS : %d" , sum);
    return 0;
}