#include<stdio.h>
//Taxalation table

int main(){
    int income,age,tax;
    printf("Enter the income of people:");
    scanf("%d",&income);
    printf("Enter the age of people:");
    scanf("%d",&age);
    if(age<60){
        if(income<=250000){
          tax=0;
          printf("0-250000 :%d",tax);
        }
        else if(income<=500000){
          tax=(income-250000)*0.05;
          printf("250000-500000 :%d",tax);
        }
         else if(income<=1000000){
          tax=(250000*0)+(250000)*0.05+(income-500000)*0.20;
          printf("50000-100000 :%d",tax);
        }
        else{
          tax=250000*0+250000*0.05+500000*0.20+(income-1000000)*0.30;
          printf("Above 100000:%d",tax);
        }

    }
}