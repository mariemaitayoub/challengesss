#include <stdio.h>

int main()
{
    int t[34],n,remp,nov;
    printf("n est :");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("l'element est :");
        scanf("%d",&t[i]);
    }
    printf("la valeur a remp :");
    scanf("%d",&remp);

    printf("la nouvelle valeur :");
    scanf("%d",&nov);
    for(int i=0; i<n; i++)
    {
        if(t[i]==remp)
        {
            t[i]=nov;
        }

    }
    for(int i =0;i<n;i++){

        printf("%d",t[i]);
    }

    return 0;
}
