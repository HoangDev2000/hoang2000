#include<stdio.h>

void nhap(int *a, int *n){
    while(*n < 1){
        scanf("%d",n);
    }
    int i;
    for(i = 0; i < *n; i++){
        scanf("%d",&a[i]);
    }
}
void sapXep(int *a, int n){
    int i,j;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n ; j++){
            if(a[j] < a[i]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nDay duoc sap xep tang dan la: \n");
    for(i = 0;i < n; i++){
        printf("%d\t",a[i]);
    }
    printf("\n\n");
}
void timMinMax(int *a,int n){
    int min,max;
    for(int i = 0; i < n; i++){
        if(sapXep){
            min = a[0];
            max = a[n-1];
        }
    }
    printf("\nMin = %d\nMax = %d\n",min,max);
}
void dem(int *a, int n){
    int b[n];
    int i;
    for(i = 0; i < n;i++){
        b[i] = 1;
    }
    for(i = 0 ; i < n ; i++){
        int count = 1;
        if(b[i]){
            b[i] = 0;
            for(int j = i+1; j < n; j++){
                if(a[j] == a[i]){
                    count++;
                    b[j] = 0;
                }
            }
            printf("So %d xuat hien voi tan suat %d lan\n",a[i],count);
        }
    }
}
int count(int *a,int n,int x){
    int k = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            k++;
        }
    }
    return k;
}
int count1(int *a,int n){
    int k = count(a,n,a[0]);
    int k1;
    int index = 0;
    for(int i = 0; i < n;i++){
        k1 = count(a,n,a[i]);
        if(k < k1){
            k = k1;
            index = i;
        }
    }
    return a[index];
}
void Fmax(int *a,int n){
    int fmax = count(a,n,count1(a,n));
    printf("\nCac so xuat hien voi tan so lon nhat la: ");
    for(int i = 0; i < n; i++){
        if(count(a,n,a[i]) == fmax && a[i] != a[i+1]){
            printf("%d, ",a[i]);
        }
    }
    printf("xuat hien %d lan",fmax);
}
int main(){ 
    int n = 0;
    int a[100];
    nhap(a,&n);
    sapXep(a,n);
    timMinMax(a,n);
    dem(a,n);
    Fmax(a,n);

    return 0;
}