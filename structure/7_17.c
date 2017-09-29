#include<stdio.h>
int main(){
  int N,U,D;
  int n = 0;
  scanf("%d %d %d",&N,&U,&D);
  while((U-D)*n < (N-U)){
    n++;
  }
  printf("%d\n",n*2 + 1);
  return 0;
}
