#include<stdio.h>
/*======== For ceil of house ==========*/
int main(){
    int n=5,i,j,k=18,l;
     for(i=0;i<n;i++){
        if(i<5){
          for(j=0;j<=4-i;j++){
            printf("  ");
          }
          for(l=0;l<k;l++){
            printf("* ");
          }
          k=k+2;
          printf("\n");
        }
     };
     /*======== for window of house ==========*/
     int height=15;
     int width=28;
     for(i=0;i<=3;i++){
      for(j=0;j<width;j++){
        if(j==0 || j==27){
          printf("*");
        }
        else if(j>=1 && j<27){
          printf("  ");
        }
      }
      printf("\n");
     }
     /*========== for door of house ========*/
      for(i=0;i<=3;i++){
      for(j=0;j<width;j++){
        if(j==0 || j==27){
          printf("*");
        }
        else if((j>=1 && j<=4) ||(j>=9 && j<=17) || (j>=22 && j<=26)){
          printf("  ");
        }
        else if((j>=5 && j<=8) ||(j>=18 && j<=21)){
          printf("**");
        }
      }
      printf("\n");
     }
    
     for(i=0;i<=7;i++){
      for(j=0;j<width;j++){
        if(j==0 || j==27){
          printf("*");
        }
        else if((j>=1 && j<=9) ||(j>=17 && j<=26)){
          printf("  ");
        }
        else if(j>=10 && j<=16){
          printf("**");
        }
      }
      printf("\n");
     }
    for(i=0;i<27;i++){
      printf("* ");
    }
    return 0;
}