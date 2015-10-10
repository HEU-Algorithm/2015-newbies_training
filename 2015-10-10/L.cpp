//L
#include <stdio.h>
#include <string.h>
char str[1001];
int t;
int main()
{
    char r;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int i,j,k,len;
        gets(str);
        len=strlen(str);
        for(i=0,j=0; i<len;)
        {
            while(str[i]!=' '&&i<len)
            {
                i++;
            }
            for(k=i-1; k>=j; k--)
            {
                printf("%c",str[k]);
            }
            while(str[i]==' '&&i<len)
            {
                printf(" ");
                i++;
            }
            j=i;
        }
        printf("\n");
    }
}
