#include <stdio.h>
int main(){
  char a[3];
  int i;
  scanf("%s",a);
  for(i = 2;i>=0;i--){
    if(a[i] == '0'){
      continue;
    }else{
      printf("%c",a[i]);
    }
  }
  printf("\n");
  return 0;
}
