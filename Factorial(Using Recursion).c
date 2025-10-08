// Q. Write a program to find the factorial of a number using no recursion.

#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,factorial(n));
    return 0;
}