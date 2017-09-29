#include "stdio.h"
int main(){
  int n;
  scanf("%d",&n);
  int counter = 0;
  int k = 0;
  int i = 0;
  int a[1000];
  for(i = 0;i<n;i++){
    a[i] = 1;
  }
  i = 0;
  int m = n;
  while(n>1){
    if(a[i] == 1){
      k++;
    }
    if(k == 3&&a[i] == 1){
      a[i] = 0;
      n--;
      k = 0;
    }
    i++;
    if(i%m == 0&&i != 0){
      i = 0;
    }
  }
  for(i = 0;i<m;i++) {
    if(a[i] == 1){
      printf("%d\n",i+1);
    }
  }
}
