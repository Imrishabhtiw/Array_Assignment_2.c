#include <stdio.h>
int main()
{
    int M, N, i, j;
    printf("Enter row size");
    scanf("%d", &M);
    printf("Enter column size");
    scanf("%d", &N);
    int a[M][N];
    printf("Enter array elements :\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Enter index %d%d-", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Array in tabular form :-\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
            printf("%d", a[i][j]);
        printf("\n");
    }
    return 0;
}



#include <stdio.h>
int main()
{
    int M, N, i, j, s=0;
    float avg;
    printf("Enter row size");
    scanf("%d", &M);
    printf("Enter column size");
    scanf("%d", &N);
    int a[M][N];
    printf("Enter array elements :\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Enter index %d%d-", i, j);
            scanf("%d", &a[i][j]);
            s = s + a[i][j];
        }
    }
    avg = s / (M * N);
    printf("Sum=%d\n Average = %f\n", s, avg);
    return 0;
}



#include <stdio.h>
int main()
{
    int M, N, i, j, s=0;
    printf("Enter row size");
    scanf("%d", &M);
    printf("Enter column size");
    scanf("%d", &N);
    int a[M][N];
    printf("Enter array elements :\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Enter index %d%d-", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        
            s+=a[i][j];
            printf("Sum of row %d = %d\n",i+1,s);
            s=0;
    }
    for(j=0;j<N;j++)
    {
        for(i=0;i<M;i++)
        s+=a[i][j];
        printf("Sum of columns %d = %d\n",j+1,s);
        s=0;
    }
    return 0;
}



#include <stdio.h>
int main()
{
    int M, N, i, j;
    printf("Enter row size");
    scanf("%d", &M);
    printf("Enter column size");
    scanf("%d", &N);
    int a[M][N];
    printf("Enter array elements :\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Enter index %d%d-", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == 0 || j == 0 || i == M - 1 || j == N - 1)
                printf("%d\t", a[i][j]);
            else
                printf("\t");
        }
        printf("\n");
    }
    return 0;
}



#include <stdio.h>
int main()
{
    int M, N, i, j;
    printf("Enter row size");
    scanf("%d", &M);
    printf("Enter column size");
    scanf("%d", &N);
    int a[M][N];
    printf("Enter array elements :\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Enter index %d%d-", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Transpose of the matrix :-\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
            printf("%d\t", a[j][i]);
        printf("\n");
    }
    return 0;
}



#include<stdio.h>
int main()
{
    int M,N,i,j,s=0;
    printf("Enter row size:");
    scanf("%d",&M);
    printf("Enter column size:");
    scanf("%d",&N);
    int a[M][N];
    if(M==N)
    {
        printf("Enter matrix elements :-\n");
        for(i=0;i<M;i++)
        {
            for(j=0;j<M;j++)
            {
                printf("At index %d%d-",i,j);
                scanf("%d",&a[i][j]);
                if(i==j)
                s+=a[i][j];
            }
        }
        printf("Sum of diagonal elements = %d",s);
    }
        else
    printf("Not possible");
    return 0;
}



#include <stdio.h>
int main()
{
    int M, N, i, j, s = 0;
    printf("Enter row size:");
    scanf("%d", &M);
    printf("Enter column size:");
    scanf("%d", &N);
    int a[M][N];
    if (M == N)
    {
        printf("Enter matrix elements :-\n");
        for (i = 0; i < M; i++)
        {
            for (j = 0; j < M; j++)
            {
                printf("At index %d%d-", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < M; i++)
        {
            for (j = 0; j < M; j++)
            {
                if (i == j)
                    printf("%d\t", a[i][j]);
                else
                    printf("\t");
            }
            printf("\n");
        }
    }
    else
        printf("Not possible");
    return 0;
}
