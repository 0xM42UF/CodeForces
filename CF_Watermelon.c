#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w;

    printf("");
    scanf("%d",&w);
    if (w==2)
    {
        printf("NO");
    }
    else if (w%2==0)
    {
        printf("YES");

    }
    else
    {
        printf("NO");
    }

    return 0;
}
