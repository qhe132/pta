#include "stdio.h"
int main(){
  int a[100000];
  int max = 0;
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int sum = 0;
  for(int i=0;i<n;i++){
      sum += a[i];
      if(sum > max){
        max = sum;
      }else if(sum < 0){
        sum = 0;
      }
  }
  printf("%d\n",max);
  return 0;
}
