#include "stdio.h"
#include "string.h"

int main(){
  int n;
  int k;
  char s[100][11];
  scanf("%d %d",&n,&k);
  for(int i = 0;i<n;i++){
    scanf("%s",s[i]);
  }
  for(int i = 0;i<k;i++){
    for(int j = 0;j<n-i-1;j++){
      if(strcmp(s[j],s[j+1])>0){
          char temp[11];
          strcpy(temp,s[j]);
          strcpy(s[j],s[j+1]);
          strcpy(s[j+1],temp);
      }
    }
  }
  for(int i=0;i<n;i++){
    printf("%s\n",s[i]);
  }
  return 0;
}
