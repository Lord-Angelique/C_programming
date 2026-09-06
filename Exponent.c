#include<stdio.h>
int main(){
    double x,sum=1.0,term=1.0;
    int n,i;
    printf("Enter the value of x:");
    scanf("%lf",&x);
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        term=term*(x/i);
        sum+=term;
    }
    printf("The value of e^%.2lf = %.4lf\n",x,sum);
return 0;


}