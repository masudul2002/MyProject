#include <stdio.h>

// Function to calculate Fibonacci number at a given position
int fibonacciAtPosition(int n) {
    if (n <= 1)
        return n;
    return fibonacciAtPosition(n - 1) + fibonacciAtPosition(n - 2);
}

// Function to print Fibonacci sequence up to a given position
void printFibonacciSequence(int n) {
    int a = 0, b = 1, next;

    printf("Fibonacci sequence up to position %d: ", n);

    for (int i = 0; i <= n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int position;

    printf("Enter the position in Fibonacci sequence: ");
    scanf("%d", &position);

    if (position < 0) {
        printf("Position cannot be negative.\n");
        return 1;
    }

    // Get and display Fibonacci number at the position
    int fibNumber = fibonacciAtPosition(position);
    printf("Fibonacci number at position %d is: %d\n", position, fibNumber);

    // Print the sequence up to the position
    printFibonacciSequence(position);

    return 0;
}
