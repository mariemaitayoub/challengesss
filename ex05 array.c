#include <stdio.h>

int main() {

int min,i,n,t[555];
min=t[1];
printf("les elements sont :");
scanf("%d",&n);
for(i=0;i<n;i++){
   printf("l'element est :");
   scanf("%d",&t[i]);
}
for(i=0;i<n;i++){
if(t[i]<min){
min=t[i];

}


}
printf("le min est :%d",min);








    return 0;
}
