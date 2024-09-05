#include <stdio.h>
int main() {

int nombre,distination;
float budget;

printf("nombre du pers");
scanf("%d",&nombre);
printf("distination ");
scanf("%d",&distination);
printf("budget");
scanf("%f",&budget);

if (budget >=1000)
    printf("haut gamme");
else if (500<budget<10000)
    printf("voyage moyen");
else
    printf ("voyage eco");











switch (distination){
case 1 : //plage
  if (budget>=1000&&nombre>2)
  printf("plage");

  else
  printf("hhhhhhh");




break;
case 2 :// montage;
 if (budget>=500&&nombre<=2)
  printf("montage");

  else
  printf("hhh");







break;
case 3 ://ville;
  printf("ville");
default :
    printf("non");

break;
}














   return 0;
}
