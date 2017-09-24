#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[],  int N);

int main(){
  ElementType A[MAXN];
  int N,i;

  scanf("%d",&N);
  for( i =0;i<N;i++){
    scanf("%f",&A[i]);
  }
  printf("%.2f\n",Median(A, N));
}

ElementType Median( ElementType A[], int N )
{
    int i,j,tab;
    ElementType k;
    for (tab=N>>1; tab>0; tab>>=1){
        for (i=tab; i<N; ++i){
            for (j=i-tab; j>=0&&A[j]>A[j+tab]; j-=tab){
                k=A[j];
                A[j]=A[j+tab];
                A[j+tab]=k;
            }
        }
    }
    return A[N>>1];
}
