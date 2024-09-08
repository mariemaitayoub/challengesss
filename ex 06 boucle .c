#include <stdio.h>




int main() {
 int base ,exposant,r=1 ;
 printf("base est :");
 scanf("%d",&base);

    printf("exposant est :");
 scanf("%d",&exposant);

   for(int i=0;i<exposant;i++){
    r*=base;
   }


printf("%d",r);

    return 0;
}
