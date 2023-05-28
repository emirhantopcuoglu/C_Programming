#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *SIFIR = "SIFIR";
char *BIR = "BIR";
char *IKI = "IKI";
char *UC = "UC";
char *DORT = "DORT";
char *BES = "BES";
char *ALTI = "ALTI";
char *YEDI = "YEDI";
char *SEKIZ = "SEKIZ";
char *DOKUZ = "DOKUZ";

int i,n,ilkRakam,ikinciRakam;
char sifre[40] ;
char harfGetir(int ilkRakam, int ikinciRakam)
{
	ikinciRakam--;
	if(sifre[0]=='-')
	{
		printf("Hatali giris!\a");
	}
	else if(ilkRakam == 0)
	{
		n=strlen(SIFIR);
		if(ikinciRakam<n)
		{
			printf("%c",*(SIFIR + ikinciRakam));
		} 
		else
		{
			printf("Hatali giris!\a");
		}
	}
	else if(ilkRakam == 1)
	{
		n=strlen(BIR);
		if(ikinciRakam<n)
		{
			printf("%c",*(BIR + ikinciRakam));
		} 
		else
		{
			printf("Hatali giris!\a");
		}
	}
	else if(ilkRakam == 2)
	{
		n=strlen(IKI);
		if(ikinciRakam<n)
		{
			printf("%c",*(IKI + ikinciRakam));
		} 
		else
		{
			printf("Hatali giris!\a");
		}
	}
	else if(ilkRakam == 3)
	{
		n=strlen(UC);
		if(ikinciRakam<n)
		{
			printf("%c",*(UC + ikinciRakam));
		} 
		else
		{
			printf("Hatali giris!\a");
		}
	}
	else if(ilkRakam == 4)
	{
		n=strlen(DORT);
		if(ikinciRakam<n)
		{
			printf("%c",*(DORT + ikinciRakam));
		} 
		else
		{
			printf("Hatali giris!\a");
		}
	}
	else if(ilkRakam == 5)
	{
		n=strlen(BES);
		if(ikinciRakam<n)
		{
			printf("%c",*(BES + ikinciRakam));
		} 
		else
		{
			printf("Hatali giris!\a");
		}
	}
	else if(ilkRakam == 6)
	{
		n=strlen(ALTI);
		if(ikinciRakam<n)
		{
			printf("%c",*(ALTI + ikinciRakam));
		} 
		else
		{
			printf("Hatali giris!\a");
		}
	}
	else if(ilkRakam == 7)
	{
		n=strlen(YEDI);
		if(ikinciRakam<n)
		{
			printf("%c",*(YEDI + ikinciRakam));
		} 
		else
		{
			printf("Hatali giris!\a");
		}
	}
	else if(ilkRakam == 8)
	{
		n=strlen(SEKIZ);
		if(ikinciRakam<n)
		{
			printf("%c",*(SEKIZ + ikinciRakam));
		} 
		else
		{
			printf("Hatali giris!\a");
		}
	}
	else if(ilkRakam == 9)
	{
		n=strlen(DOKUZ);
		if(ikinciRakam<n)
		{
			printf("%c",*(DOKUZ + ikinciRakam));
		} 
		else
		{
			printf("Hatali giris!\a");
		}
	}
}
main() {
	
	printf("Cozmek istediginiz sifreyi giriniz: ");
	scanf("%s",&sifre); 
	for(i=0;i<=strlen(sifre);i+=3)
	{
		ilkRakam = sifre[i] - '0';
		ikinciRakam = sifre[i+1] - '0';
		harfGetir(ilkRakam,ikinciRakam);
	}
}
