#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//Kullanýcaðým deðiþkenleri tanýmladým.
	int sayi1,sayi2,i,j;
	int asal,toplam = 0,adet = 0;
	float ort;
	
	printf("----------Girilen 2 Sayi Arasindaki Asal Sayilari ve Bu Asal Sayilarin Ortalamasini Bulma----------\n\n");
	
	printf("Birinci Sayiyi Giriniz: "); //Kullanýcýdan 2 sayi girmesini istedim.
	scanf("%d",&sayi1);
	
	printf("Ikinci Sayiyi Giriniz: ");
	scanf("%d",&sayi2);
	
	if(sayi1 < sayi2) //Kullanýcý sayi1 i sayi2 den büyük girebilir diye ayýrdým.
	{
		for(i = sayi1+1; i < sayi2; i++)
		{
			asal = 1;
			for(j = 2; j  < i; j++) //j yi 2 den baþlatma sebebim 1 i de asal kabul ettiði için.
			{
				if(i%j == 0)
				{
					asal++; // i nin j ye göre modu 0 alursa asalý artýracak.
				}
			}// Ýlk baþta bütün sayýlarý asal kabul ettim. j ye bölündüðünde kalan olmazsa asalý bir artýracak.Artýrmazsa sayi asaldýr
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
			ort = (double) toplam / adet; // Ortalama tam sayý çýkmayabilir diye deðiþken dönüþtürme kullandým.
			printf("\nAsal Sayilarin Ortalamasi: %.2f",ort);
		}
		else // adet 0 olursa aralarýnda asal sayý yokturu bastýrdým.
		{
			printf("Aralarinda Asal Sayi Yoktur.");
		}
	}
	else if(sayi2 < sayi1) // sayi1 i sayi2 den büyük girebilir diye ayýrdým.
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
