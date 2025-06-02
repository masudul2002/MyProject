#include<stdio.h>
#include<math.h>
 int armstorngNumber (int n)
 int sum=0,  len=0;
 int m=n;
  while(m>0){  ///count length/ digit count
        m=m/10;
        len++;
  }

    while(n>0){
    int digit = n%10;
    sum = sum + pow(digit,len);
    n=n/10;

 }
  return sum;

 }
 int main(){
     int n;
     printf("Enter Range:");
     scanf("%d, &n);
     printf("Armstorng Number from 1 to %d:", n);
     for(int i=0; i<n; i++){
        int fvalue = armstorngNumber(i);
        if (fvalue==i)
            printf("%d", i);

     }
 return 0;
 }
