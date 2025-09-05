 # include<stdio.h>


 int main() {
    int num;
     printf("enter the no.");
     scanf("%d",&num);
    
     if(num%2 ==0 && num>=0){
         printf("%d is a power of two.\n", num);
     }    else
 {
         printf("%d is not a power of two.\n", num);
     }
 }