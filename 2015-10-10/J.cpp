//J
#include<stdio.h>
int main()
{
    char a,b,c,t;
    while((a=getchar(),b=getchar(),c=getchar())!=EOF)
    {
        getchar();
        if(a>b)
        {
            t=a,a=b,b=t;
        }
        if(b>c)
        {
            t=b,b=c,c=t;
        }
        if(a>b)
        {
            t=a,a=b,b=t;
        }
        printf("%c %c %c\n",a,b,c);
    }
    return 0;
}
