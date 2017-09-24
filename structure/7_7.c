#include "stdio.h"

int main(){
  int h;
  int m;
  char c;
  scanf("%d%c%d",&h,&c,&m);
  if(h>12&&h<24){
    printf("%d:%d PM",h-12,m);
  }else if(h == 12){
    printf("%d:%d PM",h,m);
  }else{
    printf("%d:%d AM",h,m);
  }
  printf("\n");
  return 0;
}
