#include<stdio.h>
#include<math.h>
    
int main(){
    int i,fact=1,number;
    printf("Enter a Number: ");
    scanf("%d",&number);
    for (i=1;i<=number;i++){
        /* code */fact=fact*i;
    }
       printf("Factorial of %d is %d ",number,fact);
     return 0;
}