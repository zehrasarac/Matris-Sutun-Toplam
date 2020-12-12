#include<stdio.h>

int main(){
    int i,j,satir,sutun,a[5][5],toplam,sira;

    printf("Lütfen satır ve sütun numarasını girin:");
    scanf("%d%d",&i,&j);

    printf("Lütfen matris satır ve sütun değerlerini girin:");
    for (satir = 0; satir < i; satir++)
    {
       for ( sutun = 0; sutun < j; sutun++)
       {
           scanf("%d",&a[satir][sutun]);
       }
    }

    for (sutun = 0; sutun < j; sutun++)
    {
       toplam = 0;
       for (satir = 0; satir < i; satir++ )
       {
           toplam = toplam + a[satir][sutun];
       }
       printf("%d. Sütunun Toplamı:%d\n",sutun+1,toplam);
    
    }

}