#include<stdio.h>
int main(){
  int cm;
  int inch,foot;
  scanf("%d",&cm);
  foot = cm / 30.48;
  inch= 12 * (cm / 30.48 - foot);;
  printf("%d %d\n",foot,inch);
  return 0;
}
