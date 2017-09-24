#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;

    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

void Print_Factorial( const int N) {
  long i,s = 1;
  if(N>=0&&N<=12){
    for(i = 2;i<=N;i++){
      s*=i;
    }
    printf("%ld\n",s);
  }else if(N>=13&&N<=1000){
    int num[3000] = {0};
    num[0] = 1;
    int k = 1;
    int n = 0;
    int temp;
    for(int i = 2;i<=N;i++){
      for(int j=0;j<k;j++){
        temp = num[j]*i+n;
        num[j] = temp%10;
        n = temp/10;
      }
      while(n!=0){
        num[k] = n%10;
        n/=10;
        k++;
      }
    }
    for(int x=k-1;x>=0;x--){
      printf("%d",num[x]);
    }
  }else{
    printf("%s\n","Invalid input");
  }
}
