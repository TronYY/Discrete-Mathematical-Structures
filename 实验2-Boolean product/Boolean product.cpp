#include <stdio.h>
void main()
{
	int a[101][101],b[101][101],c[101][101],i,j,k,m,p,n;
	printf("Please input the size of matrix A[m*p],B[p*n]---m,p,n.\n");	
	scanf("%d,%d,%d",&m,&p,&n);
	printf("Please input matrix A.\n");
	for (i=1;i<=m;i++)
		for (j=1;j<=p;j++)
			scanf("%d",&a[i][j]);
	printf("Please input matrix B.\n");
	for (i=1;i<=p;i++)
		for (j=1;j<=n;j++)
			scanf("%d",&b[i][j]);
	for (i=1;i<=m;i++)
		for (j=1;j<=n;j++)
		{
			c[i][j]=0;
			for (k=1;k<=p;k++)
				if (a[i][k] && b[k][j])
				{
					c[i][j]=1;
					break;

				}
		}
	printf("The Boolean product C is:\n");
	for (i=1;i<=m;i++)
	{
		for (j=1;j<=n;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
   
   


}