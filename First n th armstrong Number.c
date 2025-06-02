#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = 0;
    while (num != 0) {
        num /= 10;
        digits++;
    }
    num = original;
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return (sum == original);
}
void printArmstrongNumbers(int n) {
    int count = 0;
    int num = 1;

    while (count < n) {
        if (isArmstrong(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printArmstrongNumbers(n);
    return 0;
}

