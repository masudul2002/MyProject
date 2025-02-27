#include<stdio.h>

int main()
{
    https://play.typeracer.com?rt=6ygv2k7v8

    int option, n1, n2, res, rem;
    printf("Enter 1 for Summation.\n");
    printf("Enter 2 for Substraciton.\n");
    printf("Enter 3 for Multiplicaiton.\n");
    printf("Enter 4 for Division.\n");
    printf("Enter 5 for Difference.\n");
    scanf("%d", &option);

    switch(option)
    {
    case 1:
        printf("Enter two numbers for Summation: ");
        scanf("%d%d", &n1, &n2);
        res=n1+n2;
        printf("Sum = %d", res);
        break;
    case 2:
        printf("Enter two numbers for SUB: ");
        scanf("%d%d", &n1, &n2);
        res=n1-n2;
        printf("Sub = %d", res);
        break;
    case 3:
        printf("Enter two numbers for Multiplication: ");
        scanf("%d%d", &n1, &n2);
        res=n1*n2;
        printf("Multiplicaiton = %d", res);
        break;
    case 4:
        printf("Enter two numbers for Division: ");
        scanf("%d%d", &n1, &n2);
        res=n1/n2;
        rem = n1%n2;
        printf("Quos= %d and Rem = %d", res, rem);
        break;



    case 5:
        printf("Enter two numbers for Difference: ");
        scanf("%d%d", &n1, &n2);
        res=(n1>n2)? n1-n2: n2-n1;
        printf("Difference between %d and %d is  = %d", n1, n2, res);
        break;
    default:
        printf("Please input within the given range\n");
    }

    return 0;
}
