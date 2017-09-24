#include <stdio.h>

int Count_Digit ( const int N, const int D );

int main()
{
    int N, D;

    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

int Count_Digit ( const int N, const int D){
  int num[10] = {0};
  int i;
  int m = N;
  if(N<0){
    m = -N;
  }
  while(m>0){
    for(i = 0;i< 10;i++){
      if(m%10 == i){
        num[i]+=1;
      }
    }
    m/=10;
  }
  if(N == 0){
    num[D] = 1;
  }
    return num[D];
}
