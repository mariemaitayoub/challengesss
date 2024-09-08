#include <stdio.h>

int main()
{
    int n,T[10];
    printf("donner le nbre d'elememt :");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
printf("le nbre d'element :");
scanf("%d",&T[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\n",T[i]);
    }

    return 0;
}
