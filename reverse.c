#include<stdio.h>
int main(){
  int n;
  printf("Enter a number");
  scanf("%d\n",&n);
  int r;
  while(n>0){
    r=n%10;
    printf("%d\n",r);
    n=n/10;
  }
  return 0;
  
}