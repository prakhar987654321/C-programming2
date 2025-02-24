#include<stdio.h>
int main(){
   int age;
   printf("enter age");
   scanf("%d\n",&age);
   int score;
   printf("enter score");
   scanf("%d\n",&score);
   if(age>10&&age<25){
       printf("person is eligible for contast");
   }
   else if(score<50&&score>100){
       printf("He will get T shirt");
   }
   else if(score>50){
       printf("He will get diary");
   }
   else if(score>100){
      printf("He will get diary and pen");
   }
   return 0;
}