#include "stdio.h"
#include "math.h"
int main(){
  int n;
  int flag = 0;
  scanf("%d",&n);
  for(int y = sqrt(n);y>=sqrt(n)/2;y--){
    for(int x = 1;x<y;x++){
      if(x*x+y*y == n){
        printf("%d %d\n",x,y);
        flag = 1;
      }
    }
  }
  if(flag == 0){
    printf("No Solution");
  }
}
