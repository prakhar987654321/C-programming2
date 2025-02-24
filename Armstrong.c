#include<stdio.h>;
int main(){
  int n;
  printf("Enter a number");
  scanf("%d\n",&n);
  int r;
  int c;
  int arm=0;
  c=n;
  while(n>0){
    r=n%10;
    arm=(r*r*r)+arm;
    n=n/10;
  }
  if(c==arm){
    printf("It is Armstrong Number");
  }
  else{
    printf("It is not Armstrong Number");
  }
  return 0;

}