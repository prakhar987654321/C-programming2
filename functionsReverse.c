#include<stdio.h>
void reverse(int n);
int main(){
  int n;
  printf("enter number");
  scanf("%d\n",&n);
  reverse(n);
}
void reverse(int n){
  int r;
  int n;
  int c;
  c==n;
  while(n>0){
    r=n%10;
    printf("%d\n",r);
    n=n/10;
  }
  return 0;
}