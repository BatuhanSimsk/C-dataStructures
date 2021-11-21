#include <stdio.h>
#include <stdbool.h>
int asalMi(int i,int sayi)
{
    if(sayi==1)
    {                                       
        return 0;                          //asal kontrolcüsü olarak kullandigim i degiskeni 2 olduğu için
    }                                     //1 i özel olarak kontrol edemiyordu(1<i oldugu icin) bu yuzden 1 icin asal olmama durumunu
                                         // ozel olarak tanimladim
    
    
    if(sayi==i)
    {                                       
        return 1;                          //asal olmayan sayilar icin 0 döndürmesi gerekiyor, o yüzden return 1
    }                                     
    else
    {
        if(sayi%i==0)
        {
            return 0;                      //asal  sayilar icin 1 döndürmesi gerekiyor, o yüzden return 0
        }
        else
        {
            return asalMi(i+1,sayi);
        }
    }
}

int main()
{
    int sayi;
    printf("Sayiyi girin:");
    scanf("%d",&sayi);

    bool x=asalMi(2,sayi);
    printf("%d",x);

}