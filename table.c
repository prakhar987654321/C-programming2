#include<stdio.h>
int main(){
  int n;
  printf("\n Enter any number");
  scanf("%d\n",&n);
  for(int i=1;i<=10;i++){
      printf("%d\n",n*i);
  }
  return 0;
}