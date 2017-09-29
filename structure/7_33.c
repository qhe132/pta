#include "stdio.h"
int main(){
  int a1,b1,a2,b2;
  char c1,c2;
  scanf("%d%c%d %d%c%d",&a1,&c1,&b1,&a2,&c2,&b2);
  int m,n;
  m = a1*b2+a2*b1;
  n = b1*b2;
  int i = m;
  if(m>n) i = n;
  for(i = i;i>=1;i--){
      if(m%i==0 && n%i==0){
        m /= i;
        n /= i;
      }
  }
  if(n == 1) printf("%d",m);
  else printf("%d/%d",m,n);
  printf("\n");
  return 0;
}
