#include<stdio.h>
int add(int a, int b){
    int sum=a+b;
    return sum;
}
int main(){
    int a,b,sum;
    printf("Enter the first num:");
    scanf("%d",&a);
    printf("Enter the second num:");
    scanf("%d",&b);
    sum=add(a,b);
    printf("The sum of %d and %d is %d",a,b,sum);
    return 0;
}