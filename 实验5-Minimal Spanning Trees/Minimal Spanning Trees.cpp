#include <stdio.h>
#define maxnum 999999999
int M[100][100],X[100],F[2][100],n,Fnum,sum;
int equal()
{
	int i;
	for(i=1;i<=n;i++)
		if (X[i]==0) return(0);
	return(1);
}
int dota()
{
	int i,j;
	for(i=1;i<=n;i++)
		for (j=1;j<=n;j++)
			if ((i!=j)&&(X[i])&&(X[j]==0)&&(M[i][j]<maxnum)) return(1);
	return(0);
}
void prim()
{
	int i,j,min,v1=0,v2=0;
	min=maxnum;
	for(i=1;i<=n;i++)
		if (X[i])

		for(j=1;j<=n;j++)
			if ((!X[j])&&(i!=j))

				if (M[i][j]<min)
				{
					min=M[i][j];
					v1=i;
					v2=j;
				}
	if (min!=maxnum)
	{
		X[v2]=1;
		Fnum++;
		F[0][Fnum]=v1;
		F[1][Fnum]=v2;
		sum=sum+min;
	}
}
void main()
{  int i,j;
   scanf("%d",&n);
   for (i=1;i<=n;i++)
	   for (j=1;j<=n;j++)
	   {
		   scanf("%d",&M[i][j]);
		   if (M[i][j]==0) M[i][j]=maxnum;
	   }

   for (i=1;i<=n;i++) X[i]=0;
   X[1]=1;
   while ((!equal())&&(dota())) prim();
   if (equal())
   {
	   for(i=1;i<=Fnum;i++)
		   printf("%c,%c\n",F[0][i]+64,F[1][i]+64);
	   printf("The total weight is %d.",sum);
   }
   else printf("G is not connected.");
}