#include<stdio.h>
int main(){
  int n;
  printf("Enter a number");
  scanf("%d\n",&n);
  int fact=1;
  int i=1;
  while(i<=n){
    fact=fact*i;
    i++;
  }
  printf("%d\n",fact);
  return 0;
}