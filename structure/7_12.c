#include "stdio.h"
int main(){
  int a,b;
  char c;
  int an;
  int flag = 1;
  scanf("%d %c %d",&a,&c,&b);
  if(c == '+'){
      an = a + b;
  }else if(c == '-'){
    an = a - b;
  }else if( c == '*'){
    an = a * b;
  }else if( c== '/'){
    an = a / b;
  }else if( c == '%'){
      an = a % b;
  }else{
    flag = 0;
  }
  if(flag == 1){
  printf("%d\n",an);
}else{
  printf("ERROR\n");
}
    return 0;
}
