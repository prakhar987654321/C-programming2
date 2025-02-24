#include<stdio.h>
void armstrong(int n);
int main(){
   int n;
   printf("Enter a number");
   scanf("%d\n");
   armstrong(n);

}
void armstrong(int n){
  int c;
  int r;
  int arm;
  c=n;
  while(n>0){
    r=n%10;
    arm=(r*r*r)+arm;
    n=n/10;
  }
  if(c==arm){
    printf("It is Armstrong number");
  }
  else{
    printf("It is not Armstrong number");
  }
  return 0;

}