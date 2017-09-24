#include<stdio.h>
int main(){
  int pretime;
  int lasttime;
  scanf("%d %d",&pretime,&lasttime);
  int hour = pretime/100;
  int minute = pretime%100;
  int sumTime = hour*60 + minute;
  sumTime += lasttime;
  printf("%d%d",sumTime/60,sumTime%60);
  if(sumTime%60 == 0){
    printf("0");
  }
  printf("\n");
  return 0;
}
