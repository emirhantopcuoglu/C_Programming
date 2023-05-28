#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	double A1,B1,C1,A2,B2,C2;
	
	printf("Lutfen birinci dogru icin A1 B1 C1 degerlerini giriniz: ");
	scanf("%lf %lf %lf",&A1,&B1,&C1);
	printf("Lutfen ikinci dogru icin A2 B2 C2 degerlerini giriniz: ");
	scanf("%lf %lf %lf",&A2,&B2,&C2);
	printf("\n");
	
	double egim = (A1*B2-A2*B1)/(A1*A2+B1*B2);
	double alpha = (atan(egim)*180)/(3.1416);
	double x0 = (B1*C2-B2*C1)/(A1*B2-A2*B1);
	double y0 = (C1*A2-C2*A1)/(A1*B2-A2*B1);
	double uzaklik = (fabs(C1-C2))/(sqrt(A1*A1+B1*B1));
	
	if (A1*A2+B1*B2==0)
	{
		printf("Dogrular birbirine diktir.\n");
		printf("Alpha: %2.2lf \n",alpha);
		printf("x0=%2.2lf , y0=%2.2lf",x0,y0);
	}
	else if (A1/A2 != B1/B2)
	{
		printf("Dogrular kesisir.\n");
		printf("Alpha: %2.2lf \n",alpha);
		printf("x0=%2.2lf , y0=%2.2lf",x0,y0);
	}	
	else if ((A1/A2)==(B1/B2) && (B1/B2)==(C1/C2))
	{
		printf("Dogrular cakisiktir");
	}
	else if ((A1/A2)==(B1/B2) && (B1/B2)!=(C1/C2))
	{
		printf("Dogrular birbirine paraleldir. \n");
		printf("Iki dogru arasi uzaklik: %2.2lf",uzaklik);
	}
		return 0;
}
