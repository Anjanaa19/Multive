#include<stdio.h>
#include<stdlib.h>
int main(){
  int n;
  scanf("%d",&n);
  n=abs(n);
  if(n%2==0)
     printf("Even");
  else
    printf("odd");
}
