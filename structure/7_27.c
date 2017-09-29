#include<stdio.h>
int main(){
   int n,k;
   scanf("%d %d",&n,&k);
   int a[100];
   int i;
   for(i=0;i<n;i++) scanf("%d",&a[i]);
   for(i=0;i<k;i++){
       for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
       }
   }
   for(i = 0;i<n-1;i++)
        printf("%d ",a[i]);
    printf("%d\n",a[i]);
}