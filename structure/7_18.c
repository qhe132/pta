#include "stdio.h"

double a3,a2,a1,a0;
double f(double x){
    return a3*x*x*x + a2*x*x + a1*x + a0;
}

int main(){
  double left,right,mid;
  scanf("%lf %lf %lf %lf",&a3,&a2,&a1,&a0);
  scanf("%lf %lf",&left,&right);
  while((right-left>=0.001)&&(f(left)*f(right)<=0)){
    if(f(right) == 0){
        printf("%.2lf",right);
        return 0;
    }else if(f(left)==0){
      printf("%.2lf",left);
      return 0;
    }else{
      mid = (left + right) / 2.0;
      if(f(mid)*f(left)<=0){
        right = mid;
      }else{
        left = mid;
      }
    }
  }
  printf("%.2lf",mid);
  printf("\n");
  return 0;
}
