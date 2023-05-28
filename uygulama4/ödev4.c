#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void diziyiYazdir()
	{	
		int dizi[10];
		int i,j;
		srand(time(NULL));
		for(i=0;i<=9;i++)
		{
			dizi[i]=rand() % 51;
			for(j=0;j<i;j++)
			{
				if(dizi[i]==dizi[j])
				{
					dizi[i]=rand()%52;
					j=0;		
				}
			}
			if(i<=8)
			{
				printf("%d,",dizi[i]);
			}
			else
			{
				printf("%d",dizi[i]);
			}
		}	
	}
	
	void diziyiTerstenYazdir()
	{
		int dizi[10];
		int i,j;
		
		srand(time(NULL));
		for(i=0;i<=9;i++)
		{
			dizi[i]=rand() % 51;
			for(j=0;j<i;j++)
			{
				if(dizi[i]==dizi[j])
				{
					dizi[i]=rand()%52;
					j=0;		
				}
			}
			if(i<=8)
			{
				printf("%d,",dizi[i]);
			}
			else
			{
				printf("%d",dizi[i]);
			}
		}	
		printf("\n");	
		printf("Ters: ");
		for(i=9;i>=0;i--)
		{
			for(j=9;j>i;j--)
			{
				if(dizi[i]==dizi[j])
				{
					dizi[i]=rand()%52;
					j=0;		
				}
			}
			if(i>0)
			{
				printf("%d,",dizi[i]);
			}
			else
			{
				printf("%d",dizi[i]);
			}
		}		
	}
	
	void maxMinYazdir(char c)
	{
		printf("Seciminiz (K)ucuk/(B)uyuk: ");
		scanf("%s",&c);
		
		switch (c)
		{
			int dizi[10];
			int i,j,k,min,max;
			
			case 'K': 
			srand(time(NULL));
			for(i=0;i<=9;i++)
			{
				dizi[i]=rand() % 51;
				for(j=0;j<i;j++)
				{
					if(dizi[i]==dizi[j])
					{
						dizi[i]=rand()%52;
						j=0;		
					}
				}
				if(i<=8)
				{
					printf("%d,",dizi[i]);
				}
				else
				{
					printf("%d",dizi[i]);
				}
			}
			min=dizi[0];
			for(j=0;j<=8;j++)
			{
				if(min<dizi[j+1])
				{
					min=min;
				}	
				else
				{
					min=dizi[j+1];
				}	
			}
			printf("\nMIN: %d",min);
			break;
			
			case 'B':
			srand(time(NULL));
			for(i=0;i<=9;i++)
			{
				dizi[i]=rand() % 51;
				for(j=0;j<i;j++)
				{
					if(dizi[i]==dizi[j])
					{
						dizi[i]=rand()%52;
						j=0;		
					}
				}
				if(i<=8)
				{
					printf("%d,",dizi[i]);
				}
				else
				{
					printf("%d",dizi[i]);
				}
			}
			max=dizi[0];
			for(j=0;j<=8;j++)
			{
				if(max>dizi[j+1])
				{
					max=max;
				}	
				else
				{
					max=dizi[j+1];
				}	
			}
			printf("\nMAX: %d",max);
			break;
			
			default: printf("Hatali giris yaptiniz.Lutfen buyuk harf (K/B) kullaniniz.\a");
			
		}
	}
	
	void sirala(char c)
	{
		printf("Seciminiz (K)ucuk/(B)uyuk: ");
		scanf("%s",&c);
		
		switch (c)
		{
			int dizi[10],i,j,k;
			case 'K':
			
			srand(time(NULL));
			for(i=0;i<=9;i++)
			{
				dizi[i]=rand() % 51;
				for(j=0;j<i;j++)
			{
				if(dizi[i]==dizi[j])
				{
					dizi[i]=rand()%52;
					j=0;		
				}
			}
			if(i<=8)
			{
				printf("%d,",dizi[i]);
			}
			else
			{
				printf("%d",dizi[i]);
			}
			}	
			
			for(i=0;i<=9;i++)
			{
				for(j=1;j<10-i;j++)
				{
					if(dizi[j-1]>dizi[j])
					{
						int a = dizi[j];
						dizi[j]=dizi[j-1];
						dizi[j-1]=a;
						
					}
				}
			}
			printf("\n");
			for(k=0;k<=8;k++)
			{
				printf("%d,",dizi[k]);
			}
			printf("%d",dizi[9]);
			break;
			
			case 'B':
				
			srand(time(NULL));
			for(i=0;i<=9;i++)
			{
				dizi[i]=rand() % 51;
				for(j=0;j<i;j++)
			{
				if(dizi[i]==dizi[j])
				{
					dizi[i]=rand()%52;
					j=0;		
				}
			}
			if(i<=8)
			{
				printf("%d,",dizi[i]);
			}
			else
			{
				printf("%d",dizi[i]);
			}
			}	
			for(i=0;i<=9;i++)
			{
				for(j=1;j<10-i;j++)
				{
					if(dizi[j-1]<dizi[j])
					{
						int a = dizi[j];
						dizi[j]=dizi[j-1];
						dizi[j-1]=a;
						
					}
				}
			}
			printf("\n");
			for(k=0;k<=8;k++)
			{
				printf("%d,",dizi[k]);
			}
			printf("%d",dizi[9]);
			break;
			
			default: printf("Hatali giris yaptiniz.Lutfen buyuk harf (K/B) kullaniniz.\a");
		}		
	}
	
	void istatistikGoster()
	{
		int dizi[10];
		int i,j;
		double toplam=0,toplam2=0,ort,sapma;
		srand(time(NULL));
		for(i=0;i<=9;i++)
		{
			dizi[i]=rand() % 51;
			for(j=0;j<i;j++)
			{
				if(dizi[i]==dizi[j])
				{
					dizi[i]=rand()%52;
					j=0;		
				}
			}
			if(i<=8)
			{
				printf("%d,",dizi[i]);
			}
			else
			{
				printf("%d",dizi[i]);
			}
		}	
		printf("\n");
		for(i=0;i<=9;i++)
		{
			toplam=toplam+dizi[i];
		}
		ort=toplam/10;
		
		for(i=0;i<=9;i++)
		{
			toplam2 = ((dizi[i] - ort)*(dizi[i] - ort)) + toplam2;
		}
		sapma = (sqrt(toplam2/9)) ;
		printf("Ortalama %.2lf\n",ort);
		printf("Standart Sapma: %.2lf",sapma);				
	}

int main() {	
	int secim;	
	printf("1 - Yazdir\n");
	printf("2 - Tersten Yazdir\n");
	printf("3 - MAX-MIN Yazdir\n");
	printf("4 - Sirala\n");
	printf("5 - Istatistik Goster\n\n");
	printf("SECIMINIZ: ");
	scanf("%d",&secim);
	
	switch(secim)
	{
	char c;
	case 1 : diziyiYazdir(); break;
	case 2 : diziyiTerstenYazdir();	break;
	case 3 : maxMinYazdir(c); break;
	case 4 : sirala(c); break;
	case 5 : istatistikGoster(); break;
	default : printf("Hatali giris yaptiniz.Lutfen [1,5] araliginda bir rakam giriniz.\a");
	}
	return 0;
	}
	
	
	
	
	

