#include<stdio.h>
int main(){
    int ar[100], i, j,n=10; //index: 0 to 99
    for(i=0; i<n; i++)
    scanf("%d", &ar[i]);
    //scanf("%d", &ar[1]);
    //scanf("%d", &ar[2]);
    //scanf("%d", &ar[3]);
   // ar[3]=5; INdex 3        Number/value 5
    for(i=0; i< 5; i++)
    printf("\n%d", ar[i]);

    for(i=n-1; i>=5; i--)
    printf("\n%d", ar[i]);
    //printf("\n%d", ar[1]);
    //printf("\n%d", ar[2]);
    //printf("\n%d", ar[0]);


    return 0;
}
