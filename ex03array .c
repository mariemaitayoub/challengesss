#include <stdio.h>

int main() {

int n,sum=0,T[100];
printf("n est :");
scanf("%d",&n);
for (int i=0;i<n;i++){
   printf("L'ELEMENT EST :");
scanf("%d",&T[i]);
}

for(int i=0;i<n;i++){
 sum=sum+T[i];

}
printf("somme est :%d",sum);


    return 0;
}
