#include<stdio.h>
int main(){
  int count=0;
  int n;
  printf("Enter a number");
  scanf("%d\n",&n);
  do{
    n=n/10;
    count++;
  }while(n!=0);
  printf("Number of digit %d\n",count);
  return 0;

}