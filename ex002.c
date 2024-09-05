#include <stdio.h>
int main() {

 int age,type_voiture,num_accident;
 double prime,prime_base ;
 printf("age de conducteur ");
 scanf("%d",&age);
     printf("type_voiture");
 scanf("%d",&type_voiture);
     printf("num_accident");
 scanf("%d",num_accident);

 printf("prime est");
    scanf("%d",&prime);
      prime=prime_base;
 printf("primebase est%d ",prime_base);
      if (age>25){
      prime=prime_base*1.5;
              printf("prime est %d",prime);

      }
      else if (25<age <65){
              prime=prime_base*1.2;
              printf("prime est %d",prime);
              }
      switch (type_voiture){
      case 1: //voi spor
      prime =prime_base*2;
      break;
      case 2:prime =prime_base*1.2;
      break;
      case 3:prime =prime_base*1.1;
      }

      if(num_accident>1){
        printf("Ajoutez 30% à la prime");
      }











   return 0;
}
