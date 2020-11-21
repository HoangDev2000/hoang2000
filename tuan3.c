#include<stdio.h>

void nhap(int *arr[][100],int *m,int *n)
{
    while((*m) <= 0 || (*n) <= 0 || (*m) != (*n))
    {
        printf("\nNhap gia tri m va n : \n");
        scanf("%d%d",m,n);
    }
    int i,j;
    for(i = 0; i < *m; i++)
    {
        for(j = 0; j < *n; j++)
        {
            printf("\narr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}
void xuat(int *arr[][100],int m,int n)
{
    int i,j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int m = 0, n = 0;
    int arr[100][100];
    nhap(arr,&m,&n);
    xuat(arr,m,n);

    return 0;
}