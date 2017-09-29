#include "stdio.h"
int main(){
  int sum[1000000];
  int a,n;
  int j = 0;
  scanf("%d%d",&a,&n);
  if(n == 0) printf("0\n");
  else{
    int k = 0;
    int t;
    for(int i=n;i>0;i--){
      t = a*i + k;
      k = t/10;
      sum[j] = t % 10;
      j++;
    }
    while(k!=0){
      sum[j] = k%10;
      j++;
      k /= 10;
    }
    }
    for(int i = j-1;i>=0;i--)
    printf("%d",sum[i]);
    printf("\n");
    return 0;
  }
