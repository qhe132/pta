#include "stdio.h"
int main(){
  int a;
  int b;
  char c;
  scanf("%d%c%d",&a,&c,&b);
  int m = a;
  if(a>b){
    m = b;
  }
  for(m = m;m>=1;m--){
    if((a%m==0)&&(b%m==0)){
      a = a/m;
      b = b/m;
    }
  }
  printf("%d/%d\n",a,b);
  return 0;
}
