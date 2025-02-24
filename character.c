#include<stdio.h>
int main(){
  char ch;
  scanf("%d\n",&ch);
  if(ch>="A"&&ch<="Z"){
    printf("It is upper case");
  }
  else{
    printf("It is lower case");
  }
  return 0;
}