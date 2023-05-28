#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

bool anahtar=false;
char baslangic()
{
	system("CLS");
	char cevap[4];
	printf("\nDogu yonunde buyuk bir satonun onundesin. Iceri girmen gerekiyor yoksa pesindekiler seni yakalayacaklar.\n(Kullanilabilir komutlar: dogu)\n");
	gets(cevap);
	
	if(strcmp(cevap,"dogu") == 0 || strcmp(cevap,"DOGU") == 0)
	{
		oda1();
	}
	else
	{
		printf("Gecersiz komut\a");
		sleep(2);
		system("CLS");
		baslangic();
	}
}

void oda1()
{
	system("CLS");
	char cevap1[8];
	printf("\nSonunda iceridesin.Yemek masasi uzerinden bir seyler yiyebilirsin.\n(Kullanilabilir komutlar: dogu,bati,kuzey,guney,yemek ye)\n");
	gets(cevap1);
	
	if(strcmp(cevap1,"dogu") == 0 || strcmp(cevap1,"DOGU") == 0)
	{
		oda6();
	}
	else if(strcmp(cevap1,"bati") == 0 || strcmp(cevap1,"BATI") == 0)
	{
		baslangic();
	}
	else if(strcmp(cevap1,"kuzey") == 0 || strcmp(cevap1,"KUZEY") == 0)
	{
		oda2();
	}
	else if(strcmp(cevap1,"guney") == 0 || strcmp(cevap1,"GUNEY") == 0)
	{
		oda3();
	}
	else if(strcmp(cevap1,"yemek ye") == 0 || strcmp(cevap1,"YEMEK YE") == 0)
	{
		printf("Yedigin yemekler zehirli birer tuzakti...Zehirlenerek oldun...\n");
		sleep(2);
		printf("Oyun tekrar basliyor..");
		sleep(2);
		system("CLS");
		baslangic();
	}
	else
	{
		printf("Gecersiz komut\a");
		sleep(2);
		system("CLS");
		oda1();	
	}
}

void oda2()
{
	system("CLS");
	printf("\nKhaleesi nin Dracarys sesini duymanla beraber ejderha atesi altinda yanarak oldun...\n");
	sleep(2);
	printf("Oyun tekrar basliyor...");
	sleep(2);
	system("CLS");
	baslangic();	
}

void oda3()
{
	system("CLS");
	char cevap3[6];
	printf("\nKucuk bir odadasin.Ortada bir yatak var.Yorgunsan dinlenebilirsin.\n(Kullanilabilir komutlar: dogu,kuzey,guney,dinlen)\n");
	gets(cevap3);
	
	if(strcmp(cevap3,"dogu") == 0 || strcmp(cevap3,"DOGU") == 0)
	{
		oda5();
	}
	else if(strcmp(cevap3,"kuzey") == 0 || strcmp(cevap3,"KUZEY") == 0)
	{
		oda1();
	}
	else if(strcmp(cevap3,"guney") == 0 || strcmp(cevap3,"GUNEY") == 0)
	{
		oda4();
	}
	else if(strcmp(cevap3,"dinlen") == 0 || strcmp(cevap3,"DINLEN") == 0)
	{
		printf("Satonun muhafizlari seni fark edip hemen disari attilar!\n\n");
		sleep(3);
		printf("Oyun tekrar basliyor...");
		sleep(3);
		system("CLS");
		baslangic();
	}
	else
	{
		printf("Gecersiz komut\a");
		sleep(2);
		system("CLS");
		oda3();
	}
}

void oda4()
{
	system("CLS");
	printf("\nTissss..Bir piton yilani tarafindan olduruldun..Bogulurken keske C yerine Python mu ogrenseydim diye kafandan gecirdin\n");
	sleep(2);
	printf("Oyun tekrar basliyor...");
	sleep(2);
	baslangic();	
}

void oda5()
{
	system("CLS");
	char cevap5[10];
	printf("\nCok karanlik bir odadasin.Parlayan bir anahtar var.\n(Kullanilabilir komutlar: bati,anahtar al)\n");
	gets(cevap5);
	if(strcmp(cevap5,"bati") == 0 || strcmp(cevap5,"BATI") == 0)
	{
		oda3();
	}
	else if(strcmp(cevap5,"anahtar al") == 0 || strcmp(cevap5,"ANAHTAR AL") == 0)
	{
		anahtar=true;
		printf("Anahtari aldin!\n");
		sleep(2);
		oda3();
	}
	else
	{
		printf(" Gecersiz komut\a");
		sleep(2);
		system("CLS");
		oda5();
	}
}

void oda6()
{
	system("CLS");
	printf("\nBilgisayar tarafindan yonetilen odadasin.0 ile 9 arasinda bir sayi tutmus.Uc denemede bulmalisin.\n");
	if(anahtar==true)
	{
		srand(time(NULL));
		int t1,t2,t3;
		int sayi = rand() % 10;
		printf(" 3 tahmin giriniz: ");
		scanf("%d %d %d",&t1,&t2,&t3);
		if(sayi==t1 || sayi==t2 || sayi==t3)
		{
			printf("Tebrikler! Dogru sayiyi (%d) buldun ve kilitli kapiyi acarak prensesi kurtardin!",sayi);
		}
		else
		{
			printf("3 denemede bulamadin...Odaya zehirli bir gaz dolmaya basladi ve oldun...");
		}
	}
	else 
	{
		srand(time(NULL));
		int t1,t2,t3;
		int sayi = rand() % 10;
		printf("3 tahmin giriniz: ",sayi);
		scanf("%d %d %d",&t1,&t2,&t3);
		if(sayi==t1 || sayi==t2 || sayi==t3)
		{
			printf("Dogru sayiyi (%d) buldun ancak kilitli kapiyi acacak anahtar yaninda degil..Odaya zehirli bir gaz dolmaya basladi ve oldun..",sayi);
		}
		else
		{
			printf("3 denemede bulamadin...Odaya zehirli bir gaz dolmaya basladi ve oldun...");
		}
	}
}
int main() {
	baslangic();
	return 0;
}
