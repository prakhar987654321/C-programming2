#include<stdio.h>
int main(){
  int n;
  printf("Enter a number");
  scanf("%d\n",&n);
  int r;
  int sum=0;
  int c;
  c=n;
  while(n>0){
    r=n%10;
    sum=r+(sum*10);
    n=n/10;
  }
  if(c==sum){
    printf("It is palindrome number");
  }
  else{
     printf("It is not palindrome number");
  }
  return 0;

}