#include "stdio.h"
int main(){
  int t;
  int ro = 0;
  int to = 0;
  scanf("%d",&t);
  int i = 0;
  if(t<=10){
    printf("^_^ %d\n",t*9);
    return 0;
  }
  while(i<t){
     if(i+10<=t){
       i += 10;
      to += 3*10;
      ro += 9*10;
     }else{
      ro += (t-i)*9;
      to += (t-i)*3;
      if(to>ro) printf("@_@ %d",to);
          else if(ro>to) printf("^_^ %d",ro);
          else printf("-_- %d",ro);
          printf("\n");
          return 0;
     }
      if(ro>to){
        if(i+30<=t){
          ro += 0;
          to += 90;
          i+=30;
        }else{
          ro += 0;
          to += (t-i)*3;
          if(to>ro) printf("@_@ %d",to);
          else if(ro>to) printf("^_^ %d",ro);
          else printf("-_- %d",ro);
          printf("\n");
          return 0;
        }
      }
  }
  if(to>ro) printf("@_@ %d",to);
          else if(ro>to) printf("^_^ %d",ro);
          else printf("-_- %d",ro);
          printf("\n");
  return 0;
}
