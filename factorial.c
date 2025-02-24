#include<stdio.h>
int main(){
  int n;
  printf("Enter a number");
  scanf("%d\n",&n);
  int fact=1;
  for(int i=1;i<=n;i++){
    fact=fact*i;
  }
  printf("The factorial of a number is %d\n",fact);
  return 0;
}