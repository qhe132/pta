#include "stdio.h"
int main(){
  int a,b;
  int sum = 0;
  int counter = 0;
  scanf("%d %d",&a,&b);
  for(int i=a;i<=b;i++){
    counter ++;
    printf("%5d",i);
    if(counter%5 == 0)
      printf("\n");
    sum += i;
  }
  if(counter%5 != 0)
    printf("\n");
  printf("Sum = %d\n",sum);
  return 0;
}
