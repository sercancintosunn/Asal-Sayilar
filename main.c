#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//Kullan�ca��m de�i�kenleri tan�mlad�m.
	int sayi1,sayi2,i,j;
	int asal,toplam = 0,adet = 0;
	float ort;
	
	printf("----------Girilen 2 Sayi Arasindaki Asal Sayilari ve Bu Asal Sayilarin Ortalamasini Bulma----------\n\n");
	
	printf("Birinci Sayiyi Giriniz: "); //Kullan�c�dan 2 sayi girmesini istedim.
	scanf("%d",&sayi1);
	
	printf("Ikinci Sayiyi Giriniz: ");
	scanf("%d",&sayi2);
	
	if(sayi1 < sayi2) //Kullan�c� sayi1 i sayi2 den b�y�k girebilir diye ay�rd�m.
	{
		for(i = sayi1+1; i < sayi2; i++)
		{
			asal = 1;
			for(j = 2; j  < i; j++) //j yi 2 den ba�latma sebebim 1 i de asal kabul etti�i i�in.
			{
				if(i%j == 0)
				{
					asal++; // i nin j ye g�re modu 0 alursa asal� art�racak.
				}
			}// �lk ba�ta b�t�n say�lar� asal kabul ettim. j ye b�l�nd���nde kalan olmazsa asal� bir art�racak.Art�rmazsa sayi asald�r
			// sayi1 >= 1 yapma nedenim 1 i de asal kabul etmesi.
			if(asal == 1 && sayi1 >= 1)
			{
				printf("%d ",i);
				toplam += i;
				adet++;
			}
		}
		if(adet > 0)
		{
			ort = (double) toplam / adet; // Ortalama tam say� ��kmayabilir diye de�i�ken d�n��t�rme kulland�m.
			printf("\nAsal Sayilarin Ortalamasi: %.2f",ort);
		}
		else // adet 0 olursa aralar�nda asal say� yokturu bast�rd�m.
		{
			printf("Aralarinda Asal Sayi Yoktur.");
		}
	}
	else if(sayi2 < sayi1) // sayi1 i sayi2 den b�y�k girebilir diye ay�rd�m.
	{
		for(i = sayi2+1; i < sayi1; i++)
		{
			asal = 1;
			for(j = 2; j < i; j++)
			{
				if(i%j == 0)
				{
					asal++;
				}
			}
			if(asal == 1 && sayi2 >= 1)
			{
				printf("%d ",i);
				toplam += i;
				adet++;
			}
		}
		if(adet > 0)
		{
			ort = (double) toplam / adet;
			printf("\nAsal Sayilarin Ortalamasi: %.2f",ort);
		}
		else
		{
			printf("Aralarinda Asal Sayi Yoktur.");
		}
	}
	
	return 0;
}
