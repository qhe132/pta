#include<stdio.h>
int main(){
  int ball[3];
  scanf("%d %d %d",&ball[0],&ball[1],&ball[2]);
    if(ball[0] == ball[1]){
      printf("c");
    }else if(ball[0] == ball[2]){
      printf("b");
    }else{
      printf("a");
    }
    printf("\n");
    return 0;
}
