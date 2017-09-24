#include "stdio.h"
int main(){
  int n;
  scanf("%d",&n);
  int counter = 0;
  int a[4] = {n,n+1,n+2,n+3};
  for(int i=0;i<4;i++){
    counter = 0;
    for(int j=0;j<4;j++){
      if(a[j]!=a[i]){
        for(int k=0;k<4;k++){
          if((a[k]!=a[j])&&(a[k]!=a[i])){
            counter ++;
            if(counter % 6)
              printf("%d%d%d ",a[i],a[j],a[k]);
            else
              printf("%d%d%d\n",a[i],a[j],a[k]);
          }
        }     }
    }
  }
}
