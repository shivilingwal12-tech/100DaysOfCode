//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    long long total_sum;
    long long discriminant;

    printf("Enter a positive integer n: ");
    scanf("%lld", &n);
    total_sum = n * (n + 1) / 2;
    discriminant = total_sum;
    long long root = round(sqrt(discriminant));

    if (root * root == discriminant) {
        printf("\nThe pivot integer x is: %lld\n", root);
    } else {
        printf("\nNo such pivot integer exists: -1\n");
    }

    return 0;
}