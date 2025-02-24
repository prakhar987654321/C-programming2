#include<stdio.h>
int main(){
  int marks;
  printf("enter marks");
  scanf("%d\n",&marks);
  if(marks>30&&marks<70){
    printf("B");
  }
  else if(marks>70&&marks<90){
    printf("A");
  }
  else if(marks>90&&marks<1100){
    printf("c");
  }
}