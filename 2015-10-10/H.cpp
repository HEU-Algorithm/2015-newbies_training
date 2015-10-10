//H
#include<stdio.h>
int main()
{
    int n,a,i,T,sum;
    scanf("%d",&T);
    sum=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a);
        sum+=a;
    }
    printf("%d\n",sum);
    T--;
    while(T--)
    {
        sum=0;
        printf("\n");
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a);
            sum+=a;
        }
        printf("%d\n",sum);
    }
    return 0;
}
