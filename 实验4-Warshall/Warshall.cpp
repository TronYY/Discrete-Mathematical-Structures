#include <stdio.h>
int M[100][100],closure[100][100],n;
void solve()
{
	int i,j,k;
	for (k=1;k<=n;k++)
		for (i=1;i<=n;i++)
			for (j=1;j<=n;j++)
				closure[i][j]=closure[i][k]&&closure[k][j]||closure[i][j];
}
void main()
{
	int i,j;
	printf("Please input the size of matrix M[n*n]---n=");
	scanf("%d",&n);
	printf("Please input matix M.\n");
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
		{
			scanf("%d",&M[i][j]);
			closure[i][j]=M[i][j];
		}
	solve();
    printf("The transitive closure of M(R) is:\n");
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
			printf("%d ",closure[i][j]);
		printf("\n");		
	}
}

