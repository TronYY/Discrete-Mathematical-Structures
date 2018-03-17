#include <stdio.h>
int a[101][101],b[101][101],c[101][101],n,N;

void product(int N)
{
	int i,j,k,t;
	t=1;
	while (t<N) 
	{
		t++;
		for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
		{
			c[i][j]=0;
			for (k=1;k<=n;k++)
				if (a[i][k] && b[k][j])
				{
					c[i][j]=1;
					break;
				}
		}
		for (i=1;i<=n;i++)
			for (j=1;j<=n;j++)
				b[i][j]=c[i][j];
	}
}

void main()
{
	int i,j;
	printf("Please input the size of matrix A[n*n]---n=");	
	scanf("%d",&n);
	printf("Please input matrix A.\n");
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
			b[i][j]=a[i][j];
		}
	
			
	printf("Please input N factors.\n");
	scanf("%d",&N);
	product(N);
	printf("The Boolean product(%d factors) is:\n",N);
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}
}
