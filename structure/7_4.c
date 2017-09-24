#include<stdio.h>
int main(){
  int w_num;
  scanf("%d",&w_num);
  int a = w_num / 16;
  int b = w_num % 16;
  if( a == 0){
    printf("%d",b);
  }else{
    printf("%d%d",a,b);
  }
  printf("\n");
  return 0;
}
