/*finding the approximate value of e^x*/

#include<stdio.h>
float Exp(float a, float b);
float factorial(float n); 
float raisedto(float j, float k);


int main()
{
	float x;
	int n;
	printf("input x and n: ");
	scanf("%f %d ", &x, &n);
	
	printf("%f",Exp(x,n));
	return 0;
} 


float factorial(float n)
{
	float c;
	float fact = 1;
	for (c = 1; c <=n; c++)
	{
		fact = fact*c;
	}
	return fact;
}

float raisedto(float j, float k)
{
	int i = 0; 
	int pro = 1;
	for (i=0; i < k; i++)
	{
		pro = pro*j;
	}
	return pro;
} 
float Exp(float a, float b)
{
	float sum = 0;
	int i;	
	for (i = 1; i <= b; i++)
		{
			sum = sum + (raisedto(a,i)/factorial(i));
		}	
	sum = 1 + sum; 
	return sum;
}

