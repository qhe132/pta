#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int main(){
  char *a;
  a = (char *)malloc(500000*sizeof(a));
  int len = 0;
  gets(a);
  int n = strlen(a);
  int flag = 0;
  for(int i = n-1;i>=0;i--){
      if(a[i]!=' ') len ++;
      else if(len != 0){
        if(flag != 0) putchar(' ');
        flag = 1;
        len = 0;
        a[i] = '\0';
        printf("%s",a+i+1);
      }else{
        a[i] = '\0';
      }
  }
  if(flag && len) putchar(' ');
  if(len) printf("%s",a);
  printf("\n");
  return 0;
}
