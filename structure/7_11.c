#include "stdio.h"
int main(){
  double x,y;
  scanf("%lf",&x);
  if(x<=15){
    y = 4.0/3 * x;
  }else{
    y = 2.5 * x - 17.5;
  }
  printf("%.2lf\n",y);
  return 0;
}
