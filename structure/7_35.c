#include "stdio.h"
#define N 100
struct R{
  int n;
  int d;
};
int gcd(int m,int n){
  if(m == 0&&n == 0){
    return 0;
  }else if(m == 0){
    return n;
  }else if(n == 0){
    return m;
  }else{
    int r;
    while(1){
      r = m%n;
      if(r == 0) break;
      m = n;
      n = r;
    }
    return n;
  }
}
int main(){
  struct R ra[N],r;
  int n;
  scanf("%d",&n);
  for(int i = 0;i<n;i++){
    scanf("%d/%d",&ra[i].n,&ra[i].d);
  }
  r.n = 0;
  r.d = 1;
  for(int i=0;i<n;i++){
    r.n = r.n * ra[i].d + r.d*ra[i].n;
    r.d = r.d * ra[i].d;
  }
  r.d *= n;
  int g = gcd(r.n,r.d);
  if(g!=0){
    r.n /= g;
    r.d /= g;
  }
  if(r.d == 1){
    printf("%d\n",r.n);
  }else if(r.n == 0){
    printf("0\n");
  }else{
    printf("%d/%d\n",r.n,r.d);
  }
  return 0;
}
