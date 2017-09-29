#include "stdio.h"
int n;
int s[31];
int last = -1;
int counter = 0;
int sum = 0;

void div(int i){
  if(sum == n){
    counter ++;
    printf("%d=",n);
    for(int k = 0;k<last;k++){
      printf("%d+",s[k]);
    }
    if(counter % 4 == 0 || s[last] == n){
      printf("%d\n",s[last]);
    }else{
      printf("%d;",s[last]);
    }
    return ;
  }
  if(sum > n){
    return ;
  }
  for(int j = i;j<=n;j++){
    sum+=j;
    s[++last] = j;
    div(j);
    sum -=j;
    last --;
  }
}

int main(){
  scanf("%d",&n);
  div(1);
  return 0;
}
