#include<stdio.h>
int main(){
  int n;
  printf("enter number");
  scanf("%d\n",&n);
  for(int i=1;i>=n;i--){
    printf("%d\n",n*i);
}
return 0;
}