#include "stdio.h"
#include "string.h"

int main(){
  char s1[1000];
  gets(s1);
  int a;
  scanf("%d",&a);
  a %= strlen(s1);
  for(int i = a;i<strlen(s1);i++){
    printf("%c",s1[i]);
  }
  for(int i = 0;i<a;i++){
    printf("%c",s1[i]);
  }
  printf("\n");
  return 0;
}
