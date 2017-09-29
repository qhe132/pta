#include "stdio.h"
int main(){
  int n;
  int f;
  int y = -1;
  scanf("%d",&n);
  for(int i = 0;i<=99;i++){
    if((98*i - n) % 199 == 0){
      y = (98 * i - n) / 199;
      f = i;
    }
  }
  if(y == -1){
    printf("No Solution\n");
  }else{
    printf("%d.%d\n",y,f);
  }
  return 0;
}
