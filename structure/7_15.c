#include "stdio.h"
int main(){
  double ans = 1;
  double k = 1;
  double ki;
  int n = 0;
  scanf("%lf",&ki);
  while(k > ki){
    n++;
    k *= 1.0 * n/(2 * n + 1);
    ans += k;
  }
  printf("%.6lf\n",2 * ans);
  return 0;
}
