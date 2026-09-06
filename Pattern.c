#include<stdio.h>
int main(){
    //1
    //12
    //123
    //1234
    //12345
    for(int row=1;row<=5;row++){
        for(int col =1;col<=row;col++)
            printf("%d",col);
            printf("\n");
        
    }
printf("  \n");
printf("  \n");
printf("  \n");
printf("  \n");


   // 1
   // 22
   // 333
   // 4444
   // 55555
   for(int row=1;row<=5;row++){
    for(int col=1;col<=row;col++)
        printf("%d",row);
        printf("\n");
   }
    


   printf("  \n");
   printf("  \n");
   printf("  \n");

   //12345
   //1234
   //123
   //12
   //1
   for(int row=1;row<=5;row++){
    for(int col=1;col<=6-row;col++)
    printf("%d",col);
    printf("\n");
   }

   printf("  \n");
   printf("  \n");
   printf("  \n");

           //*
          //**
         //***
        //****
       //*****
    for(int row=1;row<=5;row++){
        for(int space=1;space<=5-row;space++)
        printf(" ");
        for(int star=1;star<=row;star++)
        printf("*");
        printf("\n");
    }

    printf("  \n");
    printf("  \n");
    printf("  \n");

       //*
      //***
     //*****
    //*******
    for(int row=1;row<=4;row++){
        for(int space=1;space<=4-row;space++)
        printf(" ");
        for(int star=1;star<=2*row-1;star++)
        printf("*");
        printf("\n");

        
    }
}