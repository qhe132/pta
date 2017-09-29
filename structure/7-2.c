#include "stdio.h"
int main(){
  int a[100000];
  int max = -1;
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int sum = 0;
  int m,k;
  int h = 0;
  for(int i=0;i<n;i++){
      sum += a[i];
      if(sum > max){
        max = sum;
        m = h;
        k = i;
      }else if(sum < 0){
        sum = 0;
        h = i+1;
      }
  }
  if(sum>=0){
  printf("%d %d %d\n",max,a[m],a[k]);
}else{
  printf("0 %d %d\n",a[0],a[n-1]);
}
  return 0;
}
