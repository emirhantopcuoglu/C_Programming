#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <time.h>

int main(int argc, char *argv[]) {
	int doganSLXPuan=0,ferrariPuan=0,sayi,i,j;
	
	while(doganSLXPuan<100 && ferrariPuan<100)
	{
		srand(time(NULL));
		sayi = 1 + rand() % 10;
		printf("Gelen sayi: %d\n",sayi);
		
		if(doganSLXPuan<0)
		{
			doganSLXPuan=0;
		}
		if(ferrariPuan<0)
		{
			ferrariPuan=0;
		}
		
		if(sayi==1 || sayi==2)
		{
			doganSLXPuan=doganSLXPuan+3;
			ferrariPuan=ferrariPuan+0;
			if(doganSLXPuan<0)
			{
				doganSLXPuan=0;
			}
			if(ferrariPuan<0)
			{
				ferrariPuan=0;
			}
			
			for(i=0;i<=doganSLXPuan;i++)
			{
				printf(" ");
			}
			printf("X");
			printf("\n");
			for(j=0;j<=ferrariPuan;j++)
			{
				printf(" ");
			}
			printf("F\n");
			printf("Dogan: %d\n",doganSLXPuan);
			printf("Ferrari: %d",ferrariPuan);
			sleep(1);
			system("CLS");
		}
		if(sayi==3 || sayi==4)
		{
			doganSLXPuan=doganSLXPuan+3;
			ferrariPuan=ferrariPuan+9;
			if(doganSLXPuan<0)
			{
				doganSLXPuan=0;
			}
			if(ferrariPuan<0)
			{
				ferrariPuan=0;
			}
			for(i=0;i<=doganSLXPuan;i++)
			{
				printf(" ");
			}
			printf("X");
			printf("\n");
			for(j=0;j<=ferrariPuan;j++)
			{
				printf(" ");
			}
			printf("F\n");
			printf("Dogan: %d\n",doganSLXPuan);
			printf("Ferrari: %d",ferrariPuan);
			sleep(1);
			system("CLS");		
		}
		if(sayi==5)
		{
			doganSLXPuan=doganSLXPuan+3;
			ferrariPuan=ferrariPuan-12;
			if(doganSLXPuan<0)
			{
				doganSLXPuan=0;
			}
			if(ferrariPuan<0)
			{
				ferrariPuan=0;
			}
			for(i=0;i<=doganSLXPuan;i++)
			{
				printf(" ");
			}
			printf("X");
			printf("\n");
			for(j=0;j<=ferrariPuan;j++)
			{
				printf(" ");
			}
			printf("F\n");
			printf("Dogan: %d\n",doganSLXPuan);
			printf("Ferrari: %d",ferrariPuan);
			sleep(1);
			system("CLS");
		}
		if(sayi==6 || sayi==7)
		{
			doganSLXPuan=doganSLXPuan-6;
			ferrariPuan=ferrariPuan+1;
			if(doganSLXPuan<0)
			{
				doganSLXPuan=0;
			}
			if(ferrariPuan<0)
			{
				ferrariPuan=0;
			}
			for(i=0;i<=doganSLXPuan;i++)
			{
				printf(" ");
			}
			printf("X");
			printf("\n");
			for(j=0;j<=ferrariPuan;j++)
			{
				printf(" ");
			}
			printf("F\n");
			printf("Dogan: %d\n",doganSLXPuan);
			printf("Ferrari: %d",ferrariPuan);
			sleep(1);
			system("CLS");	
		}
		if(sayi==8)
		{
			doganSLXPuan=doganSLXPuan+1;
			ferrariPuan=ferrariPuan+1;
			if(doganSLXPuan<0)
			{
				doganSLXPuan=0;
			}
			if(ferrariPuan<0)
			{
				ferrariPuan=0;
			}
			for(i=0;i<=doganSLXPuan;i++)
			{
				printf(" ");
			}
			printf("X");
			printf("\n");
			for(j=0;j<=ferrariPuan;j++)
			{
				printf(" ");
			}
			printf("F\n");
			printf("Dogan: %d\n",doganSLXPuan);
			printf("Ferrari: %d",ferrariPuan);
			sleep(1);
			system("CLS");	
		}
		if(sayi==9 || sayi==10)
		{
			doganSLXPuan=doganSLXPuan+1;
			ferrariPuan=ferrariPuan-2;
			if(doganSLXPuan<0)
			{
				doganSLXPuan=0;
			}
			if(ferrariPuan<0)
			{
				ferrariPuan=0;
			}
			for(i=0;i<=doganSLXPuan;i++)
			{
				printf(" ");
			}
			printf("X");
			printf("\n");
			for(j=0;j<=ferrariPuan;j++)
			{
				printf(" ");
			}
			printf("F\n");
			printf("Dogan: %d\n",doganSLXPuan);
			printf("Ferrari: %d",ferrariPuan);
			sleep(1);
			system("CLS");	
		}
		
	}
	if(doganSLXPuan>=100)
	{
		printf("Dogan kazandi!\a");
	}
	if(ferrariPuan>=100)
	{
		printf("Ferrari kazandi!\a");
	}
	return 0;
}
