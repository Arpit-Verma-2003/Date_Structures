#include<stdio.h>
int main()
{
    int cost[10][10],i,j,n,source,target;
    int visited[10],min=1000,dist[10],pre[10];
    int start ,m,d,path[10];
    printf("enter no. of nodes:");
    scanf("%d",&n);
    printf("enter weight of all the path in adjacent matrix:");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
                cost[i][j]=1000;
        }
    }
    printf("enter the source:");
    scanf("%d",&source);
    printf("enter the target:");
    scanf("%d",&target);
    start=source;
    for(i=1;i<=n;i++)
    {
        dist[i]=1000;
        pre[i]=-1;
    }
    visited[source]=1;
    dist[source]=0;

    while (visited[target]==0)
    {
        min=1000;
        m=0;
        for(i=1;i<=n;i++)
        {
            d=dist[start]+cost[start][i];
            if(d<dist[i]&&visited[i]==0)
            {
                dist[i]=d;
                pre[i]=start;
            }

            if (min>dist[i]&&visited[i]==0)
            {
                min=dist[i];
                m=i;
            }
        }
        start=m;
        visited[m]=1;
    }
    start=target;
    j=0;
    while (start!=1)
    {
        path[j++]=start;
        start=pre[start];
    }
    for(i=j-1;i>=0;i--)
    {
        if(i!=j-1)
        {
            printf("to");
            printf("%d",path[i]);
        }
    }
    printf("shortest path is %d",dist[target]);
    return 0;
}
