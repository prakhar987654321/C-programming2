#include<stdio.h>
void palindrome(int n);
int main(){
  int n;
  printf("Enter a number");
  scanf("%d\n",&n);
  palindrome(n);

}
void palindrome(int n){
  int r;
  int c;
  int sum=0;
  c=n;
  while(n>0){
    r=n%10;
    sum=r+(sum*10);
    n=n/10;
    }
    if(c==sum){
      printf("palindrome");
    }
    else{
      printf("Not palindrome");
    }
    return 0;
}
