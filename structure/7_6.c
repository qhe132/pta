#include "stdio.h"

int main(){
  double f1,f2;
  int d;
  char c;
  scanf("%lf %d %c %lf",&f1,&d,&c,&f2);
  printf("%c %d %.2lf %.2lf",c,d,f1,f2);
  printf("\n");
  return 0;
}
