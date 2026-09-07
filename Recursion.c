//code for sum of digits using recursion:
#include<stdio.h>
int sum(int a){
    if(a<=9){
        return a;
    }
    else{
        return a%10+sum(a/10);
    }
}
int main(){
    int a,c;
    printf("Enter the number:");
    scanf("%d",&a);
    c=sum(a);
    printf("The sum of digits of %d is %d",a,c);
}



//To convert decimal to binary using recursion:
#include<stdio.h>
int con(int a){
    if(a>1){
        con(a/2);
        printf("%d",a%2);
    }
    else{
        printf("%d",a);
    }
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    con(a);
    return 0;
}


//To return a^b using reccursion:
#include<stdio.h>
int power(int a, int b){
    if(b==0)
    return 1;
    else{
        return a*power(a,b-1);
    }
}
int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("The value of %d^%d is %d",a,b,power(a,b));
    return 0;
}





//TOWER OF HANOI:
#include<stdio.h>
void TOH(int n,char source, char dest, char aux){
    if(n==1)
    printf("%c -> %c\n",source,dest);
    else{
        TOH(n-1,source,aux,dest);
        printf("%c -> %c\n",source,dest);
        TOH(n-1,aux,dest,source);
    }
}
int main(){
    int a;
    printf("Enter the number of discs:");
    scanf("%d",&a);
    TOH(a,'A','B','C');
}




//Fibonacci series using recursion:
#include<stdio.h>
int fib(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    printf("Enter the number of terms:");
    int a;
    scanf("%d",&a);
    printf("The fibonacci series is:");
    for(int i=0;i<a;i++){
        printf("%d ",fib(i));
    }
    printf("\n");
    return 0;
}