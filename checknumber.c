#include<stdio.h>
int main(){
  int n;
  printf("enter a number");
  scanf("%d\n",&n);
  if(n>0){
    printf("It is positive number");
    if(n%2==0){
      printf("It is even number");
      }
      else{
        printf("It is odd number");
      }
    }
    else if(n<0){
      printf("It is negative number");
    }
    else if(n==0){
      printf("It is zero number");
    }
    else{
      printf("no number will print");
    }
    return 0;
  }
