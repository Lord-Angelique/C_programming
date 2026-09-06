#include<stdio.h>
int main(){
    int a,b,c,i,prod,digit=0,sum=0,last=0;
    printf("enter the number: ");
    scanf("%d",&a);
    b=c=a;
    while(a!=0){
        a=a/10;
        digit++;

    }
    while(b!=0){
        last=b%10;
        b=b/10;
        prod=1;
        for(i=1;i<=digit;i++){
            prod=prod*last;

        }
        sum=sum+prod;

    }
if(sum==c){
    printf("The number is armstrong");
}
else{
    printf("The number is not armstrong");
}
return 0;

    
}