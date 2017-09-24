#include "stdio.h"
int main(){
  int year;
  int hour;
  double wage;
  scanf("%d %d",&year,&hour);
  if(year>=5){
    if(hour<=40)
      wage = hour * 50;
    else
      wage = 40 * 50 + (hour - 40) * 50 * 1.5;
  }else{
    if(hour<=40)
      wage = hour * 30;
    else
      wage = 40 * 30 + (hour - 40) * 30 * 1.5;
  }
  printf("%.2lf\n",wage);
  return 0;
}
