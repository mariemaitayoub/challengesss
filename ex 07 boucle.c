#include <stdio.h>

int main() {

unsigned int n,comp=0 ;
printf("n est :");
scanf("%d",&n);
 if(n==0){
    comp=1;
 }
else{
    while(n!=0){
n/=10;
comp++;}
}
printf("Nombre de chiffres = %d\n", comp);







    return 0;
}
