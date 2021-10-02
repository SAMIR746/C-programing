// Project Name   - prims_min_span_tree.c
// Author Name    - Md. Samir Amin
// Author E-mail  - samiramin.cse.52@gmail.com
// Created On     - 10/02/21, 08:25:35 PM

#include<stdio.h>

#define infinity 9999
#define MAX 20

void add_adjacency_matrix(int G[][MAX], int visitedp[],int n);
void prims(int G[][MAX],int visited[MAX], int n );

int main()
{
    int G[MAX][MAX],visited[MAX]={0},n;

    printf("Enter no. of vertices:");
    scanf("%d",&n);

    add_adjacency_matrix(G,visited,n);
    prims(G,visited,n );

    return 0;
}

void add_adjacency_matrix(int G[][MAX],int visited[], int n)
{
    int i,j;
    printf("\nEnter the adjacency matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            scanf("%d",&G[i][j]);
            if(G[i][j]==0)
            G[i][j]=infinity;
        }
    }
     visited[1]=1;
    printf("\n");
}

void prims(int G[][MAX],int visited[MAX], int n )
{
     int a,b,u,v,i,j,ne=1,min,mincost=0;


     for(i=0;i<n;i++){
         visited[i]=0;
         for(j=0;j<n;j++)
         {
             if(G[i][j]==0)
                 G[i][j]=infinity;

        }
     }
    visited[0]=1;
    printf("\n");
    while(ne < n)
    {for(i=0,min=infinity;i<n;i++)
        for(j=0;j<n;j++)
            if(G[i][j]< min)
                if(visited[i]!=0)
                {
                    min=G[i][j];
                    a=u=i;b=v=j;

                }
                if(visited[v]==0 || visited[u]==0)
                {
                    printf("\nEdge %d:(%d %d) cost:%d",ne++,a,b,min);
                    mincost+=min;
                    visited[b]=1;

                }
                G[a][b]=G[b][a]=infinity;

    }
    printf("\nTotal cost=%d",mincost);


}
