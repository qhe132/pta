#include<stdio.h>
int main(){
  double a[4];
  int flag = 0;
  scanf("%lf %lf %lf %lf",&a[0],&a[1],&a[2],&a[3]);
  if(a[0]>a[3]){
    printf("BW-Solid");
  }else if(a[0]<a[3]){
    printf("R-Hollow");
  }else{
    printf("R-Cross");
  }
  if((a[2]<a[0])&&(a[2]<a[3])){
      flag = 1;
    printf(" with Lower Shadow");
  }
  if((a[1]>a[0])&&(a[1]>a[3])){
    if(flag)
      printf(" and Upper Shadow");
    else
      printf(" with Upper Shadow");
  }
  printf("\n");
  return 0;
}
