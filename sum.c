#include<stdio.h>
int main(){
  int n;
  printf("Enter a number");
  scanf("%d\n",&n);
  int r;
  int sum=0;
  while(n>0){
    r=n%10;
    sum=sum+r;
    n=n/10;
  }
  printf("The sum of number is",sum);
  return 0;
  
}