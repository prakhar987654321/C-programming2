#include<stdio.h>
int main(){
  int i=1;
  int fact=1;
  while(i<=4){
    fact=fact*i;
    i++;
  }
  printf("%d\n",fact);
  return 0;
}