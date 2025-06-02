#include<stdio.h>
int main(){
    int ar[100], i, j,n=10; //index: 0 to 99
    for(i=0; i<n; i++)
    scanf("%d", &ar[i]);

   // ar[3]=5; INdex 3        Number/value 5
   int sum=0;
    for(i=0; i<n; i+=2){
        //printf("\n%d", ar[i]);
        sum = sum + ar[i];
    }
    printf("Sum of all Even numbers Index Value: %d", sum);
/*
Sample Input:
0-10
1-3
2-6
3- 100
4- 45
5- 76
6- 37
7- 45
8- 85
9- 8
*/


    //printf("\n%d", ar[i]);



    return 0;
}
