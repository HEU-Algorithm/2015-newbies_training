//I
#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int year,cnt;
        scanf("%d%d",&year,&cnt);
        for(int i=0; i<cnt;)
        {
            if (year%4==0 && year%100!=0 || year%400==0)
            {
                i++;
            }
            year++;
        }
        printf("%d\n",year-1);
    }
    return 0;
}
