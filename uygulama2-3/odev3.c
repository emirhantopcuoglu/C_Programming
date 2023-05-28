#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	double yukseklik,onsantim=0.1,toplamyol=0,ziplayismesafesi=0,ziplamasayisi=0;
	char top;
	printf("Lutfen top turunu (B,F,V) giriniz: ");
	scanf("%s",&top);
	printf("\nLutfen topun birakilacagi yuksekligi metre cinsinden giriniz: ");
	scanf("%lf",&yukseklik);
	
	switch(top)
	{
		case 'B': toplamyol=yukseklik; 
		while(yukseklik>=onsantim)
		{
			yukseklik=yukseklik*0.7;
			ziplayismesafesi=yukseklik*2;
			toplamyol=toplamyol+ziplayismesafesi;
			
			ziplamasayisi++;
		}
		toplamyol=toplamyol-ziplayismesafesi;
		printf("\nTopun kat ettigi toplam mesafe: %.2lf metre\n",toplamyol+yukseklik);
		printf("\nTopun ziplama sayisi: %.0lf",ziplamasayisi);
		
		break;
		
		case 'F':  toplamyol=yukseklik; 
		while(yukseklik>=onsantim)
		{
			yukseklik=yukseklik*0.75;
			ziplayismesafesi=yukseklik*2;
			toplamyol=toplamyol+ziplayismesafesi;
			
			ziplamasayisi++;	
		}
		toplamyol=toplamyol-ziplayismesafesi;
		printf("\nTopun kat ettigi toplam mesafe: %.2lf metre\n",toplamyol+yukseklik);
		printf("\nTopun ziplama sayisi: %.0lf",ziplamasayisi);
		
		break;
		
		case 'V': toplamyol=yukseklik; 
		while(yukseklik>=onsantim)
		{
			yukseklik=yukseklik*0.9;
			ziplayismesafesi=yukseklik*2;
			toplamyol=toplamyol+ziplayismesafesi;
			
			ziplamasayisi++;
		}
		toplamyol=toplamyol-ziplayismesafesi;
		printf("\nTopun kat ettigi toplam mesafe: %.2lf metre\n",toplamyol+yukseklik);
		printf("\nTopun ziplama sayisi: %.0lf",ziplamasayisi); 
		
		break;
		
		default : 
		printf("\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
		printf("Hatali giris yaptiniz.Lutfen top turunu buyuk bas harfle (B,F,V) giriniz.\a");
		printf("\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	}
	return 0;
	}
