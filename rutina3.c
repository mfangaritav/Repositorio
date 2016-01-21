#include <stdio.h>
 
int main (  )
{
	FILE *fp = fopen("datos.txt", "ab+");
	float t0=0;
 	float x0=10;
	float v0=0;
	float v=v0;
	char v1;
	char x1;
	char t1;
	float x=x0;
	float t=t0;
	float b=20;
	float p=500;
	float h=0;
	h=(b-t0)/p;
	int i=0;
	fprintf(fp,"Tiempo Distancia\n");
	while(i<p)
	{
	fprintf(fp,"%f :", t);
	fprintf(fp,"%f ", x);
	fprintf(fp,"\n");
	t=t+h;
	v=v0-h*x0;
	x=x0+h*v0;
	x0=x;
	v0=v;
	i=i+1;
	}
	return 0;
}

