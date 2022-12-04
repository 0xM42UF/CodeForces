#include <stdio.h>
int main()
{
    int N,K,i;
    scanf("%d %d",&N,&K);
    int arr[51];
    for(i=1;i<=N;i++)
    {
       scanf("%d",&arr[i]);
    }
    int ans=0;
    for(i=1;i<=N;i++)
    {
       if(arr[i]>=arr[K] && arr[i]>0)
       {
           ans++;
       }
    }
    printf("%d",ans);
    return 0;
}
