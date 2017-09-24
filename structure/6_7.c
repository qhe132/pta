#include <stdio.h>

int Factorial( const int N );

int main()
{
    int N, NF;

    scanf("%d", &N);
    NF = Factorial(N);
    if (NF)  printf("%d! = %d\n", N, NF);
    else printf("Invalid input\n");

    return 0;
}

int Factorial( const int N){
  int Fac = 1;
  int i;
  for(i = N;i>1;i--){
    Fac *= i;
  }
  if(N<0){
    Fac = 0;
  }
  return Fac;
}
