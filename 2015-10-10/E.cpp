//E
#include<stdio.h>
int main()
{
    int n,a,i,sum,T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        sum=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a);
            sum+=a;
        }
        printf("%d\n",sum);
    }
    return 0;
}
