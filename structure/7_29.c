#include "stdio.h"
#include "string.h"
int main(){
  char s1[100];
  char s2[100];
  char temp[100];
  gets(s1);
  gets(s2);
  while(strstr(s1,s2)!=NULL){
      int s1_len = strlen(s1);
      int s2_len = strlen(s2);
      strcpy(temp,strstr(s1,s2));
      int t_len = strlen(temp);
      strcpy(s1+s1_len-t_len,temp+s2_len);
  }
  puts(s1);
}
