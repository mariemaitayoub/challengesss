#include <stdio.h>

int main() {
int max,n,T[100];
printf("n est :");
scanf("%d",&n);
for(int i=0;i<n;i++){
  printf("l'element est :") ;
  scanf("%d",&T[i]);
}for(int i=0;i<n;i++){
   if(T[i]>max){
    max=T[i];
   }
}

printf("max est :%d",max);








    return 0;
}
