#include<stdio.h>
int main(){
  int i=1;
  int sume=0;
  int sumo=0;
  do{
    if(i%2==0){
      sume=sume+i;
    }
    else{
      sumo=sumo+i;
    }
    i++;

  }while(i<=40);
  printf("sum of even number is %d\n",sume);
  printf("sum of odd number is%d\n",sumo);
  return 0;
}