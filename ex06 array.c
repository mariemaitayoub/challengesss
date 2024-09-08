#include <stdio.h>

int main() {

int n ,i,t[22],fac;
printf("les elements est :");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("l'element est :");
    scanf("%d",&t[i]);



}

printf("facteur est :");
scanf("%d",&fac);
for(i=0;i<n;i++){

   fac*=t[i];
}


printf("le produit :%d",fac);




    return 0;
}
