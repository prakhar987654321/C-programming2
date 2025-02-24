#include<stdio.h>
int sum(int n);
int main(){
int n;
printf("Enter a number");
scanf("%d\n",&n);
printf("The sum of number is %d\n",sum(n));
}
int sum(int n){
  int sum=0;
  for(int i=1;i<=n;i++){
      sum=sum+i;
  }
  return sum;
}