#include<stdio.h>
int main(){
  int n;
  int count=0;
  printf("Enter a number");
  scanf("%d\n",&n);
  for(int i=1;i<=n;i++){
    if(n%i==0){
      count++;
    }
  }
  if(count==2){
    printf("Prime number");
  }
  else{
    printf("Not Prime");
  }
  return 0;

}