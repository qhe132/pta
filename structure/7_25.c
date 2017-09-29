#include "stdio.h"
int main(){
  char a[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
  int n;
  scanf("%d",&n);
  if(n<0){
    printf("fu ");
    n = -n;
  }
  int m = 1;
  int t = n;
  while(t>9){
    t/=10;
    m *= 10;
  }
  while(m){
    int i = n/m;
    printf("%s",a[i]);
    n %= m;
    if(m > 9){
      printf(" ");
    }
    m /= 10;
  }
  printf("\n");
  return 0;
}
