#include<iostream>
#include<stdio.h>
#include<math.h>

int wzglpierwsze(int n, int a)
{
	int pomoc;
	if(a==1)
		return 1;
	
	if(n%a==0)
		return 0;
	
	for(int i=2;i<(a/2)+1;i++)
	{
		pomoc=a%i;
		if(pomoc==0&&n%i==0)
			return 0;
	}
	return 1;
}

void jebnijmytabelke(int n)
{
	printf("\n");
	int A[n],j=0;
	for(int i=1;i<n;i++)
		if(wzglpierwsze(n,i)==1)
		{
			A[j]=i;
			j++;
		}
	printf("	");
	for(int a=0;a<j;a++)
	printf("%d	",A[a]);
	printf("\n");
	for(int w=0;w<j;w++)
	{
		for(int k=0;k<j+1;k++)
		{
			if(k!=0)
			printf("	%d",(A[w]*A[k-1])%n);
			else
			printf("%d",A[w]);
			//system("pause");
		}
		printf("\n");
	}
	
}

int main()
{
	int n,i;
	printf("podaj n");
	scanf("%d",&n);
	
	printf("Z*(%d)=",n);
	for(i=1;i<n;i++)
		if(wzglpierwsze(n,i)==1)
		printf("%d, ",i);
		
	jebnijmytabelke(n);
	
	system("pause");
	
}
