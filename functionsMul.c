#include<stdio.h>
void mul(int n);
int main(){
int n;
printf("Enter a number");
scanf("%d\n",&n);
mul(n);
}
void mul(int n){
  for(int i=1;i<=n;i++){
      printf("%d\n",n*i);
  }
}