#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,c=0;
    char str[1001];
    scanf("%s",str);
    int len=strlen(str);
    int mid=len/2;
        for(i=len;i>0;i--)
        {
            for(j=0;j<i;j++)
            {
            if(c+j<=len-2)
                printf("  ");
             
            for(k=0;k<=c;k++)
            {
                 if(c+j>len-2&&c+j<=len)
                if(mid+k>len-1)
                    printf("%c ",str[(mid+k)-len]);
                else
                printf("%c ",str[mid+k]);
            }
            }
            printf("\n");
            c++;
        }
    return 0;
}
