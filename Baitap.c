// Bai tap lap trinh nang cao 
#include<stdio.h>
#include<stdbool.h>

bool Blum(int n)
{
    int i = 2;
    int count = 0;
    while(n > 1)//Phan tich ra thua so nguyen to
    {
        if( n % i == 0)
        {
            count ++;
            n /= i;
        }else{
            i++;
        }
    }
    if(count != 2)//Kiem tra N,neu count = 2 thi N la so Blum 
    {
        return false;
    }else{
        return true;
    }
}
void timNT(int n)//Ham tim hai thua so nguyen to neu N la so Blum
{
    int m;
    do{
        printf("\nNhap so Blum bat ky : \n");
        scanf("%d",&m);
        printf("%d = ",m);
        if(Blum(m))
        {
            int i = 2;
            int count = 0;
            while( m > 1)
            {
                if( m % i == 0)
                {
                    count ++;
                    if( m == i)
                    {
                        printf("%d^%d",i,count);
                    }
                    m /= i;
                }else{
                    if(count > 0)
                    {
                        printf("%d^%d x ",i,count);
                        count = 0;
                    }
                    i++;
                }
            }
        }
    }while(m != Blum(n));
}
int main()
{
    int n,m,i;
    do{
        printf("Nhap n >= 1 : ");
        scanf("%d",&n);
    }while( n < 1 );
    if( n == 1){
        printf("\nN khong phai la so Blum");
    }
    if(Blum(n))
    {
        printf("\nN la so Blum\n\n");
    }
    for( i = 1 ; i <= n ; i++){
        if(Blum(i))
        {
            printf("%d, ",i);//in ra cac so Blum trong khoang tu 1 den N
        }
    }
    printf("\n");
    timNT(n);

    return 0;
}