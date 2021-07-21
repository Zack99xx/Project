#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n;
  int star;

  printf("Enter number of rows: ");
  scanf("%d",&n);

  for(int i=1; i<=n; i++)
  {
     for(int j=i; j<=3*n; j++)
     {
       printf(" ");
     }
     for(int k=1; k<=2*i-1; k++)
     {
       if(k==1 || k==(2*i-1)) printf("*");
       else printf(" ");
     }
     printf("\n");
  }
  
  for (int i = 1; i < 6*n+2; i++){
      if(i <= 2*n+1 || i >= 4*n+1 ){
          printf("*");
      }
      else{
          printf(" ");
      }
  }
  
  printf("\n");
  
  for ( int i = 2; i < n+2; i++){
      for (int j = 1; j < 6*n+1; j++){
          if(j == i || j == 6*n+2-i){
              printf("*");
          }
          else{
              printf(" ");
          }
          
      }
      printf("\n");
  }

  for ( int i = n-1; i > 0; i--){
      for (int j = 1; j < 6*n+1; j++){
          if(j == i+1 || j == 6*n-i+1){
              printf("*");
          }
          else{
              printf(" ");
          }
          
      }
      printf("\n");
  } 
  
  for (int i = 1; i < 6*n+2; i++){
      if(i <= 2*n+1 || i >= 4*n+1 ){
          printf("*");
      }
      else{
          printf(" ");
      }
  }
  printf("\n");
  for(int i=n; i>= 1; i--)
  {
     for(int j=i; j<=3*n; j++)
     {
       printf(" ");
     }
     for(int k=1; k<=2*i-1; k++)
     {
       if(k==1 || k==(2*i-1)) printf("*");
       else printf(" ");
     }
     printf("\n");
  }
  
  
  return 0;
}